// Write a C++ program to perform infix to postfix conversion using stack.

#include <bits/stdc++.h> 
using namespace std;

bool isOperator(char ch)
{
	if(ch=='+' || ch=='*' || ch=='/' || ch=='-' || ch=='^')
		return true;
	else
		return false;
}

int prec(char ch) 
{ 
    if(ch == '^')
	{
    	return 3; 
    }
	else if(ch == '*' || ch == '/') 
    {
		return 2; 
	}
	else if(ch == '+' || ch == '-') 
    {
		return 1; 
	}
	else
    {	
		return -1;
	} 
} 

string convert(stack <char> stk, string iFix)
{
	string pFix;
	for(int i=0; i<iFix.length(); i++)
	{
		if ((iFix[i] >= 'a' && iFix[i] <= 'z') || (iFix[i] >= 'A' && iFix[i] <= 'Z'))
		{
			pFix += iFix[i];
		}
		else if (iFix[i] == '(')
		{
			stk.push(iFix[i]);
		}
		else if (iFix[i] == ')')
		{
			while ((stk.top()!='(') && (!stk.empty()))
			{
				char temp=stk.top();
				pFix+=temp;
				stk.pop();
			}
			if(stk.top()=='(')
			{
				stk.pop();
			}
		}
		else if (isOperator(iFix[i]))
		{
			if (stk.empty())
			{
				stk.push(iFix[i]);
			}
			else
			{
				if(prec(iFix[i]) > prec(stk.top()))
				{
					stk.push(iFix[i]);
				}	
				else if((prec(iFix[i]) == prec(stk.top())) && (iFix[i]=='^'))
				{
					stk.push(iFix[i]);
				}
				else
				{
					while ((!stk.empty()) && (prec(iFix[i])<=prec(stk.top())))
					{
						pFix += stk.top();
						stk.pop();
					}
					stk.push(iFix[i]);
				}
			}
		}
	}
	while(!stk.empty())
	{
		pFix+=stk.top();
		stk.pop();
	}
	
	return pFix;
}

int main() 
{  
  	string infixExp, postfixExp, m;
	cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 3 (DSAL) :: C++ program to perform infix to postfix conversion using stack."<<endl;
  	do{
	cout<<"\nEnter an Infix Expression: ";
  	cin>>infixExp;
  	stack <char> stack;
  	postfixExp = convert(stack, infixExp);
  	cout<<"The converted Postfix Expression is: "<<postfixExp<<endl;
	cout<<"\nDo you want to Continue? (Y/N): ";
	cin>>m;
	}while(m=="Y" || m=="y");
	return 0;
}