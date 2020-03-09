#include <iostream>
#include <cmath>

using namespace std;


class MyClass {       // Klasa
  private:             //Wszystkie atrybuty mają być prywatne
    int myNum;        // Atrybuty
    string myString;
    int bonus;
    static int counter;  
    const int myConst=11;
    static const int myStaticConst=12;
    static constexpr int myStaticConstexpr=10; 
  public: //Wszystkie metody i konstruktory publiczne
    MyClass(){}
    MyClass(int myNum, string myString="Nothing here", int bonus=0) : myNum{myNum}, myString{myString}, bonus{bonus} {}
    // ~MyClass(){counter--;}
    void print(){cout<<myNum<<" "<<myString<<" "<<bonus<<endl;}
    int getMyNum(){return myNum;}
    string getMyString(){return myString;}
    int getBonus(){return bonus;}
    void setMyNum(int newNum){myNum=newNum;}
    void setMyString(string newString){myString=newString;}
    void setBonus(int newBonus){bonus=newBonus;}
    static void setCounter () { counter = 0; }
	static void printCounter() { cout << "Counter = " << counter << endl; }
    void printConsts(){cout<<myConst<<" "<<myStaticConst<<" "<<myStaticConstexpr<<endl;}
    int getConst(){return myConst;}
    int getStaticConst(){return myStaticConst;}
    int getStaticConstexpr(){return myStaticConstexpr;}
};
// MyClass::MyClass(){  //Konstruktor bez parametrów
// }


int main(){
    auto p=MyClass{2,"sd",23};
    p.print();
    auto w=MyClass();
    w.print();
    p.setBonus(10);
    p.setMyNum(20);
    p.setMyString("");
    cout<<p.getMyNum()<<" "<<p.getBonus()<<" "<<p.getMyString()<<endl;
    p.printConsts();
    cout<<p.getConst()<<endl;
    cout<<p.getStaticConst()<<endl;
    cout<<p.getStaticConstexpr()<<endl;
}
