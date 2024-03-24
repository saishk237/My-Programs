/* Assignment 3 (Group A)
Consider we want to store the information of different vehicles. Create a class named Vehicle with two data
member named mileage and price. Create its two subclasses:
*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or
petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel
type(alloys or spokes) and fuel tank size(in inches).
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type.
Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating
capacity, fuel type, mileage and price.). */

#include <iostream>
using namespace std;
class Vehicle
{
    float mileage;
    long long price;
    public:
    void inputData();
    void displayData();
};

void Vehicle::inputData()
{
    cout<<"Enter mileage of your vehicle: ";
    cin>>mileage;
    cout<<"Enter price of your vehicle: ";
    cin>>price;
}

void Vehicle::displayData()
{
    cout<<"Mileage :: "<<mileage<<endl;
    cout<<"Price :: "<<price<<endl;
}
    
class Car:public Vehicle
{
    long long ownerCost;
    float warranty;
    int seatingCapacity;
    string fuelType;
    public:
    void readData1();
    void printData1();
};

void Car::readData1()
{
    cout<<"Enter Ownership cost: ";
    cin>>ownerCost;
    cout<<"Enter Warranty (in years): ";
    cin>>warranty;
    cout<<"Enter Seating Capacity: ";
    cin>>seatingCapacity;
    cout<<"Enter Fuel type (Petrol/Diesel): ";
    cin>>fuelType;
}

void Car::printData1()
{
    cout<<"Ownership cost :: "<<ownerCost<<endl;
    cout<<"Warranty :: "<<warranty<<endl;
    cout<<"Seating Capacity :: "<<seatingCapacity<<endl;
    cout<<"Fuel type :: "<<fuelType<<endl;
}

class Bike:public Vehicle
{
    int noOfCylinder;
    int noOfGears;
    string coolingType;
    string wheelType;
    float fuelTankSize;
    public:
    void readData2();
    void printData2();
};

void Bike::readData2()
{
    cout<<"Enter No. of Cylinders: ";
    cin>>noOfCylinder;
    cout<<"Enter No. of Gears: ";
    cin>>noOfGears;
    cout<<"Enter Cooling type (Air,Liquid,Oil): ";
    cin>>coolingType;
    cout<<"Enter Wheel type (Alloys/Spokes): ";
    cin>>wheelType;
    cout<<"Enter Fuel tank size (in inches): ";
    cin>>fuelTankSize;
}

void Bike::printData2()
{
    cout<<"Number of Cylinder :: "<<noOfCylinder<<endl;
    cout<<"Number of Gears :: "<<noOfGears<<endl;
    cout<<"Cooling Type :: "<<coolingType<<endl;
    cout<<"Wheel Type :: "<<wheelType<<endl;
    cout<<"Fuel Tank size :: "<<fuelTankSize<<endl;
}

int main()
{
    Car audi;
    Car ford;
    Bike tvs;
    Bike bajaj;
    int choice;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup A-Assignment 3 (PBL)"<<endl;
    while(1)
    {
        cout<<"\n        |- MENU -|"<<endl;
        cout<<"\nFOR CAR:"<<endl;
        cout<<"1) Enter Data for Audi (Car)"<<endl;
        cout<<"2) Enter Data for Ford (Car)"<<endl;
        cout<<"3) Display Data for Audi (Car)"<<endl;
        cout<<"4) Display Data for Ford (Car)"<<endl;
        cout<<"\nFOR BIKE:"<<endl;
        cout<<"5) Enter data for TVS (Bike)"<<endl;
        cout<<"6) Enter data for Bajaj (Bike)"<<endl;
        cout<<"7) Display data for TVS (Bike)"<<endl;
        cout<<"8) Display data for Bajaj (Bike)"<<endl;
        cout<<"9) Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        // Menu-Driven
        switch(choice)
        {
            case 1:
                cout<<"<<Enter Data for Audi (Car)>>"<<endl;
                audi.inputData();
                audi.readData1();
                break;
            case 2:
                cout<<"<<Enter Data for Ford (Car)>>"<<endl;
                ford.inputData();
                ford.readData1();
                break;
            case 3:
                cout<<"<<Displaying Data for Audi (Car)>>"<<endl;
                audi.displayData();
                audi.printData1();
                break;
            case 4:
                cout<<"<<Displaying Data for Ford (Car)>>"<<endl;
                ford.displayData();
                ford.printData1();
                break;   
            case 5:
                cout<<"<<Enter Data for TVS (Bike)>>"<<endl;
                tvs.inputData();
                tvs.readData2();
                break;
            case 6:
                cout<<"<<Enter Data for Bajaj (Bike)>>"<<endl;
                bajaj.inputData(),
                bajaj.readData2();
                break;
            case 7:
                cout<<"<<Displaying Data for TVS (Bike)>>"<<endl;
                tvs.displayData();
                tvs.printData2();
                break;
            case 8:
                cout<<"<<Displaying Data for Bajaj (Bike)>>"<<endl;
                bajaj.displayData();
                bajaj.printData2();
                break;
            case 9:
                cout<<"Thank You!";
                exit(0);
                break;
            default:
                cout<<"Invalid Input! Please Try Again..."<<endl;
        }
    }
    return 0;
}