//Comment

/*
 *
 * Multiline comment
 */

#include <iostream> //Includes cout, cin, etc.
#include <vector>
#include <string>
#include <fstream>

using namespace std; //Ensures I don't have to specify as such: std::cout << "Hello World" << endl;

int main() {
    const string divider = "----------------------------------------------";
    cout << divider << endl;


    cout << "Hello World" << endl;

    const double PI = 3.1415926535;
    char myGrade = 'A';
    int myAge = 19;
    bool isHappy = true; //equals 1
    bool isHappyAgain = false; //equals 0;

    float favNum = 3.14592;

    double otherFavNum = 1.6180339887;

    cout << "Favorite Number " << favNum << endl;

    /*
     * Other data types:
     * short int: at least 16 bits.
     * long int: at least 32 bits.
     * long long int: at least 64 bit.
     * unsigned int: Same size as signed version.
     * long double: not less than double.
     */

    cout << "Size of int: " << sizeof(myAge) << " bytes" << endl;
    //4 bytes.

    //Example: Largest int possible. We know how much an int can hold, so let's perform sizeof.

    int largestInt = 2147483647;
    cout << "Size of the biggest int possible: " << sizeof(largestInt) << " bytes" << endl;
    cout << "This is the VALUE of largestInt " << largestInt << endl;
    //The output: This is the VALUE of largestInt 2147483647

    //Example: Let's go one over our current highest, making the final '7' an '8' instead.
    int largestIntOverflow = 2147483648;
    cout << "Size of the largest int possible + 1 " << sizeof(largestInt) << " bytes" << endl;
    cout << "This is the VALUE of largestIntOverflow: " << largestIntOverflow << endl;
    //The output: This is the VALUE of largestIntOverflow: -2147483648
    //This is an example of what happens when you go outside of the bounds using data types.

    cout << divider << endl;


    /*
     * Arithmetic
     */
    //Operators:
    /*
     * +    <== Plus. Duh.
     * -    <= Minus, duh.
     * *    <= Multiply.
     * /    <= Division.
     * %    <= Modulus, WHICH RETURNS THE REMAINDER. THE. REMAINDER. of division.
     * ++   <= Increment.
     * --   <= Decremental.
     */

    //Example: Incrementing, decrementing, after and before a number.
    int five = 5;

    cout << "5++ = " << five++ << endl; //Answer is 5. Increments after getting the value of 5.
    cout << "++5 = " << ++five <<endl; //Answer is 7. Has a value of six due the above operation, adds 1 + 5.
    cout << "5-- = " << five-- << endl; //Answer is 7. Has a value of 7, subtracts 1 after getting value.
    cout << "-5 = " << --five << endl; //Answer is 5. Has a value of 6, decrements by 1 after getting value.

    //Another case of incrementing by another value, using +=

    five += 6; //Equal to five = five + 6.
    cout << divider << endl;
    //C++ follows the order of operations, hurr durr.

    //Division.
    cout << " 4 / 5 = "  << 4 / 5 << endl;
    //Spits out 0.
    cout << "4 / 5 with a float typecast: " << (float) 4 /5 << endl;
    //Spits out 0.8

    cout << divider << endl;

    /*
     * If statements and such.
     */
    //(Logic) operators:
    /*
     * ==   <= Equal to.
     * !=   <= Not equal to.
     * >    <= Greater than
     * <    <= Less than.
     * >=   <= Greater than or equal to.
     * <=   <= Less than or equal to. (also an arrow!)
     * &&   <= "And" **LOGIC OPERATOR**
     * ||   <= "Or" **LOGIC OPERATOR**
     * !    <= "Not" **LOGIC OPERATOR**
     */

    int age = 70;
    int ageAtLastExam = 16;
    bool isNotIntoxicated = true;

    if((age >= 1) && (age < 16)) {
        cout << "You cannot drive." << endl;
    }

    else if (! isNotIntoxicated) {
        cout << "You cannot drive." << endl;
    }
    else {
        cout << "You can drive." << endl;
    }

    cout << divider << endl;

    /*
     * Switch Statements
     */

    int greetingOption = 2;
    switch(greetingOption) {
        case 1:
            cout << "Bonjour." << endl;
            break;
        case 2:
            cout << "Hola" << endl;
            break;
        case 3:
            cout << "hi!" << endl;
            break;
        default:
            cout << "Hello!" << endl;
    }

    cout << divider << endl;

    /*
     * Arrays
     */

    int myFavNums[5]; //This says we need 5 "spaces" for data. This cannot be changed (though vectors you can)

    int badNumbers[5] = {4, 13, 14, 24, 34};
    //All arrays start at an index of 0, so 4 has an index of 0.
    cout << "Bad Number 1: " << badNumbers[0] << endl;

    //Multidimensional array.
    char myName[5][5] = {{'S', 'H', 'O', 'E' }, //Ex: first name
                         {'D', 'E', 'V'}}; //Ex: last name

    cout << "2nd letter in 2nd array " << myName[1][1] << endl;

    //Change the value of the array by using the index.
    myName[0][2] = 'e';
    cout << "New value is " << myName[0][2] << endl;

    /*
     * For loop
     */

    for(int i = 1; i <= 10; i++){
        cout << i << endl;

    }

    //Multidimensional arrays with For loops. Dear. God.
    for(int j = 0; j < 2; j++) {
        for(int k = 0; k < 5; k++) {
            cout << myName[j][k];

        }
        cout << endl;
    }
    return 0;

}
