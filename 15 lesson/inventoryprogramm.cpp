#include <iostream>
#include <string>
#include <vector>


class Soft;
class Program;
class Game;
class PC;
class Users;

class Soft {
private:
	std::string m_name;
public:
	Soft(std::string name)
		:m_name(name) {}
	Soft()
		:m_name("null") {}

	std::string getName() const {
		return m_name;
	}
	void setName(std::string name) {
		m_name = name;
	}

};

class Program:  public Soft {
private: 
	std::string m_category;
	float m_version;
public:
	Program(std::string name, std::string category = "default", float version = 0.0)
	: m_category(category), m_version(version) {
		Soft::setName(name);
	}
	std::string getProgram() const {

		return m_category + " " + std::to_string(m_version);
	}
};

class Game :  public Soft {
private:
	std::string m_type;
public:
	Game(std::string name, std::string type = "local")
		:m_type(type) {
		Soft::setName(name);
	}

};

class User {
private:
	std::string m_name;

public:
	User(std::string name)
		:m_name(name) {}

	std::string getName() const {
		return m_name;
	}
};

class PC {
private:
	std::string m_name;
	std::vector <Soft*> lsoft;
	User* m_user;
public:
	PC(std::string name) 
	:m_name(name) {
	}
	void addSoft(Soft* soft) {
		lsoft.push_back(soft);
	}

	void addUser(User* user) {
		m_user = user;
	}

	void printListSoft() const {
		std::cout << "_________________________________________ " << std::endl;
		std::cout << "ProgramsList: " << std::endl;
		for (int i = 0;i < lsoft.size();++i) {
			std::cout << lsoft.at(i)->getName() << " ";
		}
		std::cout << std::endl;
		std::cout << "_________________________________________ " << std::endl;

	}

	 void getUserName() const {
		 std::cout <<"User name: " << m_user->getName() << std::endl;
	}


};








int main() {
	Program* p1 = new Program("7z", "Office", 1.0);
	Program* p2 = new Program("TeamViewer", "Office", 1.0);
	User* u1 = new User("Boris");
	PC myPC("Dino");
	//std::cout << p1->getName() << std::endl;
	//std::cout << u1->getName() << std::endl;
	myPC.addSoft(p1);
	myPC.addSoft(p2);
	myPC.addUser(u1);
	myPC.printListSoft();
	myPC.getUserName();

	return 0;
}