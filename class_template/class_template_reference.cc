#include "class_template.h"
#include <string.h>
#include <iostream>
using namespace std;

int main() {
    Person<string, int> p("tom", 10);
    p.ShowPerson();
    

}