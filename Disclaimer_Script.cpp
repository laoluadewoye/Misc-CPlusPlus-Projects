//Project #2 - If I ever wanted to add a disclaimer to my code without having to type it again. 

#include <iostream>

using namespace std;

int main() {
    string yes;
    cout << "By CSR.\nDisclaimer: after typing your input, please press your enter key. Say 'yes' to comply\n";
    cin >> yes;
    
    while (yes != "yes") {
        cout << "Please try again to say 'yes'. No capitalization please.\n";
        cin >> yes;
    }
    
    cout << "Thank you for understanding. You can now proceed with the program.";
    return 0;
}
