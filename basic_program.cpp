#include <iostream>
using namespace std;
class Student{
  private:
     int roll;
     string name;
     int marks;
  public:
    string addCalcMarks(string name , int roll, int marks)
    {
        if(marks >=90)
        {
            return "A";
        }
        if(marks <=90 && marks >=80)
        {
            return "B";
        }
        if(marks<=80)
        {
            return "C";
        }
    return "F";
    }
     
};

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    Student s1;
    cout<<s1.addCalcMarks("Varun",32,97);
    

    return 0;
}
