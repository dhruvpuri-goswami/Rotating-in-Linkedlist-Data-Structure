/*
    Problem Statement :
    -- Given a list, rotate the list to the right by k places, where k is non negative.

    Input A = 1 -> 2 -> 3 -> 4 -> 5
    K = 2

    Output : 4 -> 5 -> 1 -> 2 -> 3 

    [ ASKED IN AMAZON ]

    // Programmer : Dhruvpuri Goswami // 

*/

#include <stdio.h>
#include <stdlib.h>

// Defining structure for linkedlist
struct node
{
    int data;
    struct node *next;
} *prev, *head, *temp, *newnode, *dump, *last;

int size, i;

// This function prints a line (Only for designing purpose)
void line()
{
    int l;
    for (l = 0; l < 25; l++)
    {
        printf("=");
    }
}

// Creates a linked list
void createlinkedlist()
{
    line();
    printf("\n|| Enter Size : ");
    scanf("%d", &size);
    line();
    for (i = 0; i < size; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\n\n>> Enter Value for Node [%d] : ", i + 1);
        scanf("%d", &newnode->data);
        if (head == NULL)
        {
            head = newnode;
            last = head;
            head->next = head;
        }
        else
        {
            last->next = newnode;
            newnode->next = head;
            last = newnode;
        }
    }
    printf("\n:::::::::::::::::::::::::::\n");
    printf("!!! LINKED LIST CREATED !!!\n");
    printf(":::::::::::::::::::::::::::\n\n\n");
}

// Displays the elements of linked list
void display()
{
    temp = head;
    do
    {
        printf("[ %d ] --> ", temp->data);
        temp = temp->next;
    } while (temp->next != head);
    printf("[ %d ]\n", temp->data);
}

// Clockwise Rotating
void clockwise()
{
    int r;
    printf("\n=>> How many times do you want to rotate ?\n");
    printf("\n->> ");
    scanf("%d", &r);
    for (i = 0; i < r; i++)
    {
        printf("\nClockwise Rotating Linkedlist %d time:::\n\n", i + 1);
        temp = head;

        // Getting link of previous node (A node before the last node) 
        while(temp!=last){
            prev = temp;
            temp = temp->next;
        }

        // Assigning temp pointer equal to head
        temp = head;

        // making last pointer to head
        head = last;

        // making previous pointer to last
        last = prev;

        display();
    }
}
void anticlockwise()
{
    int r;
    printf("\n=>> How many times do you want to rotate ?\n");
    printf("\n->> ");
    scanf("%d", &r);
    for (i = 0; i < r; i++)
    {
        printf("\nAnticlockwise Rotating Linkedlist %d time:::\n\n", i + 1);

        // Assigning temp pointer equal to head
        temp = head;

        // Moving head pointer to it's next
        head = head->next;

        // Moving last pointer to it's next
        last = last->next;
        
        display();
    }
}
void main()
{
    int i, choice;
    printf("\n::::: LINKED LIST ROTATING PROGRAM :::::\n\n");
    while (1)
    {
        printf("\n(1) Create Linked List --\n(2) Clockwise Rotating --\n(3) AntiClockwise Rotating --\n(4) Display List --\n(5) Exit --\n");
        printf("\n>> Enter Choice : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            if(head==NULL)
                createlinkedlist();
            else
            {
                printf("\n!!! LINKED LIST ALREADY CREATED !!!\n\n");
            }
            break;
        case 2:
            clockwise();
            break;
        case 3:
            anticlockwise();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("\n !!! INVALID INPUT !!!");
            break;
        }
    }
}