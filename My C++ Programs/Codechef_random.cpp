#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int n[t],totalNotes[t];
	if(t>=1 && t<=1000)
	{
		for(int i=0; i<t; i++)
		{
            cin>>n[i];
            if(n[i]>=1 && n[i]<=1000000)
            {
                //1,2,5,10,50,100
                int notes_100=n[i]/100;
                int notes_50 = (n[i]-(100*notes_100)/50;
                int notes_10 = (n[i]-(50*notes_100)/50;;
                int notes_5 = (n[i]-(100*notes_100)/50;;
                int notes_2 = (n[i]-(100*notes_100)/50;;
                int notes_1 = (n[i]-(100*notes_100)/50;;
                totalNotes[i]=(n[i]/100)+(n[i]/50)+(n[i]/10)+(n[i]/5)+(n[i]/2)+(n[i]/1);
            }
        }
        for(int j=0; j<t; j++)
        {
            cout<<totalNotes[j]<<endl;
        }
    }
    else
        cout<<"Invalid Input!"<<endl;   
     
    return 0;		
}

/*Codechef Problem - Sum of Digits (FLOW006)
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n[t],sum[t];
    if(t>=1 && t<=1000)
    {
        for(int i=0; i<t; i++)
        {
            cin>>n[i];
            if(n[i]>=1 && n[i]<=1000000)
            {

            
            }
            else
                cout<<"Invalid Input!"<<endl;
        }

        for(int j=0; j<t; j++)
        {
            cout<<sum[j]<<endl;
        }
    }
    else
        cout<<"Invalid Input!"<<endl;

    return 0;
}*/

/*Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them.

The first thing Chefu wanted to do was to calculate the result of his homework — the sum of $A$ and $B$, 
and write it using matches. Help Chefu and tell him the number of matches needed to write the result.

Digits are formed using matches in the following way:

Input
The first line of the input contains a single integer $T$ denoting the number of test cases. The description of $T$ test cases follows.
The first and only line of each test case contains two space-separated integers $A$ and $B$.
Output
For each test case, print a single line containing one integer — the number of matches needed to write the result ($A+B$).

Constraints
$1 \le T \le 1,000$
$1 \le A, B \le 10^6$
Sample Input 1 
3
123 234
10101 1010
4 4
Sample Output 1 
13
10
7
Explanation
Example case 1: The result is $357$. We need $5$ matches to write the digit $3$, $5$ matches to write the digit $5$ 
and $3$ matches to write the digit $7$.

Example case 2: The result is $11111$. We need $2$ matches to write each digit $1$, which is $2 \cdot 5 = 10$ matches in total.


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr1[t], arr2[t], sum[t], s=0, n;
    for(int i=0; i<t; i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
        sum[i]=arr1[i]+arr2[i];
    }

    for(int j=0; j<t; j++)
    {
        for(int k=0; k<t; k++)
        {
            n=sum[j]%10;
            switch(n)
            {
                case 0:
                    s+=6;
                    break;

                case 1:
                    s+=2;
                    break;
                
                case 2:
                    s+=5;
                    break;
                
                case 3:
                    s+=5;
                    break;
                
                case 4:
                    s+=4;
                    break;
                
                case 5:
                    s+=5;
                    break;
                
                case 6:
                    s+=6;
                    break;
                
                case 7:
                    s+=3;
                    break;
                
                case 8:
                    s+=7;
                    break;
                
                case 9:
                    s+=6;
                    break;

                default:
                    cout<<"Error!"<<endl;
                    break;
            }
        sum[j]=sum[j]/10;
        }
        cout<<s<<endl;
    }
}
*/


/* In a New York City coffee house called Central Perk,
we're introduced to six friends: chef Monica Geller, data controller Chandler Bing who lives across 
the hall from Monica, Chandler's roommate/actor Joey Tribbiani, Monica's brother Ross Geller, 
new ageist Phoebe Buffay, and "born to be a wife" Rachel Green.

Chef wants to divide N cookies between the six friends such that:

Each friend gets at least one cookie.
No two friends get the same number of cookies.
Find if it is possible for Chef to do so.

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, one integers N.
Output Format
For each test case print "YES" if Chef can divide the cookies according to the given rules, else print "NO".

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤103
1≤N≤103
Sample Input 1 
3
42
5
909
Sample Output 1 
YES
NO
YES
Explanation
Test case 1: One possible way of distribution would be 2,4,6,8,10,12.

Test case 2: It is impossible to divide 5 cookies among six friends according to given rules. 

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t];
    if(t>=1 && t<=1000)
    {
        for(int i=0; i<t; i++)
        {
            cin>>arr[i];
        }
    }
    else
        cout<<"Invalid Input"<<endl;
    
    for(int j=0; j<t; j++)
    {
        int n=arr[j];
        if(n>=1 && n<=1000)
        {
            if(n<6)
                cout<<"NO"<<endl;
            else
            {

            }

        }
        else
            cout<<"Invalid Input"<<endl;
    }
    return 0;
} */

/*
//Codechef Problem - Lucky Four
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<n; j++)
    {
        for(int k=0; j<n; j++))
    }
    // your code goes here
	return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main ()
{
    int t, n1, n2, n3, ans;
    cin>>t;
    if(t<1000)
    {
        for(int i=0; i<t; i++)
        {
            cin>>n1;
            cin>>n2;
            cin>>n3;
            if((n1>=1 && n1<=1000000) && (n2>=1 && n2<=1000000) && (n3>=1 && n3<=1000000))
            {
                if(n1>n2)
                {
                    if(n1>n3)
                    {
                        if(n2>n3)
                            ans=n2;
                        else
                            ans=n3;
                    }
                    else
                        ans=n1;
                }
                else if(n2>n1)
                {
                    if(n1>n3)
                        ans=
                    else


                }
                else
                    cout<<"Invalid Input";
            }
        }
    }
    else
         cout<<"Invalid Input";
}
*/


