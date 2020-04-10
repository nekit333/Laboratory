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

    void print() const;

    string getName(string name) const;
    string getSurename(string surename) const;
    int getYear();

    Person operator=(const Person &p);
    bool  operator==(const Person &p) const;
    bool  operator>(const Person &p) const;
    bool  operator<(const Person &p) const;
    bool  operator>=(const Person &p) const;
    bool  operator<=(const Person &p) const;
    bool  operator!=(const Person &p) const;

    friend ostream& operator<< (ostream &out, const Person &p);
    friend istream& operator>> (istream &in,Person &p);
};
