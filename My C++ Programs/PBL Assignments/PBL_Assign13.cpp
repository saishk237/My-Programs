/* Assignment 13 (Group C) 
Write a C++ program to print all the repeated numbers with their frequency in an array in minimum time complexity */

#include <bits/stdc++.h>
using namespace std;

void displayFrequency(int* a, int n)
{
    // Note: We'll use Hashing Data Structure for this Problem as its Time Complexity is the least - O(1)
    unordered_map<int, int> hash;
    
    for(int i=0; i<n; i++)
    {
        hash[a[i]]++;
    }

    cout<<"\nRepeated number      Frequency\n";
    for(auto it=hash.begin(); it!=hash.end(); it++)
    if(it->second>1)
    {
        cout<<it->first<<"\t\t\t"<<it->second<<endl;
    }
}

int main()
{
    int len;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup C-Assignment 13 (PBL) :: Write a C++ program to print all the repeated numbers with their frequency\n\t\t\t       in an array in minimum time complexity."<<endl;
    cout<<"\nEnter Array Length: ";
    cin>>len;
    int *p = new int[len];
    cout<<"\nInput "<<len<<" Numbers one-by-one:\n";
    for(int i=0; i<len; i++)
    {
        cin>>p[i];
    }
    displayFrequency(p, len);

    return 0;
}
