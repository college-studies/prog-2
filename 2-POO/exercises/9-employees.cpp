#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee
{
private:
  string name;
  string id;

protected:
  double salary;

public:
  Employee(string name, string id) : name(name), id(id), salary(1000) {}

  virtual string getName() { return name; }
  virtual string getId() { return id; }
  virtual double getSalary() { return salary; }

  void setName(string name) { this->name = name; }
  void setId(string id) { this->id = id; }
  void setSalary(double salary) { this->salary = salary; }
};

class EmployeeElementary : public Employee
{
private:
  string elementarySchool;

public:
  EmployeeElementary(string id, string name, string elementarySchool) : Employee(name, id), elementarySchool(elementarySchool) {}

  string getElementarySchool() { return elementarySchool; }
  double getSalary() override { return salary * 1.1; }

  void setElementarySchool(string elementarySchool) { this->elementarySchool = elementarySchool; }
};

class EmployeeHighSchool : public EmployeeElementary
{
private:
  string highSchool;

public:
  EmployeeHighSchool(string id, string name, string elementarySchool, string highSchool) : EmployeeElementary(id, name, elementarySchool), highSchool(highSchool) {}

  string getHighSchool() { return highSchool; }
  double getSalary() override { return salary * 1.5; }

  void setHighSchool(string highSchool) { this->highSchool = highSchool; }
};

class EmployeeUndergraduate : public EmployeeHighSchool
{
private:
  string college;

public:
  EmployeeUndergraduate(string id, string name, string elementarySchool, string highSchool, string college) : EmployeeHighSchool(id, name, elementarySchool, highSchool), college(college) {}

  string getCollege() { return college; }
  double getSalary() override { return salary * 2; }

  void SetCollege(string college) { this->college = college; }
};

int main()
{
  double ElementarySalary, HighSchoolSalary, CollegeSalary, SalaryTotal;

  EmployeeElementary e1("ID 1", "Fulano A", "Elementary School A");
  EmployeeElementary e2("ID 2", "Fulano B", "Elementary School B");
  EmployeeElementary e3("ID 3", "Fulano C", "Elementary School C");
  EmployeeElementary e4("ID 4", "Fulano D", "Elementary School D");

  EmployeeHighSchool e5("ID 5", "Fulano E", "Elementary School E", "HighSchool E");
  EmployeeHighSchool e6("ID 6", "Fulano F", "Elementary School F", "HighSchool F");
  EmployeeHighSchool e7("ID 7", "Fulano G", "Elementary School G", "HighSchool G");
  EmployeeHighSchool e8("ID 8", "Fulano H", "Elementary School H", "HighSchool H");

  EmployeeUndergraduate e9("ID 9", "Fulano I", "Elementary School I", "HighSchool J", "College J");
  EmployeeUndergraduate e10("ID 10", "Fulano K", "Elementary School K", "HighSchool K", "College K");

  vector<Employee *> elementaryEmployees;

  elementaryEmployees.push_back(&e1);
  elementaryEmployees.push_back(&e2);
  elementaryEmployees.push_back(&e3);
  elementaryEmployees.push_back(&e4);

  for (auto e : elementaryEmployees)
  {
    ElementarySalary += e->getSalary();
  }

  vector<Employee *> highSchoolEmployees;

  highSchoolEmployees.push_back(&e5);
  highSchoolEmployees.push_back(&e6);
  highSchoolEmployees.push_back(&e7);
  highSchoolEmployees.push_back(&e8);

  for (auto e : highSchoolEmployees)
  {
    HighSchoolSalary += e->getSalary();
  }

  vector<Employee *> undergraduateEmployees;

  undergraduateEmployees.push_back(&e9);
  undergraduateEmployees.push_back(&e10);

  for (auto e : undergraduateEmployees)
  {
    CollegeSalary += e->getSalary();
  }

  SalaryTotal = (ElementarySalary + HighSchoolSalary + CollegeSalary);

  cout << "Elementary School Employee Cost: " << ElementarySalary << endl;
  cout << "High School Employee Cost: " << HighSchoolSalary << endl;
  cout << "Undergraduate Employee Cost: " << CollegeSalary << endl;
  cout << "Total Cost: " << SalaryTotal << endl;
}