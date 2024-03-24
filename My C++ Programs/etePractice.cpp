

#include <fstream>
#include <iostream>
using namespace std;
int main (int argc, char** argv)
{
fstream Ifile("a.txt", ios::in | ios::out);
Ifile<<"TutorialsPoint";
Ifile.seekg(9, ios::beg);
char f[9];
Ifile.read(f, 5);
f[5] = 0;
cout <<f<<endl;
Ifile.close();
}


/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
char fine, course;
cout<<"Enter a word:";
fine = cin.get();
cin.sync();
course = cin.get();
cout << fine<< endl;
cout << course <<endl;
return 0;
}



#include <iostream>
#include <string>
using namespace std;
class Example 
{
    public:
    int x;

    Example()
    {
        x=5;
    }
    
        void assign(int a)
        {
            x= a;
        }
        int return_value()
        {
            return x;
        }
};
int main(int argc, char const *argv[])
{
    Example ob;
    ob.assign(10);
    cout<<ob.return_value();
}





#include<iostream>
using namespace std;
class parent
{
    protected:
    int aa;
    public:
    parent()
    {
        aa = 0;
    }
};

class child1: public parent
{
    public:
    int cc;
};

class child2: public parent
{
    public:
    int cc;
};

class child3: public child1, public child2
{
    public:
    void show()
    {
        cout << aa; 
    }
};

int main(void)
{   
    child3 c;
    c.show();
    return 0;
}

#include <iostream> 
using namespace std; 
double div(int aa, int bb) 
{
    if(bb ==0)
    {
        throw "Division by zero condition!";
    }
    return (aa/bb); 
}
int main () 
{
    int xx = 50; int yy= 0; double zz = 0;
    try 
    {
        zz = division(xx, yy); 
        cout << zz << endl;
    } 
    catch (const char* msg) 
    {
        cerr << msg << endl; 
    }
    return 0; 
}*/