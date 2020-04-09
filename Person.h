#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Person{
private:
    string name;
    string surename;
    int year;
public:
    Person();
    Person(const string name, const string surename, int year);
    Person(const Person &P);
    ~Person();

    void setName (const string name);
    void setSurename (const string surename);
    bool setYear (int year);

    void const print();

    string const getName(string name);
    string const getSurename(string surename);
    int getYear();

    Person operator=(const Person &p);
    bool operator==(const Person &p);
    bool operator>(const Person &p);
    bool operator<(const Person &p);
    bool operator>=(const Person &p);
    bool operator<=(const Person &p);
    bool operator!=(const Person &p);

    friend ostream& operator<< (ostream &out, const Person &p);
    friend istream& operator>> (istream &in,Person &p);
};
