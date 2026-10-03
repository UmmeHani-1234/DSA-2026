#include <iostream>

using namespace std;


int power (int n){
    if (n == 0){
        return 1;
    }
    int smaller_problem = power(n -1 );
    int bigger_problem = 2 * smaller_problem ;
    return bigger_problem;
}


int main(){ 
    cout <<"enter a number : "<<endl;
    int n;
    cin >> n;
    cout << "power of 2 raise to " << n<<" is : "<<power(n);
}