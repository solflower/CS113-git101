#include <stdio.h>
int addTen(int *number, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("[%p] = %d\n",number + i, *(number+i));
        *(number + i)+=10;
    }
    return 1;
}
void addTwenty(int *n) // n คือ address ของ "int n = 5" แล้วพอ n เจอ * คือหมายถึงเอาค่าใน address นั้นออกมาคำนวณในฟังก์ชัน
{
    *n +=20;
}
int main()
{
    int numbers[] = {4,5,6,7,8};
    int n = 5;
    addTen(numbers,n); 
    for (int i = 0; i < n; i++)
    {
        printf("main [%p] = %d\n",numbers + i, *(numbers +i));
    }
    addTwenty(&n); //ส่งค่า address ของ n เข้าฟังก์ชัน addTwenty
    printf("n = %d\n",n);
}