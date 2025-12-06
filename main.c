#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure for stack
typedef struct Node {
    char flight[20];
    struct Node* next;
} Node;

// Stack structure
typedef struct {
    Node* top;
} Stack;

// Initialize stack
void init(Stack* s) {
    s->top = NULL;
}

// Check if stack is empty
int isEmpty(Stack* s) {
    return s->top == NULL;
}

// Push flight into stack
void push(Stack* s, char flight[]) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->flight, flight);
    newNode->next = s->top;
    s->top = newNode;
    printf("Flight %s added to queue.\n", flight);
}

// Pop flight from stack
void pop(Stack* s) {
    if (isEmpty(s)) {
        printf("No flights in queue!\n");
        return;
    }
    Node* temp = s->top;
    printf("Flight %s processed.\n", temp->flight);
    s->top = s->top->next;
    free(temp);
}

// Display flights in stack
void display(Stack* s) {
    if (isEmpty(s)) {
        printf("No flights in queue.\n");
        return;
    }
    Node* temp = s->top;
    printf("Flights (Top → Bottom):\n");
    while (temp != NULL) {
        printf("• %s\n", temp->flight);
        temp = temp->next;
    }
}

// Main menu simulation
int main() {
    Stack landing, departure;
    init(&landing);
    init(&departure);

    int choice;
    char flight[20];

    do {
        printf("\n===== AIRPORT MANAGEMENT SYSTEM (STACK-LL) =====\n");
        printf("1. Add Flight to Landing Queue\n");
        printf("2. Land Flight\n");
        printf("3. Add Flight to Departure Queue\n");
        printf("4. Depart Flight\n");
        printf("5. Display All Queues\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Flight Code: ");
                scanf("%s", flight);
                push(&landing, flight);
                break;
            case 2:
                printf("Landing Flight: ");
                pop(&landing);
                break;
            case 3:
                printf("Enter Flight Code: ");
                scanf("%s", flight);
                push(&departure, flight);
                break;
            case 4:
                printf("Departing Flight: ");
                pop(&departure);
                break;
            case 5:
                printf("\n--- Landing Queue ---\n");
                display(&landing);
                printf("\n--- Departure Queue ---\n");
                display(&departure);
                break;
            case 6:
                printf("Exiting system...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6);

    return 0;
}