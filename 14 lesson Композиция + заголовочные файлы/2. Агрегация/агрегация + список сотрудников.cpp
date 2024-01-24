#include <iostream>
#include <string>
#include <vector>

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
	std::vector<Worker> workers; // чтобы было проще, в этом Отделе работает только один
	
public:
	Department()
	{
		std::cout << "Departament is created" << std::endl;
	}
	~Department()
	{
		std::cout << "Departament is destruct" << std::endl;
	}

	void addWorker(Worker * worker) {
		workers.push_back(*worker);
	}

	void showWorkers() {
		std::cout << "----------------" << std::endl;
		for (Worker&  worker: workers) {
			std::cout << worker.getName() << ' ';
			
		}
		std::cout << "----------------" << std::endl;
			

	}

};

int main()
{
	// Создаем Работника вне области видимости класса Department
	Worker* worker1 = new Worker("Anton"); // создаем Работника
	Worker* worker2 = new Worker("Boris"); // создаем Работника
	Worker* worker3 = new Worker("Dima"); // создаем Работника

	{// Создаем Отдел и передаем Работника в Отдел через параметр конструктора
		Department department;
		department.addWorker(worker1);
		department.addWorker(worker2);
		department.addWorker(worker3);
		department.showWorkers();
	}
	 // department выходит из области видимости и уничтожается здесь
	
	// worker продолжает существовать дальше
	std::cout << worker1->getName() << " still exists!";

	delete worker1;

	return 0;
}