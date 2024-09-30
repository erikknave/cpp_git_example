#include "File3.h"
#include "File1.h" // For ClassA
#include "File2.h" // For ClassB
#include <iostream>

namespace OuterNamespace {
    namespace InnerNamespace {

        ClassC::ClassC(const std::string& name)
            : name(name), message("Hello from ClassC"), data(0.0) {}

        void ClassC::useClassA(ClassA* a) {
            std::cout << "ClassC (" << name << ") is using ClassA:\n";
            a->displayMessage();
        }

        void ClassC::useClassB(ClassB* b) {
            std::cout << "ClassC (" << name << ") is using ClassB:\n";
            b->displayMessage();
        }

        void ClassC::displayMessage() {
            std::cout << message << " (" << name << ")\n";
        }

        void ClassC::setData(double data) {
            this->data = data;
        }

        double ClassC::getData() const {
            return data;
        }

        // Implementation of nested class
        ClassC::NestedClassC::NestedClassC(const std::string& note)
            : nestedMessage("NestedClassC: " + note) {}

        void ClassC::NestedClassC::nestedDisplay() {
            std::cout << nestedMessage << std::endl;
        }

    } // namespace InnerNamespace
} // namespace OuterNamespace
