/* Assignment 12 (Group B)
The ticket booking system of Cinemax theatre has to be implemented using C++ program.
There are 15 rows and 10 seats in each row. Doubly linked lists have to be maintained to keep track of free seats in rows.
Assume some random booking to start with. Use an array to store pointers (Head pointer) to each row. On demand
a. The list of available seats is to be displayed
b. The seats are to be booked
c. The booking can be cancelled */

#include <iostream>
#include<stdlib.h>
using namespace std;
class node
{
    public:
    node* next;
    node* prev;
    int seat;
    string id;
    int key;
};

class Cinemax
{
    public:
    node* head,* tail ,* temp;
    Cinemax()
    {
        head=NULL;
    }
    void createDLL();
    void displaySeats();
    void book();
    void cancel();
    void avail();
};

void Cinemax::createDLL()
{
    int i=1;
    temp=new node;
    temp->seat=1;
    temp->key=0;
    temp->id="NULL";
    tail=head=temp;
    for(int i=2;i<=150;i++)
    {
        node *p;
        p= new node;
        p->seat=i;
        p->key=0;
        p->id="NULL";
        tail->next=p;
        p->prev=tail;
        tail=p;
        tail->next=head;
        head->prev=tail;
    }
}

void Cinemax::displaySeats()
{
    {
        int r=1;
        node* temp;
        temp=head;
        int flag=0;
        cout<<"\n---------------------------------------------------------\n";
        cout<<"\t\t  Screen This Way \n";
        cout<<"---------------------------------------------------------\n";
        while(temp->next!=head)
        {
            if(temp->key==0)
            {
                if(temp->seat<=9)
                {
                    cout<<temp->seat<<"  "<<"   ";
                }
                else if(temp->seat>=10 && temp->seat<=99)
                {
                    cout<<temp->seat<<" "<<"   ";
                }
                else
                    cout<<temp->seat<<"   ";
            }
            else
            {
                cout<<" X    ";
            }

            flag++;
            if(flag%10==0)
            {
                cout<<endl;
                r++;
            }
            temp=temp->next;
            
        }
        cout<<temp->seat<<"    ";
    }
}

void Cinemax::book()
{   
    int x;
    string y;
    label:
    cout<<"Enter seat number to be booked (1-150): ";
    cin>>x;
    cout<<"Enter your Mobile: ";
    cin>>y;
    if(x<1||x>150)
    {
        cout<<"Error! Enter correct seat number to book (1-150)...\n";
        goto label;
    }
    node *temp;
    temp=new node;
    temp=head;
    while(temp->seat!=x)
    {
        temp=temp->next;
    }

    if(temp->key==1)
        cout<<"Seat Already Booked!\n";
    else
    {
        temp->key=1;
        temp->id=y;
        cout<<"Seat "<<x<<" Booked!\n";
    }
}

void Cinemax::cancel()
{
    int x;
    string y;
    label1:
    cout<<"Enter Seat No. to cancel booking: ";
    cin>>x;
    cout<<"Enter your Mobile No.: ";
    cin>>y;
    if(x<1||x>150)
    {
        cout<<"Error! Enter correct seat number to cancel (1-150)...\n";
        goto label1;
    }
    node *temp;
    temp=new node;
    temp=head;
    while(temp->seat!=x)
    {
        temp=temp->next;
    }
    if(temp->key==0)
        cout<<"Seat Not booked yet\n";
    else
    {
        if(temp->id==y)
        {
            temp->key=0;
            cout<<"Seat Cancelled!\n";
        }
        else
            cout<<"Wrong Mobile No.! Seat cannot be cancelled...\n";
    }
}

int main()
{
    Cinemax cine1;
    cine1.createDLL();
    int choice;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup B-Assignment 11 (PBL) :: The ticket booking system of Cinemax theatre has to be implemented\n\t\t\t       using C++ program. There are 15 rows and 10 seats in each row.\n\t\t\t       Doubly linked lists have to be maintained to keep track of free seats\n\t\t\t       in rows. Assume some random booking to start with. Use an array to\n\t\t\t       store pointers (Head pointer) to each row. On demand\n\t\t\t       a. The list of available seats is to be displayed.\n\t\t\t       b. The seats are to be booked.\n\t\t\t       c. The booking can be cancelled."<<endl;
    cout<<"\n\t\t*** CINEMAX MOVIE THEATRE ***";
    while(1)
    {
        cout<<"\n\n\t\t### Movie: Dhoom 4 (9 PM) ###"<<endl;
        cout<<"\n    |- MENU -|"<<endl;
        cout<<"1) Available Seats"<<endl;
        cout<<"2) Book a Seat"<<endl;
        cout<<"3) Cancel Booking"<<endl;
        cout<<"4) Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
            case 1:
                cine1.displaySeats();
                break;
            case 2:
                cine1.book();
                break;
            case 3:
                cine1.cancel();
                break;
            case 4:
                cout<<"Thank You!"<<endl;
                exit(0);
                break;
            default:
                cout<<"Invalid Input! Please Try Again..."<<endl;
        }
    }
    return 0;
}


