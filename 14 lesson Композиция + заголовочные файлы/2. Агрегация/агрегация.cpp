#include <iostream>
#include <string>

class Worker
{
private:
	std::string m_name;

public:
	Worker(std::string name)
		: m_name(name)
		{
		std::cout << "Worker is created" << std::endl;
		}
	~Worker() {
		std::cout << "Worker is destruct" << std::endl;
	}
	std::string getName() { return m_name; }
};

class Department
{
private:
	Worker * m_worker; // чтобы было проще, в этом Отделе работает только один
	
public:
	Department(Worker * worker = nullptr)
		:m_worker(worker)
		{
			std::cout << "Departament is created" << std::endl;
		}
	~Department()
	{
		std::cout << "Departament is destruct" << std::endl;
	}
};

int main()
{
	// Создаем Работника вне области видимости класса Department
	Worker* worker = new Worker("Anton"); // создаем Работника
	{
	// Создаем Отдел и передаем Работника в Отдел через параметр конструктора
		Department department(worker);
		
	} // department выходит из области видимости и уничтожается здесь
	
	// worker продолжает существовать дальше
	std::cout << worker->getName() << " still exists!";

	delete worker;

	return 0;
}