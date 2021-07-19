#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int array[10];

int *back = NULL, *front = NULL;

void enqueue(int value)
{
    if (back == NULL)
    {
        back = front = array;
    }
    else
    {
        if (back == array + 9)
        {
            back = array;
        }
        else
        {
            back++;
        }
    }
    *back = value;
}

int dequeue()
{
    int num, *temp;
    if (front == NULL)
    {
        return -1;
    }
    temp = front;
    num = *temp;
    if (front == back)
    {
        front = back = NULL;
    }
    else
    {
        if (front == array + 9)
        {
            front = &array[0];
        }
        else
        {
            front++;
        }
    }
    return num;
}

void printqueue()
{
    int *current;
    current = front;
    printf("Queue:");
    if(back==NULL){
        ;
    }
    else{
        while (current != back)
        {
            printf("%d ", *current);
            if (current == array + 9)
            {
                current = array;
            }
            else
            {
                current++;
            }
        }
        printf("%d ", *current);
    }
    
}

int main(void)
{
    int num, value, size, count = 1;
    char func[8];
    FILE *fp = fopen("input.txt", "r");
    printf("Insert the original numbers.\n");
    fscanf(fp, "%d", &size);
    while (count <= size)
    {
        fscanf(fp, "%d", &num);
        enqueue(num);
        count++;
    }
    printqueue();
    printf("\n---------------------------\n");
    while (!feof(fp))
    {
        fscanf(fp, "%s ", func);
        if (strcmp(func, "Dequeue") == 0)
        {
            printf("Dequeue\n");
            value = dequeue();
            if (value == -1)
            {
                printf("Nothing in queue\n");
            }
            else
            {
                printf("Dequeue %d from queue.\n", value);
            }
            printqueue();
            printf("\n---------------------------\n");
        }
        else if (strcmp(func, "Enqueue") == 0)
        {
            printf("Enqueue\n");
            fscanf(fp, "%d ", &num);
            printf("Enqueue %d into queue\n", num);
            enqueue(num);
            printqueue();
            printf("\n---------------------------\n");
        }
    }
    fclose(fp);
    printf("Finish total input");

    system("pause");
    return 0;
}