#include<iostream>
#include<unordered_map>
using namespace std;
// pair class 
int main(){

    pair<int, int> p; 
    p.first = 1;
    p.second = 2;
    cout << p.first << "  " << p.second << endl;
    // Create another pair to swap with
    pair<int, int> q;
    q.first = 3;
    q.second = 4;
    // Swap the contents of p and q
    p.swap(q);
    // Print the swapped pair values
    cout << "After swap:" << endl;
    cout << p.first << "  " << p.second << endl;
    cout << q.first << "  " << q.second << endl;
}