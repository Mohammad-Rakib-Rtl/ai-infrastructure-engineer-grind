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

int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c){
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}


int main() {

    int result = maxOfThree(12, 32, 6);
    
    cout << result;
    
    return 0;
}