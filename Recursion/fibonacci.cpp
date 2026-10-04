#include <iostream>
using namespace std;

int fibonacci(int n, int fib, int ans) {
    if (n == fib)
        return ans;

    ans += n;
    n++;

    return fibonacci(n, fib, ans);
}

int main() { 
    int fib = 8;
    int n = 0;

    int result = fibonacci(n, fib, 0);

    cout << result;
}