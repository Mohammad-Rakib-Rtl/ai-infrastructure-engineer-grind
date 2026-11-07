/*

Exercise 1 — My first personal profile
Easy

Write a program in Python and C++ that stores:
- Your name.
- Your age.
- Your university.
- Your height.
- Whether you are learning programming.
Display all five values.

Expected output format:
Name: Rakib
Age: 29
University: HITSZ
Height: 5.5
Learning Programming: True


Learning objective: Variables, data types and output.



*/



#include <iostream> 
#include <string>

using namespace std;

int main() {

    string name = "Yuan";
    int age = 29;
    string university = "HITSZ";
    float height = 5.5;
    bool is_learning_programming = true;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << "\n";
    cout << "University: " << university << "\n";
    cout << "Height: " << height << "\n";
    cout << "Learning Programming: " << is_learning_programming << "\n";


    return 0;

}