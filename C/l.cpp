#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

class Animal
{
	public:
		void getFamily() { cout<<"We are animals = "<<endl;}
		virtual void getClass { cout<<"I'm an animal"<<endl;}
		
};

class Dog : public Animal
{
	public:
		void getClass{cout<<"I'm a dog"<<endl;}
};
int main()
{
	Animal *animal = new Animal;
	Dog *dog = new Dog;
	animal->getClass();
	dog->getClass();
	return 0;
}
