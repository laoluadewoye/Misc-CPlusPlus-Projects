//Project #9 - Exponent Calculator. Square function was copied from online, but now I should be able to explain it. 
//The '&' is the address of a variable.
//Without it, the two variables i and j would just be multiplied together.
//With it though, the ADDRESS of variable i is taken as a parameter, not the number represented by i itself. 
//Thus, the function will give the result of the number inside of i's address multiplied j times OVER, instead of multiplying the value of i by the value of j.
/*
  Visualization:
  ('i' inside address) * ('i' inside address) * ('i' inside address) * ('i' inside address) etc.....
  vs
  value of i * value of j
*/

#include <iostream>

using namespace std;

int square(int &i, int j) {
    i = i * j;
    return i;
}

int main() {
    int choose;
    int num;
    int num2;
    cout << "Welcome to the exponent calculator! I couldn't do it before, but now I did.\n";
    cout << "Enter the number you want apply exponent to.\n";
    cin >> num;
    cout << "Enter the power your want to raise to.\n";
    cin >> choose;
    num2 = num;

    while (choose != (1 or -1)) {
        cout << square(num, num2) << ", ";
        if (choose > 0) {
            choose--;
        }
        else if (choose < 0) {
            choose++;
        }
        else if (choose == 0) {
            cout << "Screw you. Do the math yourself you cheeky bloke.\n";
            return 0;
        }
    }

    return 0;
}
