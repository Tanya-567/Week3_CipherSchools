#include<bits/stdc++.h>

using namespace std;

class Animal{
public:
    void speak(){
        cout<<"they made a sound"<<endl;
    }
};
class Dog:public Animal{
public:
void speak()
{
    cout<<"woofff bhavv grrrr"<<endl;
}
};
class Cat:public Animal{
public:
  void speak()
  {

      cout<<"Meowwwwww"<<endl;
  }
    };

int main(){
    Dog d;
    Animal a;
    Cat c;

    a.speak();
    d.speak();
    c.speak();

return 0;
}
