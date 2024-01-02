#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////5_1
    int solution5_1(int ladders[][2], int ladders_len, int win)
    {
        int answer = 0;
        int player[6] = { 1, 2, 3, 4, 5, 6 };
        for (int i = 0; i < ladders_len; i++)
        {
            int temp = player[ladders[i][0] - 1];
            player[ladders[i][0] - 1] = player[ladders[i][0]]; // 현재 위치에 다음 위치의 값을 대입하여 위치를 교환합니다.
            player[ladders[i][0]] = temp; // 다음 위치에 임시로 저장해 둔 현재 위치의 값을 대입하여 위치를 temp를 사용하여 교환하도록 했습니다
        }
        answer = player[win - 1];
        return answer;
    }
    int main5_1() 
    {
        int ladders[5][2] = { {1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6} };
        int ladders_len = 5;
        int win = 3;
        int ret = solution5_1(ladders, ladders_len, win);

        printf("solution5_1 함수의 반환 값은 %d 입니다.\n", ret);
        return 0;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////5_2

    int func_a5_2(int time_table[], int time_table_len)
    {
        int answer = 0;
        for (int i = time_table_len - 1; i >= 0; i--)
        {
            if (time_table[i] == 1)
            {
                answer = i;
                break;
            }
        }
        return answer;
    }
    int func_b5_2(int time_table[], int class1, int class2)
    {
        int answer = 0;
        for (int i = class1; i < class2; i++)
        {
        if (time_table[i] == 0)
        {
        answer++;
        }
        }
        return answer;
    }
    int func_c5_2(int time_table[], int time_table_len)
    {
        int answer = 0;
        for (int i = 0; i < time_table_len; i++)
        {
            if (time_table[i] == 1)
            {
                answer = i;
                break;
            }
        }
        return answer;
    }
    int solution5_2(int time_table[], int time_table_len)
    {
        int answer = 0;
        //첫 수업과 마지막 수업 사이의 비어있는 수업 길이를 계산할 수 있도록 합니다.
        int first_class = func_c5_2(time_table, time_table_len);//
        int last_class = func_a5_2(time_table, time_table_len);
        answer = func_b5_2(time_table, first_class, last_class);
        return answer;
    }
    int main5_2() {
        int time_table[] = { 1, 1, 0, 0, 1, 0, 1, 0, 0, 0 };
        int time_table_len = 10;
        int ret = solution5_2(time_table, time_table_len);

        printf("solution5_2 함수의 반환 값은 %d 입니다.\n", ret);
        return 0;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////5_3
    int solution5_3(int speed, int cars[], int cars_len)
    {
        int answer = 0;

        for (int i = 0; i < cars_len; i++)
        {
            if (cars[i] >= speed * 11 / 10 && cars[i] < speed * 12 / 10)
            {
                answer += 3;
            }
            else if (cars[i] >= speed * 12 / 10 && cars[i] < speed * 13 / 10)
            {
                answer += 5;
            }ㅜ            
            else if (cars[i] >= speed * 13 / 10)
            {
                answer += 7;
            }
        }

        return answer;
    }
    int main5_3() {
        int speed = 100;
        int cars[] = { 110, 98, 125, 148, 120, 112, 89 };
        int cars_len = 7;
        int ret = solution5_3(speed, cars, cars_len);

        printf("solution5_3 함수의 반환 값은 %d 입니다.\n", ret);
        return 0;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////5_4
    int solution5_4(int taekwondo, int running, int shooting[], int shooting_len)
    {
        int answer = 0;ㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗ

        if (taekwondo >= 25)
        {
            answer += 250;
        }
        else
        {
            answer += taekwondo * 8;
        }

        answer += 250 + (60 - running) * 5;

        int count = 0;
        for (int i = 0; i < shooting_len; i++)
        {
            answer += shooting[i];
            if (shooting[i] == 10)
            {
                count++;
            }
        }
        if (count >= 7)
        {
            answer += 100;
        }

        return answer;
    }
    int main5_4() {
        int taekwondo = 27;
        int running = 63;
        int shooting[] = { 9, 10, 8, 10, 10, 10, 7, 10, 10, 10 };
        int shooting_len = 10;
        int ret = solution5_4(taekwondo, running, shooting, shooting_len);

        printf("solution5_4 함수의 반환 값은 %d 입니다.\n", ret);
        return 0;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////5_5
    int solution5_5(int a, int b)
    {
        int answer = 0;

        for (int i = 1; i <= b; i++)
        {
            if ((a * i) % b == 0)
            {
                answer = a * i;///
                break;
            }
        }

        return answer;
    }
    int main5_5() {
        int a = 4;
        int b = 6;
        int ret = solution5_5(a, b);

        printf("solution5_5 함수의 반환 값은 %d 입니다.\n", ret);
        return 0;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////5_6
    int solution5_6(int korean, int english) 
    {
        int answer = 0;

        int math = 210 - (korean + english);

        if (math > 100)
        {
            answer = -1;
        }
        else
        {
            answer = math;
        }

        return answer;
    }
    int main5_6()
    {
        int korean = 70;
        int english = 60;
        int ret = solution5_6(korean, english);

        printf("solution5_6 함수의 반환 값은 %d 입니다.\n", ret);
        return 0;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////5_7
    int solution5_7(int stuffs[], int stuffs_len)
    {
        int answer = 0;

        int small_counter = 0;
        int general_counter = 0;

        for (int i = 0; i < stuffs_len; i++)
        {
            if (stuffs[i] > 3)
            {
                general_counter += stuffs[i];
            }
            else
            {
                small_counter += stuffs[i];
            }
        }

        if (small_counter > general_counter)///
        {
            answer = small_counter;
        }
        else
        {
            answer = general_counter;
        }

        return answer;
    }
    int main5_7() {
        int stuffs[6] = { 5, 3, 4, 2, 3, 2 };
        int stuffs_len = 6;
        int ret = solution5_7(stuffs, stuffs_len);

        printf("solution5_7 함수의 반환 값은 %d 입니다.\n", ret);
        return 0;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////5_8
    int solution5_8(int usage)
    {
        int answer = 0;

        if (usage > 30)
        {
            answer = 20 * 430 + 10 * 570 + (usage - 30) * 840;//
        }
        else if (usage > 20)
        {
            answer = 20 * 430 + (usage - 20) * 570;
        }
        else
        {
            answer = usage * 430;
        }

        return answer;
    }
    int main5_8() {
        int usage = 35;
        int ret = solution5_8(usage);

        printf("solution5_8 함수의 반환 값은 %d 입니다.\n", ret);
        return 0;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////5_9
    int* solution5_9(int score[], int score_len)
    {
        int* answer;
        answer = (int*)malloc(sizeof(int) * score_len);

        for (int i = 0; i < score_len; i++)
        {
            answer[i] = 1;
            for (int j = 0; j < score_len; j++)
            {
                if (score[i] < score[j]) answer[i]++;
            }
        }
        return answer;
    }
    int main5_9() {
        int score1[] = { 90, 87, 87, 23, 35, 28, 12, 46 };
        int score_len1 = 8;
        int* ret1 = solution5_9(score1, score_len1);

        printf("solution5_9 함수의 반환 값은 [");
        for (int i = 0; i < score_len1; i++)
        {
            if (i != 0)
                printf(", ");
            printf("%d", ret1[i]);
        }
        printf("] 입니다.\n");

        int score2[] = { 10, 20, 20, 30 };
        int score_len2 = 4;
        int* ret2 = solution5_9(score2, score_len2);

        printf("solution5_9 함수의 반환 값은 [");
        for (int i = 0; i < score_len2; i++)
        {
            if (i != 0)
                printf(", ");
            printf("%d", ret2[i]);
        }
        printf("] 입니다.\n");
        return 0;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////5_10
    int solution5_10(int time_table[], int time_table_len, int n) {
        int answer = 0;
        int* arr = (int*)malloc(sizeof(int) * n);

        for (int i = 0; i < time_table_len; i++) {
            arr[i % n] += time_table[i];
            if (arr[i % n] > answer) answer = arr[i % n];
        }
        return answer;
    }
    int main5_10() {
        int time_table1[] = { 1, 5, 1, 9 };
        int time_table_len1 = 4;
        int n1 = 3;
        int ret1 = solution5_10(time_table1, time_table_len1, n1);

        printf("solution5_10 함수의 반환 값은 %d 입니다.\n", ret1);

        int time_table2[] = { 4, 8, 2, 5, 4, 6, 7 };
        int time_table_len2 = 7;
        int n2 = 4;
        int ret2 = solution5_10(time_table2, time_table_len2, n2);

        printf("solution5_10 함수의 반환 값은 %d 입니다.\n", ret2);
        return 0;
    }
    //////////////////
    int main()
    {
        main5_1();
        main5_2();
        main5_3();
        main5_4();
        main5_5();
        main5_6();
        main5_7();
        main5_8();
        main5_9();
        main5_10();
    }