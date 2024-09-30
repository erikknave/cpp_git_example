#ifndef FILE1_H
#define FILE1_H

#include <string>

// Forward declarations of classes in other files
namespace OuterNamespace {
    namespace InnerNamespace {
        class ClassB;
        class ClassC;
    }
}

namespace OuterNamespace {
    namespace InnerNamespace {

        class ClassA {
        public:
            ClassA(const std::string& name);
            void useClassB(ClassB* b);
            void useClassC(ClassC* c);
            void displayMessage();
            void setValue(int val);
            int getValue() const;

            // Nested class within ClassA
            class NestedClassA {
            public:
                NestedClassA(const std::string& desc);
                void nestedDisplay();
            private:
                std::string nestedMessage;
            };

        private:
            std::string message;
            std::string name;
            int value;
        };

    } // namespace InnerNamespace
} // namespace OuterNamespace

#endif // FILE1_H
