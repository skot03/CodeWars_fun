#include <string>
class RomanHelper{
  public:
   int value(char r){
     switch(r){
         case 'I':
         return 1;
         case 'V':
         return 5;
         case 'X':
         return 10;
         case 'L':
         return 50;
         case 'C':
         return 100;
         case 'D':
         return 500;
         case 'M':
         return 1000;
         default:
         return 0;
         }
      }

std::string to_roman(unsigned int n) {
    int num[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    std::string result = "";

    for (int i = 0; i < 13; ++i) {
        while (n >= num[i]) {
            result += sym[i];
            n -= num[i];
        }
    }

    return result;
}
 int from_roman(std::string rn) {
    unsigned int result = 0;

    for (int i = 0; i < rn.length(); ++i) {
        int s1 = value(rn[i]);

        if (i + 1 < rn.length()) {
            int s2 = value(rn[i + 1]);

            if (s1 >= s2) {
                result += s1;
            } else {
                result += (s2 - s1);
                i++;
            }
        } else {
            result += s1;
        }
    }

    return result;
}
} RomanNumerals;
