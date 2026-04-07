1. C언어로 정수 배열 arr에 저장된 원소들의 순서를 거꾸로 뒤집어 출력하는 프로그램을 작성하시오.

    int
    main(void)
{

    int arr[5] = {1, 2, 3, 4, 5};

    // 코드 작성

    printf("\n");

    return 0;
}

for (int i = 4; i >= 0; i--)
{
    printf("%d", arr[i]);
}
2. 다음 C 코드의 문제점을 찾아 해결하고, printf 출력 결과를 적으시오.

#include <stdio.h>

#include <stdlib.h>

                                         int main()
{

    int *arr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {

        arr[i] = i * i;
    }

    printf("%d\n", arr[3]); // 결과 기입

    // start of code

    ….
        // end of code

        return 0;
}

free(arr);
9 3. 다음 코드를 실행했을 때 printf 출력 값이 2 3 4 5 6 이 되도록 func 함수를 완성하시오.

#include <stdio.h>

    void func(/*....*/)
{

    // ....
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    func(arr, 5);

    for (int i = 0; i < 5; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}

void func(int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = arr[i] + 1;
    }
}
4.

    printf('a');

위 코드는 알파벳 a를 출력하기 위해 작성된 것이다.

    이 코드는 문제가 있을까
    ? 문제가 없다면 “없다”고 기입하고,

    문제가 있다면 그 이유를 서술하시오.

    있다,
    printf("%c", 's');
이런식으로 출력해야함 5. C언어 코드의 실행 결과를 기입 하시오.

    void
    update(int p)
{
    p = 200;
}

void update1(int *p) { *p = 100; }

void update2(int **p) { **p = 1000; }

int main()
{

    int x = 10;

    int *p = &x;

    update(x);
    printf("%d\n", x);

    update1(&x);
    printf("%d\n", x);

    update2(&p);
    printf("%d\n", x);

    update1(p);
    printf("%d\n", x);
}

10 100 1000 100 6. 다음은 링크드리스트에서 특정 위치의 Node를 찾는 코드이다.구조체의 내용을 참고하여.빈 칸의 코드를 작성하시오.

    typedef struct _listnode
{

    int item;

    struct _listnode *next;

} ListNode;

typedef struct _linkedlist
{

    int size;

    ListNode *head;

} LinkedList;

ListNode *findNode(LinkedList *ll, int index)
{

    ListNode *temp;

    // 코드 작성

    return temp;
}

temp = ll->head;

while (index > 0)
{
    temp = temp->next;
    if (temp == NULL)
        return NULL;
    index--;
}
