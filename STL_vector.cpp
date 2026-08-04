#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> v;
    cout << "size of vector is : " << v.capacity()<< endl;
    v.push_back(20);
    cout << "size of vector is : " << v.capacity()<< endl;
    v.push_back(30);
    cout << "size of vector is : " << v.capacity()<< endl;
    v.push_back(30);
    // vector doubles the size if space is full , thats why from 2--> 4
    cout << "size of vector is : " << v.capacity()<< endl;
    cout << endl;
    cout << "Element at index 2 is : " << v.at(2)<< endl;
    cout << "Empty of not (0 or 1) : " << v.empty() << endl;
    cout << "First element of vector : " << v.front() << endl;
    cout << "Last element of vector : " << v.back() << endl;
    
    cout << "elements before pop"<< endl;
    int size = v.size();
    cout << "size of vector is : " << size<< endl;
    for (int i:v){
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "size of vector is : " << v.size()<< endl;
    
    cout << "elements after pop"<< endl;
    for (int i:v){
        cout << i << " ";
    }
    //copy elements of vector into a new vector
    vector <int> last (v);
    cout << endl;
    cout << "elements of last vector : ";
    for (int i:last){
        cout << i << " ";
    }
    
    return 0;
}