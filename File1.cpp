#include "File1.h"
#include "File2.h" // For ClassB
#include "File3.h" // For ClassC
#include <iostream>

namespace OuterNamespace {
    namespace InnerNamespace {

        ClassA::ClassA(const std::string& name)
            : name(name), message("Hello from ClassA"), value(0) {}

        void ClassA::useClassB(ClassB* b) {
            std::cout << "ClassA (" << name << ") is using ClassB:\n";
            b->displayMessage();
        }

        void ClassA::useClassC(ClassC* c) {
            std::cout << "ClassA (" << name << ") is using ClassC:\n";
            c->displayMessage();
        }

        void ClassA::displayMessage() {
            std::cout << message << " (" << name << ")\n";
        }

        void ClassA::setValue(int val) {
            value = val;
        }

        int ClassA::getValue() const {
            return value;
        }

        // Implementation of nested class
        ClassA::NestedClassA::NestedClassA(const std::string& desc)
            : nestedMessage
            ("NestedClassA: " + desc) {}

        void ClassA::NestedClassA::nestedDisplay() {
            std::cout << nestedMessage << std::endl;
        }

    } // namespace InnerNamespace
} // namespace OuterNamespace
