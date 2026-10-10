#include <iostream>
#include <string>

using namespace std;

class car{
public:
    string name;
    int roll;


};
void changing(car* c){       //This is the pointer function
           c->roll=32;   //This is same like *ptr in pointer mtlb iss adress per jo value pari hai uss ko iss mein change kar do
                            //like(*c).roll=32
}


int main()
{
 car c1;
   c1.roll=36;
   c1.name="Nauman";
    cout <<c1.roll<<endl;
    changing(&c1);
cout <<c1.roll;

    //another method without function
//        car*ptr=&c1;
//        ptr->roll=92; // it means (*ptr).roll per jo hai uss ko iss mein change kar do
//        cout<<c1.roll;

    return 0;
}