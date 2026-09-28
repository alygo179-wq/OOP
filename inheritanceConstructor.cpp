//concept of constructor in oop
#include <iostream>
#include <string>
using namespace std;
class Animal{
    protected:
        int age;
    public:
        Animal(int a){
            age = a;
            cout << "constructor called" << endl;
        }

};

class Dog : public Animal{
    private:
        string breed;
    public:
        Dog(int a, string nm) : Animal(a){
            breed = nm;
            cout << "Drived constructor called" << endl;
        }
    
        void display(){
            cout << "Age is: " << age << " and breed is: " << breed << endl;

        }

};

int main(){
    Dog check(11, "Bull Dog");
    check.display();
}