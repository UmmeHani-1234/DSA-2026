// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

void getreverse(char name[] , int length){
    int start = 0;
    int end = length - 1;
    while (start <= end){
        swap (name[start], name[end]);
        start++;
        end--;
    }
    cout << "Reverse of name is : " << name;
}
int getlength(char name[], int size){
    int count = 0;
    for (int i = 0; i < size ; i ++){
        if (name [i] == '\0'){
            break;
        }
        count++;     
    }
    return count;
}


int main() {
    char name[20];
    int size = sizeof(name)/ sizeof(name[0]);
    cout <<"Enter your name: " ;
    cin >> name;
   
    cout <<"Your name is " << name ;
    cout << endl;
    int length  = getlength(name , size);
    getreverse(name , length);
    
    return 0;
}