#include <iostream>
using namespace std;
string numberToText(int number);
int main() {
int number;
cout << "Enter a number between 1 and 99: ";
cin >> number;
cout <<numberToText(number) << endl;
return 0;
}
string numberToText(int number) 
{
string result;
if (number >= 1)
{
if (number == 1) result ="One";
else if (number == 2) result ="Two";
else if (number == 3) result = "Three";
else if (number == 4) result = "Four";
else if (number == 5) result ="Five";
else if (number == 6)result ="Six";
else if (number == 7)result = "Seven";
else if (number == 8) result = "Eight";
else if (number == 9) result = "Nine";
}
if (number >= 10)
{
if (number == 10) result = "Ten";
else if (number == 11) result = "Eleven";
else if (number == 12) result = "Twelve";
else if (number == 13) result = "Thirteen";
else if (number == 14) result = "Fourteen";
else if (number == 15) result = "Fifteen";
else if (number == 16) result = "Sixteen";
 else if (number == 17) result = "Seventeen";
else if (number == 18) result = "Eighteen";
else if (number == 19) result = "Nineteen";
else if (number == 20) result = "Twenty";
    else if (number == 21) result = "TwentyOne";
    else if (number == 22) result = "TwentyTwo";
    else if (number == 23) result = "TwentyThree";
    else if (number == 24) result = "TwentyFour";
    else if (number == 25) result = "TwentyFive";
    else if (number == 26) result = "TwentySix";
    else if (number == 27) result = "TwentySeven";
    else if (number == 28) result = "TwentyEight";
    else if (number == 29) result = "TwentyNine";
    else if (number == 30) result = "Thirty";
    else if (number == 31) result = "ThirtyOne";
    else if (number == 32) result = "ThirtyTwo";
    else if (number == 33) result = "ThirtyThree";
    else if (number == 34) result = "ThirtyFour";
    else if (number == 35) result = "ThirtyFive";
    else if (number == 36) result = "ThirtySix";
    else if (number == 37) result = "ThirtySeven";
    else if (number == 38) result = "ThirtyEight";
    else if (number == 39) result = "ThirtyNine";
    else if (number == 40) result = "Forty";
    else if (number == 41) result = "FortyOne";
    else if (number == 42) result = "FortyTwo";
    else if (number == 43) result = "FortyThree";
    else if (number == 44) result = "FortyFour";
    else if (number == 45) result = "FortyFive";
    else if (number == 46) result = "FortySix";
    else if (number == 47) result = "FortySeven";
    else if (number == 48) result = "FortyEight";
    else if (number == 49) result = "FortyNine";
    else if (number == 50) result = "Fifty";
    else if (number == 51) result = "FiftyOne";
    else if (number == 52) result = "FiftyTwo";
    else if (number == 53) result = "FiftyThree";
    else if (number == 54) result = "FiftyFour";
    else if (number == 55) result = "FiftyFive";
    else if (number == 56) result = "FiftySix";
    else if (number == 57) result = "FiftySeven";
    else if (number == 58) result = "FiftyEight";
    else if (number == 59) result = "FiftyNine";
    else if (number == 60) result = "Sixty";
    else if (number == 61) result = "SixtyOne";
    else if (number == 62) result = "SixtyTwo";
    else if (number == 63) result = "SixtyThree";
    else if (number == 64) result = "SixtyFour";
    else if (number == 65) result = "SixtyFive";
    else if (number == 66) result = "SixtySix";
    else if (number == 67) result = "SixtySeven";
    else if (number == 68) result = "SixtyEight";
    else if (number == 69) result = "SixtyNine";
    else if (number == 70) result = "Seventy";
    else if (number == 71) result = "SeventyOne";
    else if (number == 72) result = "SeventyTwo";
    else if (number == 73) result = "SeventyThree";
    else if (number == 74) result = "SeventyFour";
    else if (number == 75) result = "SeventyFive";
    else if (number == 76) result = "SeventySix";
    else if (number == 77) result = "SeventySeven";
    else if (number == 78) result = "SeventyEight";
    else if (number == 79) result = "SeventyNine";
    else if (number == 80) result = "Eighty";
    else if (number == 81) result = "EightyOne";
    else if (number == 82) result = "EightyTwo";
    else if (number == 83) result = "EightyThree";
    else if (number == 84) result = "EightyFour";
    else if (number == 85) result = "EightyFive";
    else if (number == 86) result = "EightySix";
    else if (number == 87) result = "EightySeven";
    else if (number == 88) result = "EightyEight";
    else if (number == 89) result = "EightyNine";
    else if (number == 90) result = "Ninety";
    else if (number == 91) result = "NinetyOne";
    else if (number == 92) result = "NinetyTwo";
    else if (number == 93) result = "NinetyThree";
    else if (number == 94) result = "NinetyFour";
    else if (number == 95) result = "NinetyFive";
    else if (number == 96) result = "NinetySix";
    else if (number == 97) result = "NinetySeven";
    else if (number == 98) result = "NinetyEight";
    else if (number == 99) result = "NinetyNine";}
return result;}
