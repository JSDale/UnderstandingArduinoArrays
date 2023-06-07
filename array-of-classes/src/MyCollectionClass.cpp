#include <Arduino.h>
#include <MyClass.h>
#include <MyCollectionClass.h>

MyCollectionClass::MyCollectionClass(MyClass *collection)
{
    newCollection = new MyClass[3];
    for (int i = 0; i < 3; i++)
    {
        newCollection[i] = collection[i];
    }
}

MyCollectionClass::~MyCollectionClass()
{
    delete[] newCollection;
}

void MyCollectionClass::IterateThrough()
{
    for (unsigned int i = 0; i < 3; i++)
    {
        Serial.println(newCollection[i].GetNumber());
    }
}

void MyCollectionClass::Test(MyClass *collection)
{
    for (unsigned int i = 0; i < 3; i++)
    {
        Serial.println(collection[i].GetNumber());
    }
}
