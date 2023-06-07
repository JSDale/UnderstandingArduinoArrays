#ifndef MyCollectionClass_h_
#define MyCollectionClass_h_

#include <Arduino.h>
#include <MyClass.h>

class MyCollectionClass
{
    public:
        MyCollectionClass(MyClass *collection);
        void IterateThrough();
        virtual ~MyCollectionClass();
        void Test(MyClass *collection);

    private:
        MyClass *newCollection;
};

#endif
