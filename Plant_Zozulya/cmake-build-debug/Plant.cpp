#include "Plant.h"
#include <utility>



int Employee::salary()
{
    double salary = cash_rate + 0.15 * experience + pn * 10;;
    return (int)salary;
}


void Employee::AddEquip(Equipment *equip)
{
    equips.push_back(equip);
}


void Employee::setEmployee(string Employee_Name, string Employee_Surname, int Exp, int Bet, int prod)
{
    Name = Employee_Name;
    Surname = Employee_Surname;
    Experience = Exp;
    PoorMoney = Bet;
    Production = prod;
}

Employee::Employee(string Employee_Name, string Employee_Surname, int Exp, int Bet, int prod)
{
    setEmployee(Employee_Name, Employee_Surname, Exp, Bet, prod);
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



int Product::full_of_prod(string N, int m, int p)
{
    return m * p;
}

Head::Head(string Name, string Surname, int exp)
{
    Name = std::move(Name);
    Surname = std::move(Surname);
    Experience = exp;
}

int Head::salary()
{
    return Employees.capacity()==0?Experience*100:Experience*Employees.capacity()*100;
}

void Head::EmployeeList()
{
    for (int i = 0; i < Employees.capacity(); i++)
    {
        cout << Employees[i]->get_Name() << endl;
    }
}

void Head::addEmployee(Employee* Employee)
{
    Employees.push_back(Employee);
}

Pluralist::Pluralist(int salaryCoeff, string Name, string Surname, int exp)
{
    Name = std::move(Name);
    Surname = std::move(Surname);
    salaryCoeff = salaryCoeff;
    Experience = exp;
}

int Pluralist::salary()
{
    return Experience*salaryCoeff*100;
}

int Equipment::price_of_equip() {
    return price;
}

void Equipment::setEquip(string Name, int number, int equip_price)
{
    Name_of_equip = Name;
    the_number = number;
    price = equip_price;
}

string Profession::get_name(string Name_of_profession) {
    return Name_of_profession;
}

void Profession::setProf(string Name, int bet)
{
    Name_of_profession = Name;
    base_value = bet;
}