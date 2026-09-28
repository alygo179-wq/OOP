#include <iostream>
using namespace std;

/*

//single inheritance
class Animal{
    public:
        void eat(){
            cout << "i can eat";
        }
};

class Dog : public Animal{      //inherits from animal
    public:
        void bark(){
            cout << "I bark a lot!!";
        }
};
*/

//multiple inheritance

class Drive{
    public: 
        void drive(){
            cout << "Driving on road\n";
        }
};
class Flying{
    public:
        void fly(){
            cout << "Flying in sky\n";
        }
};
class FCar : public Flying, public Drive{
    public:
        void transform(){
            cout << "Transform mode!\n";
        }
};
int main(){
    FCar check;
    check.transform();
    check.fly();    //inherit from FLying 
    check.drive();  //inherit from Drive    
    
}
