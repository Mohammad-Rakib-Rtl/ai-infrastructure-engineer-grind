#include <iostream>

using namespace std;

int square(int n) {
    return n * n;

}

int sumOfSquares(int a, int b) {
    return square(a) + square(b);
}



int main() {
    
    int result = sumOfSquares(3, 4);

    cout << result << endl;
    
    
    
    return 0;
}