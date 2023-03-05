// Write a program to sum two numbers by call by reference.
#include<iostream>
using namespace std;
void add(int *x,int *y){
    cout<<"Sum is "<< *x + *y;
}
int main(){
    int a =10, b =20;
    add(&a,&b);
    return 0;
}