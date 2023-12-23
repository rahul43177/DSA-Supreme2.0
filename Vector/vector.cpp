#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v(5); 
    cout << "Size of vector is "<< v.size() << endl;
    cout << "Capacity of vector is "<< v.capacity() << endl;
    cout << "Printing what is there in vector \n";
    for(int i =0;i< v.size() ; i++) {
        cout << v[i] << " ";
    }
}