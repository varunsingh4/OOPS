#include <iostream>
#include <string.h>
using namespace std;
class Car{
    private:
      string brand;
      int speed;
      public:
        void drive(){
          cout<<"hi"+ brand;
      }
    
};
int main()
{
    Car C1;
    C1.drive();
    
    printf("Hello World");

    return 0;
}
