#include<bits/stdc++.h>
using namespace std;

class Car {
    public:
     string name;
     int speed;

    public:
     void milage(){
         cout<<"NOt Bad"<<endl;
     }
     
    //  parameterized constructor
     Car(string name,int speed){
         this->name = name;
         this->speed = speed;
     }

    //  copy constructor
    Car(Car &car1){
        this->name = car1.name;
        this->speed = car1.speed;
    }


    //  this destructor is manually declared otherwise there will be a default destructor 
    ~Car(){
        cout<<"destructor is called"<<endl;
    }

};
// refer to chat gpt
// https://www.codingninjas.com/codestudio/library/constructors-and-destructors

int main(){
    Car car1("lambo",23);
    // Car car2 = car1;
    Car car2(car2);
    cout<<car1.name<<endl;
    car1.milage();
    cout<<car2.speed;

    return 0;
}
