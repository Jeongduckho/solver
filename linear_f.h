// this header is for linear function calculation
void blank() {
	printf("\n");
}
void linear_menu() {
	void make_with2point();
	void make_with_G_1point();
	int sel;
	puts("Select |");
	blank();
	puts("1. 두 점의 좌표로 함수만들기.");
	puts("2. 기울기와 한점의 좌표로 함수만들기.");
        puts("3. x절편과 y절편으로 함수만들기.");
        puts("4. 두 함수의 교점 구하기");
        puts("5. 함수 세개로 삼각형 만들고 원하는 값 구하기");
        puts("6. 함수 네개로 사각형 만들고 원하는 값 구하기");
        puts("7. x축으로 n만큼 이동한 함수 구하기");
        puts("8. y축으로 n만큼 이동한 함수 구하기");
        puts("9. x축으로 n만큼 이동하고 y축으로 m만큼 이동한 함수 구하기");
	puts("0. 돌아가기");
	blank();
	puts("고르세요.");
	printf(" : ");
	scanf("%d", & sel);
	switch (sel) {
		case 1:
			system("clear");
			make_with2point();
			break;
		case 2:
			make_with_G_1point();
			break;
		case 3: 
		        make_with_onlyX_onlyY();
		        break;
		case 0:
			system("clear");
			main();
			break;
	}
}
void make_with2point() {
	int a, b, c, x1, x2, y1, y2, sel, normal;
	puts("두점의 좌표를 입력하세요.");
	puts("1,2 이런식으로 입력하시면 됩니다.");
	blank();
	puts("첫번쨰 점");
	printf("(x,y): ");
	scanf("%d,%d", & x1, & y1);
	blank();
	puts("두번쨰 점");
	printf("(x,y): ");
	scanf("%d,%d", & x2, & y2);
	blank();
	puts("무엇을 출력할까요? |");
	blank();
	puts("1. 표준형(y=ax+b)");
	puts("2. 일반형(ax+by+c=0)");
	puts("3. 둘다");
	blank();
	printf(": ");
	scanf("%d", & sel);
	system("clear");
	if (sel == 1 || sel == 3) {
		// y="a"x+"b"
		a = (y2 - y1) / (x2 - x1);
		b = ((x2 * y1) - (x1 * y2)) / (x2 - x1);
		puts("표준형 |");
		if (((x2 - x1) * a) == (y2 - y1) && (x2 - x1) * b == (x2 * y1) - (x1 * y2)) {
			if (a != 1 && a != 0) {
				if (b > 0) {
					printf("y=%dx+%d\n", a, b);
				} else if (b == 0) {
					printf("y=%dx\n", a);
				} else {
					printf("y=%dx%d\n", a, b);
				}
			} else if (a == 0) {
				if (b != 0) {
					printf("y=%d\n", b);
				} else {
					printf("y=0\n");
				}
			} else {
				if (b > 0) {
					printf("y=x+%d\n", b);
				} else if (b == 0) {
					printf("y=x\n");
				} else {
					printf("y=x%d\n", b);
				}
			}
		} else {
			puts("pass");
			normal = 1;
		}
	}
	if (sel == 2 || sel == 3 || normal == 1) {
		// ax+by+c=0
		a = y2 - y1;
		b = x1 - x2;
		c = (x2 * y1) - (x1 * y2);
		puts("일반형 |");
		if (a != 0 && b != 0) {
			if (a > 1) {
				if (b > 1) {
					if (c > 0) {
						printf("%dx+%dy+%d=0\n", a, b, c);
					} else if (c == 0) {
						printf("%dx+%dy=0\n", a, b);
					} else {
						printf("%dx+%dy%d=0\n", a, b, c);
					}
				} else if (b * b == 1) {
					if (b > 0) {
						if (c > 0) {
							printf("%dx+y+%d=0\n", a, c);
						} else if (c == 0) {
							printf("%dx+y=0\n", a);
						} else {
							printf("%dx+y%d=0\n", a, c);
						}
					} else {
						if (c > 0) {
							printf("%dx-y+%d=0\n", a, c);
						} else if (c == 0) {
							printf("%dx-y=0\n", a);
						} else {
							printf("%dx-y%d=0\n", a, c);
						}
					}
				} else {
					if (c > 0) {
						printf("%dx%dy+%d=0\n", a, b, c);
					} else if (c == 0) {
						printf("%dx%dy=0\n", a, b);
					} else {
						printf("%dx%dy%d=0\n", a, b, c);
					}
				}
			} else if (a == 1) {
				if (b > 1) {
					if (c > 0) {
						printf("x+%dy+%d=0\n", b, c);
					} else if (c == 0) {
						printf("x+%dy=0\n", b);
					} else {
						printf("x+%dy%d=0\n", b, c);
					}
				} else if (b * b == 1) {
					if (b > 0) {
						if (c > 0) {
							printf("x+y+%d=0\n", c);
						} else if (c == 0) {
							printf("x+y=0\n");
						} else {
							printf("x+y%d=0\n", c);
						}
					} else {
						if (c > 0) {
							printf("x-y+%d=0\n", c);
						} else if (c == 0) {
							printf("x-y=0\n");
						} else {
							printf("x-y%d=0\n", c);
						}
					}
				} else {
					if (c > 0) {
						printf("x%dy+%d=0\n", b, c);
					} else if (c == 0) {
						printf("x%dy=0\n", b);
					} else {
						printf("x%dy%d=0\n", b, c);
					}
				}
			} else {
				a = -a;
				b = -b;
				c = -c;
				if (b > 1) {
					if (c > 0) {
						printf("%dx%dy%d=0\n", a, b, c);
					} else if (c == 0) {
						printf("%dx%dy=0\n", a, b);
					} else {
						printf("%dx%dy+%d=0\n", a, b, c);
					}
				} else if (b * b == 1) {
					if (b > 0) {
						if (c > 0) {
							printf("%dx-y%d=0\n", a, c);
						} else if (c == 0) {
							printf("%dx-y=0\n", a);
						} else {
							printf("%dx-y+%d=0\n", a, c);
						}
					} else {
						if (c > 0) {
							printf("%dx-y%d=0\n", a, c);
						} else if (c == 0) {
							printf("%dx-y=0\n", a);
						} else {
							printf("%dx-y+%d=0\n", a, c);
						}
					}
				} else {
					if (c > 0) {
						printf("%dx+%dy%d=0\n", a, b, c);
					} else if (c == 0) {
						printf("%dx+%dy=0\n", a, b);
					} else {
						printf("%dx+%dy+%d=0\n", a, b, c);
					}
				}
			}
		} else {
			puts("일반형을 만들 가치가 없습니다.");
		}
	}
	blank();
	linear_menu();
}
void make_with_G_1point() {
	void p/*표준형*/(int m /* 기울기 */ , int x1, int y1) {
		puts("표준형 |");
		// y=mx+k
		int k = (y1 - (m * x1));
		if (k > 0) {
			printf("y=%dx+%d\n", m, k);
		} else if (k == 0) {
			printf("y=%dx\n", m);
		} else {
			printf("y=%dx%d\n", m, k);
		}
	}
	void n/*일반형*/(int m /* 기울기 */ , int x1, int y1) {
		puts("일반형 |");
		if (m == 0) {
			puts("일반형을 만들 가치가 없습니다.");
		} else {
			// use mx-y+k=0
			int k = (y1 - (m * x1));
			if (m > 0) {
				if (k > 0) {
					printf("%dx-y+%d=0\n", m, k);
				} else if (k == 0) {
					printf("%dx-y=0\n", m);
				} else {
					printf("%dx-y%d\n", m, k);
				}
			} else {
				m = -m;
				k = -k;
				if (k > 0) {
					printf("%dx+y%d=0\n", m, k);
				} else if (k == 0) {
					printf("%dx+y=0\n", m);
				} else {
					printf("%dx+y+%d\n", m, k);
				}

			}
		}
	}
	int m, x1, y1, sel;
	puts("기울기를 입력하세요.");
	scanf("%d", & m);
	blank();
	puts("한점의 좌표를 입력하세요.");
	puts("1,2 이런식으로 입력하시면 됩니다.");
	blank();
	printf("(x,y): ");
	scanf("%d,%d", & x1, & y1);
	blank();
	puts("무엇을 출력할까요? |");
	blank();
	puts("1. 표준형(y=ax+b)");
	puts("2. 일반형(ax+by+c=0)");
	puts("3. 둘다");
	blank();
	printf(": ");
	scanf("%d", & sel);
	switch (sel) {
		case 1:
			p(m, x1, y1);
			break;
		case 2:
			n(m, x1, y1);
			break;
		case 3:
			p(m, x1, y1);
			n(m, x1, y1);
			break;
	}
	blank();
	linear_menu();
}
void make_with_onlyX_onlyY() {
	void p(int onlyX, int onlyY) {
		m=-onlyY/onlyX;
		printf("y=%dx+%d", m, onlyY);
		}
	void n(int onlyX, int onlyY) {
		
		}
	int onlyX, onlyY, a, b;
	puts("x절편과 y절편을  입력하세요.");
	puts("(n,n) 이런식으로 입력하세요.");
        printf(": ");
        scanf("%d,%d", &onlyX, &onlyY);
        blank();
        puts("무엇을 출력할까요? |");
	blank();
	puts("1. 표준형(y=ax+b)");
	puts("2. 일반형(ax+by+c=0)");
	puts("3. 둘다");
	blank();
	printf(": ");
	scanf("%d", & sel);
	switch(sel) {
		case 1:
		p(onlyX, onlyY);
		break;
		case 2:
		n(onlyX, onlyY);
		break;
		case 3:
		p(onlyX, onlyY);
		n(onlyX, onlyY);
		break;
	}
}
