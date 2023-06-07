#include <Arduino.h>
#include <MyClass.h>

MyClass::MyClass()
{
    number = 999;
}

MyClass::MyClass(int number)
{
    number = number;
}

void MyClass::SetNumber(int newNumber)
{
    number = newNumber;
}

int MyClass::GetNumber()
{
    return number;
}