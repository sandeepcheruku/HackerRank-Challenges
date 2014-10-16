#include<iostream>
#include<cstdio>

using namespace std;

int a;
int b;
int c;

int SolveMeFirst(int a, int b)
    {
        int c=a+b;
        return c;
    }

int main()
    {
        cin>>a>>b>>endl;
        //cin>>b>>endl;
        c=SolveMeFirst(a,b);
        cout<<c<<endl;
        return 0;
    }
