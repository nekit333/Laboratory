#include "Person.h"

Person::Person(){
    setName("noName");
    setSurename("noSurename");
    year = 1900;
}

Person::Person(const string name, const string surename, int year){
    setName(name);
    setSurename(surename);
    this->year=1900;
    setYear(year);
}

Person::Person(const Person &P){
    setName(P.name);
    setSurename(P.surename);
    year = P.year;
}

Person::~Person(){
}

void Person::setName(const string name){
    this->name = name;
}

void Person::setSurename(const string surename){
    this->surename = surename;
}

bool Person::setYear(int yearROM){
    struct tm *t;
    time_t z = time(NULL);
    t = localtime(&z);
    if (yearROM >= t->tm_year+1780 && yearROM <= t->tm_year+1900){
        year = yearROM;
        return true;
    }
    return false;
}

void  Person::print() const{
    cout << name << " " << surename << " " << year <<"\n" << endl;
}

string  Person::getName(string name) const{
    return name;
}

string  Person::getSurename(string surename) const{
    return surename;
}

int Person::getYear(){
    return year;
}

Person Person::operator=(const Person &p){
    this->name = p.name;
    this->surename = p.surename;
    return *this;
}

bool  Person::operator==(const Person &p) const{
    return this->year == p.year && this->name == p.name && this->surename == p.surename;
}

bool  Person::operator>(const Person &p) const{
    return (this->year > p.year);
}

bool  Person::operator<(const Person &p) const{
    return (this->year < p.year);
}

bool  Person::operator>=(const Person &p) const{
    return !(*this < p);
}
bool  Person::operator<=(const Person &p) const{
    return !(*this > p);
}

bool  Person::operator!=(const Person &p) const{
    return !(this->year == p.year && this->name == p.name && this->surename == p.surename);
}

ostream& operator<< (ostream &out, const Person &p){
    out << " year: " << p.year << " name: " << p.name << " surename: " << p.surename;
    return out;
}

istream& operator>> (istream &in, Person &p){
    in >> p.name;
    in >> p.surename;
    in >> p.year;
    return  in;
}
