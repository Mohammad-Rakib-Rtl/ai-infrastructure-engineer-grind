#include <iostream>

using namespace std;

// void checkNumber(long long n) {
//     // if (n == 0) {
//     //     cout << "Zero" << endl;
//     // } else if (n > 0) {
//     //     cout << "Positive" << endl;
//     // } else {
//     //     cout << "Negative";
//     // }

// }

string checkNumber(long long n) {
    if (n == 0) {
        return "Zero";
    } else if (n > 0) {
        return "Positive";
    } else {
        return "Negative";
    }

}


int main() {
    
    // checkNumber(0);
    
    cout << checkNumber(0);
    
    return 0;
}