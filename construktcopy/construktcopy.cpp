#include <iostream>
#include <clocale>
#include <string>

using namespace std;

class User {
private:
	int age, salary;
public:
	User(int age, int salary) {
		this->age = age;
		this->salary = salary;
	}

	inline void printAll();

	User(User &obj) {
		cout << "Конструктор копирования" << endl;
		this->age = obj.age;
		this->salary = obj.salary;
	}
};

void User::printAll() {
		cout << "Возраст: " << this->age << ". Зарплата: " << this->salary << endl;
	}

inline void hello() {
	cout << "Hello World" << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");

	User bob(20, 2000);
	User jhon(bob);
	bob.printAll();
	jhon.printAll();

	hello();
	
	return 0;
}