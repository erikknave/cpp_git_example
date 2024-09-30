#ifndef FILE2_H
#define FILE2_H

#include <string>

// Forward declarations of classes in other files
namespace OuterNamespace {
    namespace InnerNamespace {
        class ClassA;
        class ClassC;
    }
}

namespace OuterNamespace {
    namespace InnerNamespace {

        class ClassB {
        public:
            ClassB(const std::string& name);
            void useClassA(ClassA* a);
            void useClassC(ClassC* c);
            void displayMessage();
            void setFlag(bool flag);
            bool getFlag() const;

            // Nested struct within ClassB
            struct NestedStructB {
                NestedStructB(const std::string& info);
                void nestedDisplay();
                std::string nestedMessage;
            };

        private:
            std::string message;
            std::string name;
            bool flag;
        };

    } // namespace InnerNamespace
} // namespace OuterNamespace

#endif // FILE2_H
