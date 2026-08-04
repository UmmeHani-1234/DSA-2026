#include <iostream>
#include <deque>
using namespace std;

int main (){
    deque <int> d;
    d.push_back(10);
    d.push_front(20);
    d.push_front(30);
    //it will print front first than back --> 30 20 10
    cout << "Element after push, and before pop_back : " ;
    for(int i : d){
        cout << i << " ";
    }
    cout << endl;
    d.pop_back();
     cout << "Element after pop_back : " ;
    for(int i : d){
        cout << i << " ";
    }
    cout << endl;
    d.push_front(40);
    d.push_front(50);
     cout << "current elements : " ;
     for(int i : d){
        cout << i << " ";
    }
   
    cout << endl;
    cout << "print first index element : " << d.at(1)<< endl;
    cout << "Element at index 2 is : " << d.at(2)<< endl;
    cout << "Empty of not (0 or 1) : " << d.empty() << endl;
    cout << "First element of array : " << d.front() << endl;
    cout << "Last element of array : " << d.back() << endl;
    cout << "before erase size : " << d.size() << endl;
    d.erase(d.begin(), d.begin()+2);
    cout << "before erase size : " << d.size() << endl;
    return 0;
}