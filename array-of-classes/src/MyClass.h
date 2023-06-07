#ifndef MyClass_h_
#define MyClass_h_
#include <Arduino.h>

class MyClass
{
    public:
        MyClass();
        MyClass(int number);
        int GetNumber();
        void SetNumber(int newNumber);

    private:
        int number;
};

#endif
