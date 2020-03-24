#include <iostream>
using namespace std;

class Person{
private:
    string name;

public:
    Person(string name){
        this->name=name;
    }
    
    void changeName(string name){
        this->name=name;
    }

    string getName(){
        return name;
    }

};

class Student : public Person{
private:
    double score;
public:
    // ส่ง name ไปเก็บที่ Person
    Student(string name) : Person(name){
        score=0;
    }

    double getScore(){
        return score;
    }

    void addScore(double score){
        if(score>0) this->score+=score;
    }
};

int main(){
    Person naib("Naib");
    cout << naib.getName() <<endl;
    // cout << naib.getScore(); <-- ERROR Superclass ไม่สามารถเรียกฟังก์ชันจาก Subclass ได้
    
    Student emma("Lisa");
    // subclass เรียกฟังก์ชันจาก superclass ได้
    cout << emma.getName() << endl;
    emma.addScore(1);
    // subclass เรียกฟังก์ชันจาก subclass ด้วยกันได้
    cout << emma.getScore() << endl;
}