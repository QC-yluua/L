#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int a, b, result, user_ans;
    char op;
    char choice;
    srand((unsigned int)time(NULL));
    printf("=== 四则运算测试程序 ===\n");
    printf("输入答案后按回车，输入 'q' 退出程序\n\n");
    while (1) {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
        switch (rand() % 4) {
            case 0:
                op = '+';
                result = a + b;
                break;
            case 1:
                op = '-';
                result = a > b ? a - b : b - a;
                if (a < b) { int temp = a; a = b; b = temp; }
                break;
            case 2:
                op = '*';
                result = a * b;
                break;
            case 3:
                op = '/';
                b = rand() % 20 + 1; 
                int quotient = rand() % 10 + 1;  
                a = b * quotient;
                result = quotient;
                break;
        }
        printf("%d %c %d = \n", a, op, b);
        printf("请输入答案：");
        if (scanf("%d", &user_ans) != 1) {
            while (getchar() != '\n');
            printf("\n程序结束，感谢使用！\n");
            break;
        }
        if (user_ans == result) {
            printf("回答正确！\n\n");
        } else {
            printf("回答错误！正确答案是：%d\n\n", result);
        }
    }

    return 0;
}
