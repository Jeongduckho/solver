# this header is for linear function calculation
void linear_menu() {
  void blank();
  int main();
  int sel;
  puts("Select |");
  blank();
  puts("1. 두 점의 좌표를 입력받아 함수만들기.");
  puts("2. 기울기와 한점의 좌표를 입력받아 함수만들기.");
  puts("0. 돌아가기")
  blank();
  puts("고르세요.");
  printf(" : ");
  scanf("%d", &sel);
  switch(sel) {
    case 1:
    make_with2point();
    break;
    case 2:
    make_with_G_1point();
    break;
    case 0;
    main();
    break;
  }
  void blank() {
  printf("\n");
}
  void make_with2point() {
    void blank();
    void linear_menu();
    //기울기 a ( y=ax+b꼴)
    int a, b, c, x1, x2, x3, x4, sel;
    puts("두점의 좌표를 입력하세요.");
    blank();
    puts("첫번쨰 점");
    printf("x: ");
    scanf("%d", &x1);
    printf("y: ");
    scanf("%d", &y1);
    blank();
    puts("두번쨰 점");
    printf("x: ");
    scanf("%d", &x2);
    printf("y: ");
    scanf("%d", &y2);
    blank();
    puts("무엇을 출력할까요? |")
    blank();
    puts("1. 표준형(y=ax+b)");
    puts("2. 일반형(ax+by+c=0)");
    puts("3. 둘다");
    blank();
    printf(": ");
    scanf("%d", &sel);
    switch(sel) {
      case 1:
      puts("표준형 |");
      blank();
      a=(y2-y1)/(x2-x1);
      b=((x2*y1)-(x1*y2))/(x2-x1);
      if(a!=1) {
        if(b>0)
              printf("y=%dx+%d\n", a, b);
              else if(b==0)
              printf("y=%dx\n", a);
              else
              printf("y=%dx%d\n", a, b);
      }
      else {
                if(b>0)
              printf("y=x+%d\n", b);
              else if(b==0)
              printf("y=x\n");
              else
              printf("y=x%d\n", b);
      }
      break;
      case 2:
      puts("일반형 |");
      blank();
      a=y2-y1;
      b=x1-x2;
      c=(x2*y1)-(x1*y2); 
      if(a!=0 && b!=0) {
      if(a!=1) {
        if(b>1) {
          if(c>0)
          printf("%dx+%dy+%d=0\n", a, b, c);
          else if(c==0);
          printf("%dx+%dy=0\n", a, b);
          else
          printf("%dx+%dy%d=0\n", a, b, c);
        }
        else if(b==1) {
          if(c>0)
          printf("%dx+y+%d=0\n", a, c);
          else if(c==0);
          printf("%dx+y=0\n", a);
          else
          printf("%dx+y%d=0\n", a, c);       
        }
        else {
          if(c>0)
          printf("%dx%dy+%d=0\n", a, b, c);
          else if(c==0);
          printf("%dx%dy=0\n", a, b);
          else
          printf("%dx%dy%d=0\n", a, b, c);
        }
       }
       if(a==1) {
          if(b>1) {
          if(c>0)
          printf("%dx+%dy+%d=0\n", a, b, c);
          else if(c==0);
          printf("%dx+%dy=0\n", a, b);
          else
          printf("%dx+%dy%d=0\n", a, b, c);
        }
        else if(b==1) {
          if(c>0)
          printf("%dx+y+%d=0\n", a, c);
          else if(c==0);
          printf("%dx+y=0\n", a);
          else
          printf("%dx+y%d=0\n", a, c);       
        }
        else {
          if(c>0)
          printf("%dx%dy+%d=0\n", a, b, c);
          else if(c==0);
          printf("%dx%dy=0\n", a, b);
          else
          printf("%dx%dy%d=0\n", a, b, c);
        }  
       }
      }
      else
      puts("일반형을 만들 가치가 없습니다.")
      break;
      case 3:
    }
    linear_menu();
  }
