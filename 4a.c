#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
     struct Node *next;
};
// *head;

// struct Node *head;

struct Node *getNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->info = data;
    return temp;
}

void traverse( struct Node *head)
{
    if (head == NULL)
    {
        printf( "Empty List");
        return;
    }
     struct Node *temp = head;
    while (temp != NULL)
    {
        printf( temp->info);
        temp = temp->next;
    }
}

void insertBeg(struct Node **head, int info)
{
    struct  Node *newNode = getNode(info);
    newNode->next = head;
    head = newNode;
}
// void insertLast(Node *&head, int info)
// {
//     Node *newNode = new Node(info);
//     if (head == nullptr)
//     {
//         head = newNode;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next != nullptr)
//         temp = temp->next;
//     temp->next = newNode;
// }

// Node *search(Node *&head, int data)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         if (temp->info == data)
//             return temp;
//         temp = temp->next;
//     }
//     return nullptr;
// }

// void insertAfter(Node *&head, int data, int info)
// {
//     Node *temp = search(head, data);
//     if (temp == nullptr)
//     {
//         printf() data printf( " not found" ;
//         return;
//     }
//     Node *newNode = new Node(info);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// void removeBeg(Node *&head)
// {
// }
// void removeLast(Node *&head)
// {
// }
// void removeAfter(Node *&head, Node *current)
// {
// }

int main()
{
    struct Node *head = NULL;

    int ch, info;
    do
    {
         printf("1.........Add Begining") ;
             printf( "2.........Add Last");
             printf( "3.........Add After"); 
             printf( "4.........Remove Begining"); 
             printf( "5.........Remove Last" );
             printf( "6.........Remove After" );
             printf( "7.........Search" );
             printf( "8.........Show" );
             printf( "9.........Exit" );
             printf( "Enter your choice: ");
        scanf("%d", ch);
        switch (ch)
        {
        case 1:
            printf( "Enter info: ");
           scanf("%d", info);
            insertBeg(&head, info);
            break;
        case 2:
            printf( "Enter info: ");
         scanf("%d", info);
            printf( "unimplementd") ;
            break;
        case 3:
            printf( "unimplementd") ;
            break;
        case 4:
            printf( "unimplementd" );
            break;
        case 5:
            printf( "unimplementd" );
            break;
        case 6:
            printf( "unimplementd" );
            break;
        case 7:
            printf( "unimplementd" );
            break;
        case 8:
            traverse(&head);
            break;
        case 9:
            printf( "See you later") ;
            break;
        default:
            printf( "Not defined yet") ;
        }
    } while (ch != 9);
}
printf()