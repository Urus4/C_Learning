#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	string name;
	int age;
public:
	Animal();
	Animal(string name, int age);
	~Animal();
	Animal(const Animal& animal);
	friend void running(Animal* pAnimal);
	virtual void crying(Animal* pAnimal) = 0;
	string getName();
	int getAge();
	void setName(string name);
	void setAge(int age);
};

Animal::Animal() {};

Animal::Animal(string name, int age)
{
	this->name = name;
	this->age = age;
	cout << "Animal 积己\n";
}

Animal::~Animal() {
	cout << "Animal 家戈\n";
}

Animal::Animal(const Animal& animal)
{
	this->name = animal.name;
	this->age = animal.age;
}

string Animal::getName() {
	return name;
}

int Animal::getAge() {
	return age;
}

void Animal::setName(string name) {
	this->name = name;
}

void Animal::setAge(int age){
	this->age = age;
}


//======================================================
// <颇积 努贰胶>

class Dog : public Animal {
private:
	string bark;
public:
	Dog(string name, int age, string bark);
	~Dog();
	Dog(const Dog& dog);
	string getBark();
	void crying(Animal* pAnimal);
};

Dog::Dog(string name, int age, string bark) : Animal(name, age) {
	this->bark = "港港";
	cout << "Dog 积己\n";
}

Dog::~Dog() {
	cout << "Dog 家戈\n";
}

Dog::Dog(const Dog& dog):Animal(dog){
	this->bark = dog.bark;
}

string Dog::getBark() {
	return bark;
}

void Dog::crying(Animal* pAnimal) {
	cout << getName() << "绰 " << getBark() << endl;
}



class Cat : public Animal {
private:
	string bark;
public:
	Cat(string name, int age, string bark);
	~Cat();
	string getBark();
	void crying(Animal* pAnimal);
};

Cat::Cat(string name, int age, string bark) : Animal(name, age) {
	this->bark = "具克";
	cout << "Cat 积己\n";
}

Cat::~Cat() {
	cout << "Cat 家戈\n";
}

string Cat::getBark() {
	return bark;
}

void Cat :: crying(Animal* pAnimal) {
	cout << getName() << "绰 " << getBark() << endl;
}



//======================================================
// <寇何 窃荐>
void running(Animal* pAnimal)
{
	cout << pAnimal->name << "啊 崔赴促" << endl;
}
void crying(Animal* pAnimal)
{
	pAnimal->crying(pAnimal);
}



//======================================================
int main() {
	cout << "--眠惑努贰胶客 颇积 努贰胶 备泅--\n";
	Dog* dog = new Dog("碍酒瘤", 4, "港港");
	Cat* cat = new Cat("绊剧捞", 2, "具克");
	cout << "\n--概俺函荐狼 促屈己 备泅--\n";
	crying(dog);
	crying(cat);
	running(dog);
	running(cat);
	cout << "\n--扁夯 汗荤积己磊 流立 备泅--\n";
	Dog copyDog(*dog);
	cout << copyDog.getName() << endl;
	cout << copyDog.getAge() << endl;
	cout << copyDog.getBark() << endl;
	cout << "\n--家戈磊 角青--\n";
	delete dog;
	delete cat;
	return 0;
}