#include <iostream>
#include <list>
using namespace std;

int main (){
    list <int> l;
    
    l.push_back(10);
    l.push_front(20);
    l.push_front(30);
    //it will print front first than back --> 30 20 10
    cout << "Element after push, and before pop_back : " ;
    for(int i : l){
        cout << i << " ";
    }
    return 0;
}