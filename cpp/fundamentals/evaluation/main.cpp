// // #include <iostream>

// // int main() {
// //     std::cout << "Hello, Rakib!" << '\n';
// //     std::cout << "My C++ journey starts today!" << '\n';

// //     return 0;
// // }


// int age = 29;
// double height = 5.5;
// char grade = 'A';
// bool isStudent = true;
// string name = "Rakib";


// Type	ব্যবহার
// int	পূর্ণসংখ্যা
// float	Decimal number
// double	More precise decimal
// char	একটি character
// bool	True / False
// string	Text

/*
//2. Input and Output
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age is: " << age << endl;

    return 0;
}

*/


// 3. Conditions
// কম্পিউটারকে decision নিতে শেখানোর জন্য condition ব্যবহার করি।
// 3. Conditions
// কম্পিউটারকে decision নিতে শেখানোর জন্য condition ব্যবহার করি।
// int number = 10;

// if (number > 0) {
//     cout << "Positive";
// } else if (number < 0) {
//     cout << "Negative";
// } else {
//     cout << "Zero";
// }

// 4. Loops
// একই কাজ বারবার করার জন্য loop ব্যবহার করি।
// for (int i = 1; i <= 5; i++) {
//     cout << i << endl;
// }


// এখানে:
// - int i = 1: শুরু।
// - i <= 5: কখন পর্যন্ত চলবে।
// - i++: প্রতি iteration-এ ১ বাড়বে।

// 5. Functions
// Function হলো একটি reusable block of code।
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int result = add(10, 20);

//     cout << result;

//     return 0;
// }

// EXCERCISE 01
/*

#include <iostream>

using namespace std;

int main() {

    int age;
    cout << "Input: ";
    cin >> age;

    if (age % 2 == 0){
        cout << "Output: Even";
    } else {
        cout << "Output: Odd";
    }

    return 0;
}
*/
// Excercise : 02

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Input: ";
    cin >> n;

    int total = 0;

    for (int i = 0; i <= n; i++){
        total += i;
    }

    cout << "Output: " << total << endl;

    return 0;
}



















































