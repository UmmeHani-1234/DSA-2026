#include <iostream>

using namespace std;

int factorial (int n){
    if (n == 0){
        return 1;
    }
    int smaller_problem = factorial(n -1 );
    int bigger_problem = smaller_problem * n;
    return bigger_problem;
}

int main(){ 
    cout <<"enter a number : "<<endl;
    int n;
    cin >> n;
    cout << "factorial of " << n<<" is : "<<factorial(n);
}