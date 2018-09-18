/* W15664768 Lupe Valle CS110B hwWeek1.cc 
Calculator:
includes subtraction, addition, division & multiplication features,
enhanced features include square, square root, cube, cube root & power calculations
using inbuilt math library functions
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char mathOp, answer;
    float num1, num2, result;
    cout << "\nLupe says Hi! Welcome to my calculator.\n" << endl;
    cout << "These are your available math operators:" << endl;
    cout << "+ to add, - to subtract," << endl << "* to multiply, / to divide," << endl;
    cout << "| to  square, ! to square root, " << endl ;
    cout << ": to cube, ? to cube root," << endl;
    cout << " and ^ for power of calculations." << endl;
    cout << "\nFormat your calculations like this: " << endl;
    cout << "9 * 5, 9 | 0, 9 ^ 5" << endl << "then hit return" << endl;
    bool keepGoing = true;
while (keepGoing == true)
{
    cout << "\nEnter calculation now: ";
    cin >> num1;
    cin >> mathOp;
    cin >> num2;
   // cout << "Is this correct? : " << num1 << " " << mathOp << " " << num2 << endl;
   // bool keepGoing = true;

    // switch statement to determine math operator & calculate
       switch (mathOp)
       {
         case '+' :
              result = num1 + num2;
              break;

         case '-' :
             result = num1 - num2;
             break; 
         case '*' :
             result = num1 * num2;
             break;
         case '/' :
             result = num1 / num2;
             break;
         case '|' :
             result = num1 * num1;
             break;
         case '!' :
             result = sqrt(num1);
             break;
         case ':' :
             result = num1 * num1 * num1;
             break;
         case '?' :
             result = cbrt(num1);
             break;
         case '^' :
             result = pow(num1,num2);
             break;
       }
     cout << num1 << " " << mathOp << " " << num2 << " = " << result << endl;
     cout << "Do you want to go again? Y or N: ";
     cin >> answer;
     if (answer != 'Y')
        keepGoing = false;
}
    return 0;
}
/*
Guadalupes-MacBook-Pro:CS110B Hubert$ g++ hwWeek1.cc
Guadalupes-MacBook-Pro:CS110B Hubert$ ./a.out

Lupe says Hi! Welcome to my calculator.

These are your available math operators:
+ to add, - to subtract,
* to multiply, / to divide,
| to  square, ! to square root, 
: to cube, ? to cube root,
 and ^ for power of calculations.

Format your calculations like this: 
9 * 5, 9 | 0, 9 ^ 5
then hit return

Enter calculation now: 2 + 0
2 + 0 = 2
Do you want to go again? Y or N: Y

Enter calculation now: 2 * 1
2 * 1 = 2
Do you want to go again? Y or N: Y

Enter calculation now: 2 ! 0
2 ! 0 = 1.41421
Do you want to go again? Y or N: Y

Enter calculation now: 2 : 0
2 : 0 = 8
Do you want to go again? Y or N: Y

Enter calculation now: 2 ^ 3
2 ^ 3 = 8
Do you want to go again? Y or N: N
Guadalupes-MacBook-Pro:CS110B Hubert$ 
*/