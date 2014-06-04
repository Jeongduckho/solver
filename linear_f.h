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
    int m, x1, x2, x3, x4, sel;
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
      break;
      case 2:
      break;
    }
    linear_menu();
  }
