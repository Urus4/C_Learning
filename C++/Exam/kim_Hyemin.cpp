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
	cout << "Animal ����\n";
}

Animal::~Animal() {
	cout << "Animal �Ҹ�\n";
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
// <�Ļ� Ŭ����>

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
	this->bark = "�۸�";
	cout << "Dog ����\n";
}

Dog::~Dog() {
	cout << "Dog �Ҹ�\n";
}

Dog::Dog(const Dog& dog):Animal(dog){
	this->bark = dog.bark;
}

string Dog::getBark() {
	return bark;
}

void Dog::crying(Animal* pAnimal) {
	cout << getName() << "�� " << getBark() << endl;
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
	this->bark = "�߿�";
	cout << "Cat ����\n";
}

Cat::~Cat() {
	cout << "Cat �Ҹ�\n";
}

string Cat::getBark() {
	return bark;
}

void Cat :: crying(Animal* pAnimal) {
	cout << getName() << "�� " << getBark() << endl;
}



//======================================================
// <�ܺ� �Լ�>
void running(Animal* pAnimal)
{
	cout << pAnimal->name << "�� �޸���" << endl;
}
void crying(Animal* pAnimal)
{
	pAnimal->crying(pAnimal);
}



//======================================================
int main() {
	cout << "--�߻�Ŭ������ �Ļ� Ŭ���� ����--\n";
	Dog* dog = new Dog("������", 4, "�۸�");
	Cat* cat = new Cat("�����", 2, "�߿�");
	cout << "\n--�Ű������� ������ ����--\n";
	crying(dog);
	crying(cat);
	running(dog);
	running(cat);
	cout << "\n--�⺻ ��������� ���� ����--\n";
	Dog copyDog(*dog);
	cout << copyDog.getName() << endl;
	cout << copyDog.getAge() << endl;
	cout << copyDog.getBark() << endl;
	cout << "\n--�Ҹ��� ����--\n";
	delete dog;
	delete cat;
	return 0;
}