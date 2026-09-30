//virtual destructor is use to delete sequencially from drived to base class

#include <iostream>
using namespace std;

class Basy{
    public:
        Basy(){
            cout << "Base Constructor\n";
        }

        virtual ~Basy(){
            cout << "Base Destructor called\n";
        }
};

class Drivy: public Basy{
    public:
        Drivy(){
            cout << "Drived Constructor\n";
        }
        ~Drivy(){
            cout << "Drived Destructor called\n";
        }
};

int main(){
    Basy* check = new Drivy();
    delete check; //trigering the destructors;
    return 0;


    

}