#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cmath>
#include <limits>
#include <numeric>
#include <utility>
#include <sstream>

using namespace std;

bool isEven(int n) {

    // if (n % 2 == 0) {
    //     return true;
    // } else {
    //     return false;
    // }
    return n % 2 == 0;

}

int main() {

    cout << boolalpha << isEven(21);
    
    return 0;
}