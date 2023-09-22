#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, aux;

    cout << "Enter the value to be received: " << endl;
    cin >> num1;
    cout << "Enter the received value: " << endl;
    cin >> num2;
    num3 = num1 - num2;     // Calculate num3
    cout << "The result is: " << num3 << endl; // Print num3

    if (num3 >= 20 && num3 <= 100) {
        aux = num3 - (num3 % 10); // Get nearest ten

        switch (aux) {
            case 20: cout << "twenty";       break;
            case 30: cout << "thirty";       break;
            case 40: cout << "forty";        break;
            case 50: cout << "fifty";        break;
            case 60: cout << "sixty";        break;
            case 70: cout << "seventy";      break;
            case 80: cout << "eighty";       break;
            case 90: cout << "ninety";       break;
            case 100: cout << "one hundred"; break;
            default: cout << "Out of range"; break;
        }

        if (num3 % 10 > 0) {
            cout << " and ";
            aux = num3 % 10;
            switch (aux) {
                case 1:  cout << "one";          break;
                case 2:  cout << "two";          break;
                case 3:  cout << "three";        break;
                case 4:  cout << "four";         break;
                case 5:  cout << "five";         break;
                case 6:  cout << "six";          break;
                case 7:  cout << "seven";        break;
                case 8:  cout << "eight";        break;
                case 9:  cout << "nine";         break;
                default: cout << "Out of range"; break;
            }
        }
    } else if (num3 <= 19) {
        switch (num3) {
            case 0:  cout << "zero";         break;
            case 1:  cout << "one";          break;
            case 2:  cout << "two";          break;
            case 3:  cout << "three";        break;
            case 4:  cout << "four";         break;
            case 5:  cout << "five";         break;
            case 6:  cout << "six";          break;
            case 7:  cout << "seven";        break;
            case 8:  cout << "eight";        break;
            case 9:  cout << "nine";         break;
            case 10: cout << "ten";          break;
            case 11: cout << "eleven";       break;
            case 12: cout << "twelve";       break;
            case 13: cout << "thirteen";     break;
            case 14: cout << "fourteen";     break;
            case 15: cout << "fifteen";      break;
            case 16: cout << "sixteen";      break;
            case 17: cout << "seventeen";    break;
            case 18: cout << "eighteen";     break;
            case 19: cout << "nineteen";     break;
            default: cout << "Out of range"; break;
        }
    } else {
        cout << "Number out of allowed range.";
    }

    return 0;
}
