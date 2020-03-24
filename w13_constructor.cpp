#include <iostream>
#include <sstream> // string stream
using namespace std;

class Student{
private:
    string name;
    double score;
public:
    // Constructor ใช้เซ็ตค่าเริ่มต้น
    // ชื่อฟังก์ชันเหมือนชื่อ class
    Student(string name){
        this->name=name;
        score=0;
    }

    void addScore(double score){
        if (score>0){
            this->score += score;
        }
        /* เขียนอีกแบบเป็น this->score+=score>0 ? score:0; ได้ */
    }

    double getScore(){
        return score;
    }

    string getName(){
        return name;
    }

    void setName(string name){ 
        this->name=name;
    }

    // ฟังก์ชันทำงานเหมือน cout คือรีเทิร์นข้อความทั้งข้อความไป cout ใน int main
    string toString(){
        // stringstream เป็น data type
        stringstream ss;
        ss << name << ":" << score;
        return ss.str();
    }

};

int main(){
    Student pupae("Panthita"), palm("Onrawin");
    cout << pupae.toString()<<endl;
    cout << palm.toString()<<endl;

    Student* sp;
    // pointer sp ชี้ไปที่ object ที่สร้างใหม่ ต้องมีคำว่า new ด้วย
    sp = new Student("Araya");
    cout << sp->toString() << endl;

    // create array
    // ประกาศแบบ Student students[20]; ไม่ได้ เพราะ Student เป็น Constructor แล้วต้องมี parameter ด้วย
    Student* students[20];
    students[0]=new Student("Chavee");
    students[1]=&pupae;
    students[2]=&palm;
    students[3]=sp;
    cout<<"-------------------------------"<<endl;
    for (int i = 0; i < 4; i++)
    {
        students[i]->addScore(i*10);
        cout << students[i]->getName() << ">>" << students[i]->getScore() << endl;
    }
    
}