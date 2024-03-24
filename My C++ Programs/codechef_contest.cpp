/* Problem Code: CHEFFAV
A string SS is called Chef's favourite if every substring chef in SS must have a substring code before it.

You are given a string SS of size NN that contains both code and chef as a substring. Please determine if SS is Chef's favourite.

Note: A substring is a continuous part of string which can be obtained by deleting some (may be none) character's from the beginning and some (may be none) character's from the end.

Input Format
The first line of the input contains an integer TT - the number of test cases. The test cases then follow.
The first line of each test contains an integer NN - the size of the string.
The second line of each test contains a string SS.
Output Format
For each test case, output on a single line AC if SS is Chef's favourite, or WA otherwise.

Constraints
1≤T≤101≤T≤10
1≤N≤1041≤N≤104
|S|=N|S|=N
SS consists only of lowercase English characters
Both code and chef appear as a substring at least once in SS
Sample Input 1 
4
8
codechef
8
chefcode
14
sxycodeghychef
21
sxychefvsvcodehghchef
Sample Output 1 
AC
WA
AC
WA
Explanation
Test case 11: Substring code is present before chef.
Test case 22: Substring code is not present before chef.
Test case 33: Substring code is present before chef.
Test case 44: There is no code substring present before the first occurrence of chef.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n[t], flag=0;
    string str[t], temp;
    if(t>=1 && t<=10)
    {
        for(int i=0; i<t; i++)
        {
            cin>>n[i];
            cin>>str[i];
            if(n[i]>=1 && n[i]<=10000)
            {
                temp=str[i];
                if(temp.length()!=n[i])
                {
                    cout<<"Invalid Input"<<endl;
                    continue;
                }
                for(int j=0; j<n[i]; j++)
                {
                    if(temp.substr(j,j+3)=="code" || temp.substr(j,j+3)=="chef")
                    {
                        flag=1;
                        break;
                    }
                    else
                        continue;
                }
                if(flag==1)
                {

                }
                else
                    cout<<"Invalid Input"<<endl;
            }
            else
                cout<<"Invalid Input"<<endl;

        }
    }
    return 0;    
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char comp1[t],comp2[t],comp3[t], x[t], y[t], ans;
    if(t>=1 && t<=36)
    {
        for(int i=0; i<t; i++)
        {
            cin>>comp1[i];
            cin>>comp2[i];
            cin>>comp3[i];
            cin>>x[i];
            cin>>y[i];
        }
        
        for(int j=0; j<t; j++)
        {
            if(comp1[j]==x[j] || comp1[j]==y[j])
            {
                ans=comp1[j];
                cout<<ans<<endl;
            }
            else if(comp2[j]==x[j] || comp2[j]==y[j])
            {
                ans=comp2[j];
                cout<<ans<<endl;
            }
            else if(comp3[j]==x[j] || comp3[j]==y[j])
            {
                ans=comp3[j];
                cout<<ans<<endl;
            }
            else
                cout<<"Error! Please try again..."<<endl;
        }
    }
    return 0;
} */

/*
Keplers Law Problem Code: KEPLERSLAW
Kepler’s Law states that the planets move around the sun in elliptical orbits with the sun at one focus. Kepler's 3rd law is The Law of Periods, according to which:

The square of the time period of the planet is directly proportional to the cube of the semimajor axis of its orbit.
You are given the Time periods (T1,T2T1,T2) and Semimajor Axes (R1,R2R1,R2) of two planets orbiting the same star.

Please determine if the Law of Periods is satisfied or not, i.e, if the constant of proportionality of both planets is the same.

Print "Yes" (without quotes) if the law is satisfied, else print "No".

Input Format
The first line of input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
Each test case consists a single line of input, containing four space-separated integers T1,T2,R1,R2T1,T2,R1,R2.
Output Format
For each test case, output a single line containing one string — "Yes" or "No" (without quotes); the answer to the problem.

You may print each character of the answer in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤1041≤T≤104
1≤T1,T2≤101≤T1,T2≤10
1≤R1,R2≤101≤R1,R2≤10
Subtasks
Subtask 1(100 points): Original constraints

Sample Input 1 
3
1 1 1 1
1 2 3 4
1 8 2 8
Sample Output 1 
Yes
No
Yes
Explanation
Test Case 11: 12/13=12/1312/13=12/13
Test Case 22: 12/33≠22/4312/33≠22/43
Test Case 33:  12/23=82/83
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t1[n], t2[n], r1[n], r2[n], ans[n];
    float p1[n], p2[n];
    if(n>=1 && n<=10000)
    {
        for(int i=0; i<n; i++)
        {
            cin>>t1[i];
            cin>>t2[i];
            cin>>r1[i];
            cin>>r2[i];

            if((t1[i]>=1 && t1[i]<=10) && (t2[i]>=1 && t2[i]<=10) && (r1[i]>=1 && r1[i]<=10) && (r2[i]>=1 && r2[i]<=10))
            {
                p1[i]=(t1[i]*t1[i])/(r1[i]*r1[i]*r1[i]);
                p2[i]=(t2[i]*t2[i])/(r2[i]*r2[i]*r2[i]);
                if(p1[i]==p2[i])
                    ans[i]=1;
                else if (p1[i]!=p2[i])
                    ans[i]=0;
                else
                    cout<<"Error!"<<endl;
            }
            else
                cout<<"Invalid Input"<<endl;
        }
        for(int j=0; j<n; j++)
        {
            if(ans[j]==1)
                cout<<"Yes"<<endl;
            else if(ans[j]==0)
                cout<<"No"<<endl;
            else
                cout<<"Error"<<endl;
        }
    }
    else
        cout<<"Invalid Input"<<endl;

    return 0;
}