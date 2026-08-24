#include<iostream>
using namespace std;

// void print() {
//     cout << 1 << endl;
//     print();
// }
// int main() {
//     print(); 
//     return 0;
// }

// int count=0;
// void f() {
//     cout << count << endl;
//     count++;
//     f();
// }
// int main() {
//     f();
//     return 0;
// }

int count =1;
void keshav() {
    if(count == 11)
        return ;
    cout << count << endl;
    count++;
    keshav();     //👈 yeh h recursion...
}
int main() {
    keshav();
}