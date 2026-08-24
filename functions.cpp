#include<bits/stdc++.h>
using namespace std;
// functions:
//void -> which does not return anything
//return 
//parameterised
//non parameterised
// void printName(string name) {
//     cout <<"Hey " << name << endl;
// }
// int main() {
//     string name;
//     cin >> name;
//     printName(name);

//     string name2;
//     cin >> name2;
//     printName(name2);

     
//     return 0;

// }

// Take two number and print its sum.
// int main() {
//     int x,y;
//     cin >> x >> y;
//     cout << x+y;
//     return 0;
// }


// int sum(int x, int y){
//     int z= x + y;
//     return z;
// }
// int main() {
//     int x, y;
//     cin >> x >> y;
//     int res = sum(x, y);
//     cout << res;

//     return 0;
// }

// int main() {
//     int x , y;
//     cin >> x >> y;
//     int minimum = min(x, y);
//     cout << minimum;
//     return 0;
// }


// int maxx(int num1, int num2){
//     if(num1 >=num2) return num1;
//     else return num2;
// }
// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = maxx(num1, num2);
//     cout << minimum;
//     return 0;
// }


// pass by value
// void doSomething(int num) {
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
// }
// int main() {
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;

//     return 0;
// } 

// pass by reference
// void doSomething(string &s) {
//    s[0]= 't';
//    cout << s << endl;
// }
// int main() {
//     string s = "raj";
//     doSomething(s);
//     cout << s << endl;

//     return 0;
// } 

void doSomething(int &num) {

}
int main() {
    int arr[5];
    for(int i = 0; i<=4; i= i+1) {
        cout << i << endl;
        cin >> arr[i];

    }
    return 0;
}