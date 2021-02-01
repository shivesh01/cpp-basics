// C++ Pass objects to function

#include <iostream>
using namespace std;

class student{
    public:
    double marks;

    student(double m){
    marks = m;
    }
};

void calculateAverage(student s1, student s2){
    
    double average = (s1.marks + s2.marks)/2;

    cout<< "Average Marks = "<<average<<endl;

}

int main(){
    student student1(88.0), student2(56.0);

    calculateAverage(student1, student2);

    return 0;
}