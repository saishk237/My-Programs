// Problem 1 (Corrected Solution)

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    int m, y, r, g;
    cin>>m;
    cin>>y;
    cin>>r;
    cin>>g;
    if((m>=0 && m <= 10000) && (y >=0 &&  y<= 10000) && (r>=0 && r<=10000) && (g>=1 && g <= 10000))
    {
        if(y+r>m)
        {
            cout<<"1";
        }
        else if (y*g>m)
        {
            cout<<"1";
        }
        else
            cout<<"1";

    }

	// Your code here
	return 0;
} 