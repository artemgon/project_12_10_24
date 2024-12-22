#include "loggers.h"

struct Human
{
private:
    string _name, _surname, _sex, _job;
    int _age;
public:
    Human() : _name(""), _surname(""), _sex(""), _job(""), _age(0) {}
    Human(string name) : _name(name), _surname(""), _sex(""), _job(""), _age(0) {}
    Human(string name, string surname) : _name(name), _surname(surname), _sex(""), _job(""), _age(0) {}
    Human(string name, string surname, string sex) : _name(name), _surname(surname), _sex(sex), _job(""), _age(0) {}
    Human(string name, string surname, string sex, string job) : _name(name), _surname(surname), _sex(sex), _job(job), _age(0) {}
    Human(string name, string surname, string sex, string job, int age) : _name(name), _surname(surname), _sex(sex), _job(job), _age(age) {}

    void setName(string name)
    {
        _name = name;
    }
    void setSurname(string surname)
    {
        _surname = surname;
    }
    void setSex(string sex)
    {
        _sex = sex;
    }
    void setJob(string job)
    {
        _job = job;
    }
    void setAge(int age)
    {
        _age = age;
    }
    string getName()
    {
        return _name;
    }
    string getSurname()
    {
        return _surname;
    }
    string getSex()
    {
        return _sex;
    }
    string getJob()
    {
        return _job;
    }
    int getAge() const
    {
        return _age;
    }
	void countYearOfBirth() const
    {
        cout << "Year of birth: " << 2024 - _age << endl;
        cout << endl;
    }
    void printInfo() const
    {
        cout << "Name: " << _name << endl;
        cout << "Surname: " << _surname << endl;
        cout << "Sex: " << _sex << endl;
        cout << "Job: " << _job << endl;
        cout << "Age: " << _age << endl;
    }
    ~Human() = default;
};
