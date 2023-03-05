// Write a program to find out
// s= 1!+2!+3!+4!+....n!
#include<iostream>
using namespace std;
class Series {//using inheritance concept.
public:
      int num,f,s=0;
      void input(){
      cout<<"Enter any no \t";
      cin>>num;
      } 
};
class Factorial: public Series // Calling factorial function.
{
    public:
    int fact();
} ;
class Process: public Factorial
{
    public:
    void sum()
    {
        cout<<s;
    }
};
int Factorial::fact() // Not using in-line function.
{
    
    for(int i=1;i<=num;i++)
    { f=1;
        for(int j =1;j<=i;j++)
        {
            f =f*j;
        }
        s=s+f;
    }
    return 0;
}
int main() // Caling member function.
{
    Process obj;
    obj.input();
    obj.fact();
    obj.sum();
    return 0;
}
