#include<iostream>

using namespace std;

class student
{
private:
	int roll_no = 42;
		string name = "Saish";
		public:
			friend class teacher;
				friend void display_name();
				};
class teacher
{	
private:
	int teacher_no = 3;
		student s;
		public:
			void display()
	{
			cout<<"Teacher is:"<<teacher_no<<"\nStudent is:"<<s.roll_no;
				}
				};	
//friend function
void display_name()
{
	student st;
		cout<<endl<<"Name is:"<<st.name;
		}
int main()
{
	student stud;
		teacher teach;
				teach.display();
						display_name();

	cout<<endl;
		return 0;
		}

class Student
{
    public:
    int roll_no;
    int marks[3];

    void set_data(
        {

        }
    
}