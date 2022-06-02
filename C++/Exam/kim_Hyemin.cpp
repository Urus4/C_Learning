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
	cout << "Animal 생성\n";
}

Animal::~Animal() {
	cout << "Animal 소멸\n";
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
// <파생 클래스>

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
	this->bark = "멍멍";
	cout << "Dog 생성\n";
}

Dog::~Dog() {
	cout << "Dog 소멸\n";
}

Dog::Dog(const Dog& dog):Animal(dog){
	this->bark = dog.bark;
}

string Dog::getBark() {
	return bark;
}

void Dog::crying(Animal* pAnimal) {
	cout << getName() << "는 " << getBark() << endl;
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
	this->bark = "야옹";
	cout << "Cat 생성\n";
}

Cat::~Cat() {
	cout << "Cat 소멸\n";
}

string Cat::getBark() {
	return bark;
}

void Cat :: crying(Animal* pAnimal) {
	cout << getName() << "는 " << getBark() << endl;
}



//======================================================
// <외부 함수>
void running(Animal* pAnimal)
{
	cout << pAnimal->name << "가 달린다" << endl;
}
void crying(Animal* pAnimal)
{
	pAnimal->crying(pAnimal);
}



//======================================================
int main() {
	cout << "--추상클래스와 파생 클래스 구현--\n";
	Dog* dog = new Dog("강아지", 4, "멍멍");
	Cat* cat = new Cat("고양이", 2, "야옹");
	cout << "\n--매개변수의 다형성 구현--\n";
	crying(dog);
	crying(cat);
	running(dog);
	running(cat);
	cout << "\n--기본 복사생성자 직접 구현--\n";
	Dog copyDog(*dog);
	cout << copyDog.getName() << endl;
	cout << copyDog.getAge() << endl;
	cout << copyDog.getBark() << endl;
	cout << "\n--소멸자 실행--\n";
	delete dog;
	delete cat;
	return 0;
}