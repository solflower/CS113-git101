  #include <stdio.h>
  //double f; -> ตัวแปร global จะให้ค่าเริ่มต้นเป็น 0
  //char f = '\0' -> สตริงว่าง
  int main()
  {
      printf("Hello World!");
      unsigned long long a = 4000000000; //จองพื้นที่เยอะเกินไป
      char c = 'a';
      char b = 97;
      float d = 0.111;
      double e = 10.111;
      double f; //ตัวแปร local
      float ans3 = 1/2; //จะได้ 0 เพราะ 1 กับ 2 เป็น int พอหารกันก็จะได้คำตอบเป็น int เหมือนกัน (0.5->0) พอเจอ float อีกก็กลายเป็น 0.000000
      printf("%lf", f+500);
  }