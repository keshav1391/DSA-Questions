//write a program that takes an input of age
// and prints if you are adult or not
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//    int age;
//    cin >> age;
//    if(age >=18){
//     cout <<" you are an adult!";
//    } 
//    else if(age < 18){
//    cout <<" you are not an adult!";
//    }
//    return 0;
// } 
/*
a school has following rules for grading system:
1. 90-100: A    
2. 80-89: B
3. 70-79: C
4. 60-69: D
5. 0-59: F
ask user to enter marks and print the corresponding grade
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    // int marks;
    // cin >> marks;
    // if(marks < 100 && marks >= 90){
    //     cout <<"grade is A";
    // }
    // else if(marks < 90 && marks >=80){
    //     cout <<"grade is B";
    // }
    // else if (marks <80 && marks >=70){
    //     cout <<"grade is C";
    // }
    // else if(marks<70 && marks >=60){
    //     cout <<"grade is D";
    // }
    // else {
    //     cout <<"you are fail!";
    // }
    int age;
    cin >> age;
    if(age <18){
        cout <<"not eligible for job!";
    }
    else if(age >=60){
        cout <<"not eligible for job";
    }
    else{
        cout <<"eligible for job";
    }
return 0;
}