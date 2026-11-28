#include <iostream>

using namespace std;


// void isEven(int x) {
//     if (x % 2 == 0) {
//         cout << "Even" << endl;
//     }
// }

// void isPositive(int x) {
//     if (x >= 0) {
//         cout << "Positive" << endl;
//     }
// }

// int main() {
    
//     int n;
//     cout << "INPUT: ";
//     cin >> n;
    
//     isPositive(n);
//     isEven(n);
    
    
//     return 0;
// }


bool isEven(int x) {
    return x % 2 == 0;
}

bool isPositive(int x) {
    return x > 0;
}

int main() {
    int n;
    cin >> n;

    if (isPositive(n)) {
        cout << "Positive" << endl;
    } else {
        cout << "Not Positive" << endl;
    }

    if (isEven(n)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}