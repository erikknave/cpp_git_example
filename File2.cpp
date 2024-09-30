#include "File2.h"
#include "File1.h" // For ClassA
#include "File3.h" // For ClassC
#include <iostream>

namespace OuterNamespace {
    namespace InnerNamespace {

        ClassB::ClassB(const std::string& name)
            : name(name), message("Hello from ClassB"), flag(false) {}

        void ClassB::useClassA(ClassA* a) {
            std::cout << "ClassB (" << name << ") is using ClassA:\n";
            a->displayMessage();
        }

        void ClassB::useClassC(ClassC* c) {
            std::cout << "ClassB (" << name << ") is using ClassC:\n";
            c->displayMessage();
        }

        void ClassB::displayMessage() {
            std::cout << message << " (" << name << ")\n";
        }

        void ClassB::setFlag(bool flag) {
            this->flag = flag;
        }

        bool ClassB::getFlag() const {
            return flag;
        }

        // Implementation of nested struct
        ClassB::NestedStructB::NestedStructB(const std::string& info)
            : nestedMessage("NestedStructB: " + info) {}

        void ClassB::NestedStructB::nestedDisplay() {
            std::cout << nestedMessage << std::endl;
        }

    } // namespace InnerNamespace
} // namespace OuterNamespace
