#include <iostream>
#include "vector"
using namespace std;



class Equipment
{
private:
    string equip_name;
    int number;
    int price;
public:
    void equip_inf(string equip_name, int number, int price);
    int price_of_equip();
};




class Human{
private:
    virtual int salary() = 0;
};


class Product
{
private:
    string Product_name;
    int number;
    int price;
public:
    int product_inf(string S, int number, int price);
};



class Employee:public Human
{
private:
    int cash_rate;
    int experience;
    string Name;
    string Surname;
    int products;
    vector<Equipment*> equips;
    vector<Product*> prods;
public:
    void Employee_inf(string name, string surname, int exp, int bet, int prd);
    Employee(string Name, string Surname, int exp, int bet, int prd);
    void AddEquipment(Equipment *eqp);
    int salary();
    string get_Name();
    string get_Surname();
};






class Manager:public Human
{
private:
    string Name;
    string Surname;
    int experience;
    vector<Employee*> Employees;
public:
    Manager(string name, string Surname, int exp);
    int salary();
    void AddEmployee(Employee* Employee);
    void EmployeeList();
};



class Pluralist :public Human
{
private:
    string Name;
    string Surname;
    int experience;
    int salary_coeff;
public:
    Pluralist(int salary_coeff, string name, string Surname, int exp);
    int salary();
};



class Profession
{
private:
    string prof_name;
    int base_rate;
public:
    void Prof_inf(string Name, int bet);
    string get_name(string prof_name);
};






