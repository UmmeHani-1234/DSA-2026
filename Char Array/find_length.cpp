// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 
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
   
    cout <<"your name is " << name ;
    cout << endl;
    cout << "length of name is : " << getlength(name , size);
    
    return 0;
}