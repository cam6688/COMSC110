// Lab 6 tryIt6A 
// Cameron Hui

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

void printMessage();
int tripleIt(int);

/*****     main     *****/
int main()
{ int value = 2;

   cout << "Hello from main.\n";
   printMessage();

   cout << "\nValue returned by tripleIt is "
 << tripleIt(value) << endl;
   cout << "In main value now is "
 << value << endl << endl;

   value = tripleIt(value);
   cout << "In main value now is " << value << endl;

   value = tripleIt(value);
   cout << "In main value now is "
 << value << endl << endl;

   cout << "Goodbye from main.\n";
   system("pause");
   return 0;
 }

 /*****    printMessage    *****/
 void printMessage()
 {
   cout << "Hello from PrintMessage.\n";
 }

 /*****    tripleIt    *****/
 int tripleIt(int someNum)
 {
   return (someNum * someNum * someNum);
 }
