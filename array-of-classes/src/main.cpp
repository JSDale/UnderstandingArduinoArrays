#include <Arduino.h>
#include <MyClass.h>
#include <MyCollectionClass.h>

MyClass myClasses[3] = 
{
  MyClass(1),
  MyClass(2),
  MyClass(3)
};

MyCollectionClass collectionClass = MyCollectionClass(myClasses);

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial);
  for (int i = 0; i < 2; i++)
  {
    myClasses[i].SetNumber(i+1);
  }

  collectionClass = MyCollectionClass(myClasses);
}

void loop() 
{
  //collectionClass.IterateThrough();
  //collectionClass.Test(myClasses);
  for (int i = 0; i < 3; i++)
  {
    Serial.println(String(myClasses[i].GetNumber()));
  }
  delay(2000);
}

// class Square
// {
//   public:
//     Square()
//     {
//       length = 999;
//     }

//     void Print()
//     {
//       Serial.println(length);
//     }
  
//   private:
//     int length;
// };

// Square squares[3];