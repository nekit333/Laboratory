#include "Person.h"

int main(){
    Person p("Ivan", "Ivanov", 2010);
    Person p1;
    Person p2(p);

    p.print();
    p1.print();
    p2.print();

    p1.setName("Alesha");
    p1.setSurename("Popovich");

    p1.print();

    return 0;
}
