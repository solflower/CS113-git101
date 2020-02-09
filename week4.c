#include<stdio.h>
int addTen(int x)
{
    x = x+10;
    return x;
}
int addTwenty();
int x = 1000;
int main()
{
    int x = 50;//จองพิื้นที่ในmemoryไว้แล้ว4bytes(intมี4bytes)
    int y = addTen(x);//เรียกใช้ฟังก์ชันaddTen
    printf("x in main = %d\n",x);
    printf("addTen in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
}
int addTwenty(){
    printf("x in addTwenty = %d\n",x);//x เป็น 1000 ตามที่ประกาศ int x=1000
    x = x+20;//มันจะไปเขียนค่าx=1020ทับค่าx=1000ที่อยู่global
    return x;//พอreturnปุ้บ ค่าxที่อยู่ในmemoryนี้จะถูกลบทันทีเพราะถูกreturnออกมา
}