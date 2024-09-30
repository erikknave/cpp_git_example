#ifndef FILE3_H
#define FILE3_H

#include <string>

// Forward declarations of classes in other files
namespace OuterNamespace {
    namespace InnerNamespace {
        class ClassA;
        class ClassB;
    }
}

namespace OuterNamespace {
    namespace InnerNamespace {

        class ClassC {
        public:
            ClassC(const std::string& name);
            void useClassA(ClassA* a);
            void useClassB(ClassB* b);
            void displayMessage();
            void setData(double data);
            double getData() const;

            // Nested class within ClassC
            class NestedClassC {
            public:
                NestedClassC(const std::string& note);
                void nestedDisplay();
            private:
                std::string nestedMessage;
            };

        private:
            std::string message;
            std::string name;
            double data;
        };

    } // namespace InnerNamespace
} // namespace OuterNamespace

#endif // FILE3_H
