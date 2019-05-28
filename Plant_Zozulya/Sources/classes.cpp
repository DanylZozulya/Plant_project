#include "classes.h"
#include <utility>



int Employee::salary()
{
    double salary = cash_rate * 0.1 * experience + (products * 0.05);
    return (int)salary;
}


void Employee::AddEquipment(Equipment *equip)
{
    equips.push_back(equip);
}


void Employee::Employee_inf(string emp_name, string emp_surname, int exp, int cash, int prod)
{
    Name = emp_name;
    Surname = emp_surname;
    experience = exp;
    cash_rate = cash;
    products = prod;
}

Employee::Employee(string Employee_Name, string Employee_Surname, int Exp, int Bet, int prod)
{
    Employee_inf(Employee_Name, Employee_Surname, Exp, Bet, prod);
    cout << Name << " " << Surname << " salary : " << Employee::salary() << endl;
}

string Employee::get_Name()
{
    return Name;
}

string Employee::get_Surname()
{
    return Surname;
}



int Product::product_inf(string N, int m, int p)
{
    return m * p;
}

Manager::Manager(string name, string Surname, int exp)
{
    Name = std::move(Name);
    Surname = std::move(Surname);
    experience = exp;
}

int Manager::salary()
{
    return Employees.capacity()==0?experience*100:experience*Employees.capacity()*100;
}

void Manager::EmployeeList()
{
    for (int i = 0; i < Employees.capacity(); i++)
    {
        cout << Employees[i]->get_Name() << endl;
    }
}

void Manager::AddEmployee(Employee* Employee)
{
    Employees.push_back(Employee);
}

Pluralist::Pluralist(int coeff, string Name, string Surname, int exp)
{
    Name = std::move(Name);
    Surname = std::move(Surname);
    salary_coeff = coeff;
    experience = exp;
}

int Pluralist::salary()
{
    return experience*salary_coeff*100;
}

int Equipment::price_of_equip() {
    return price;
}

void Equipment::equip_inf(string name, int num, int prc)
{
    equip_name = name;
    number = num;
    price = prc;
}

string Profession::get_name(string Name_of_profession) {
    return Name_of_profession;
}

void Profession::Prof_inf(string prof, int cash)
{
    prof_name = prof;
    base_rate = cash;
}