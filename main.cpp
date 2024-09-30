#include "File1.h"
#include "File2.h"
#include "File3.h"
#include <iostream>

int main() {
    using namespace OuterNamespace::InnerNamespace;

    // Create instances of ClassA, ClassB, and ClassC with names
    ClassA a("Alpha");
    ClassB b("Beta");
    ClassC c("Gamma");

    // Display messages from each class
    a.displayMessage();
    b.displayMessage();
    c.displayMessage();

    // Use methods to interact with other classes
    a.useClassB(&b);
    a.useClassC(&c);

    b.useClassA(&a);
    b.useClassC(&c);

    c.useClassA(&a);
    c.useClassB(&b);

    // Using nested classes and structs
    ClassA::NestedClassA nestedA("Description for NestedClassA");
    nestedA.nestedDisplay();

    ClassB::NestedStructB nestedB("Information for NestedStructB");
    nestedB.nestedDisplay();

    ClassC::NestedClassC nestedC("Note for NestedClassC");
    nestedC.nestedDisplay();

    // Setting and getting values
    a.setValue(42);
    b.setFlag(true);
    c.setData(3.14);

    std::cout << "ClassA value: " << a.getValue() << std::endl;
    std::cout << "ClassB flag: " << std::boolalpha << b.getFlag() << std::endl;
    std::cout << "ClassC data: " << c.getData() << std::endl;

    return 0;
}
