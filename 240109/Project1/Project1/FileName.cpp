#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*
#define MAX_STACK_SIZE 5
typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;
int is_empty()
{
    return (top == -1);
}
int is_full()
{
    return (top == (MAX_STACK_SIZE - 1));
}
void push(element item)
{
    if (is_full())
    {
        fprintf(stderr, "Stack overflow\n");
        return;
    }
    else
    {
        stack[++top] = item;
    }
}
element pop()
{
    if (is_empty())
    {
        fprintf(stderr, "Stack underflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
int main(void)
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    return 0;
}*/
int binarySearchPecur(int A[], int low, int high, int target);

int main()
{
    int num;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int target = 6;

    num = binarySearchPecur(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, target);

    if (num != -1)
    {
        printf("목표 %d은(는) 인덱스 %d에서 발견되었습니다.\n", target, num);
    }
    else
    {
        printf("목표 %d은(는) 배열에서 찾을 수 없습니다.\n", target);
    }

    return 0;
}

int binarySearchPecur(int A[], int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (A[mid] == target)
    {
        return mid;
    }
    if (A[mid] > target)
    {
        int leftResult = binarySearchPecur(A, low, mid - 1, target);
        if (leftResult != -1)
        {
            return leftResult;
        }
    }
    else
    {
        int rightResult = binarySearchPecur(A, mid + 1, high, target);
        if (rightResult != -1)
        {
            return rightResult;
        }
    }
    return -1;
}