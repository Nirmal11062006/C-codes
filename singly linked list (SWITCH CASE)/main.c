#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};
struct node *head = NULL; //global variable //temp can also be assigned as a global variable 
/* Count nodes */
int count() {
int c = 0;
struct node *temp = head;
while (temp != NULL) {
c++;
temp = temp->next;
}
return c;
}
/* Display list */
void display() {
struct node *temp = head;
if (head == NULL) {
printf("List is empty\n");
return;
}
printf("Linked List: ");
while (temp != NULL) {
printf("%d  ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
/* Insert at beginning */
void insert_begin() {
struct node *newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
if (head == NULL) {
newnode->next = NULL;
head = newnode;
} else {
newnode->next = head;
head = newnode;
}
}
/* Insert at end */
void insert_end() {
struct node *newnode = (struct node*)malloc(sizeof(struct node));
struct node *temp = head;
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = NULL;
if (head == NULL) {
head = newnode;
return;
}
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newnode;
}
/* Insert at any position */
void insert_pos(int pos) {
struct node *newnode, *temp = head;
int i = 1;
if (pos < 1) {
printf("Invalid position\n");
return;
}
if (pos == 1) {
insert_begin();
return;
}
while (temp != NULL && i < pos - 1) {
temp = temp->next;
i++;         
}
if (temp == NULL) {
printf("Invalid position\n");
return;
}
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = temp->next;
temp->next = newnode;
}
/* Insert at middle */
void insert_middle() {
int pos = (count() / 2) + 1;
insert_pos(pos); 
}
/* Delete from beginning */
void delete_begin() {
struct node *temp;
if (head == NULL) {
printf("List is empty\n");
return;
}
temp = head;
head = head->next;
free(temp);
}
/* Delete from end */
void delete_end() {
struct node *temp = head;
struct node *prev = NULL;
if (head == NULL) {
printf("List is empty\n");
return;
}
if (head->next == NULL) {
free(head);
head = NULL;
return;
}
while (temp->next != NULL) {
prev = temp;
temp = temp->next;
}
prev->next = NULL;
free(temp);
}
/* Delete from any position */
void delete_pos(int pos) {
struct node *temp = head;
struct node *prev = NULL;
int i = 1;
if (head == NULL || pos < 1) {
printf("Invalid operation\n");
return;
}
if (pos == 1) {
delete_begin();
return;
}
while (temp != NULL && i < pos) {
prev = temp;
temp = temp->next;
i++;
}
if (temp == NULL) {
printf("Invalid position\n");
return;
}
prev->next = temp->next;
free(temp);
}
/* Delete from middle */
void delete_middle() {
int pos;
if (head==NULL) {
printf("List is empty\n");
return;
}
pos = (count() / 2) + 1;
delete_pos(pos);
}
/* Main */
int main() {
int choice, pos;
while (1) {
printf("\n--- SINGLY LINKED LIST MENU ---\n");
printf("1. Insert at Beginning\n");
printf("2. Insert at End\n");
printf("3. Insert at Middle\n");
printf("4. Insert at Any Position\n");
printf("5. Delete from Beginning\n");
printf("6. Delete from End\n");
printf("7. Delete from Middle\n");
printf("8. Delete from Any Position\n");
printf("9. Display\n");
printf("10. Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);
switch (choice) {
case 1: insert_begin(); break;
case 2: insert_end(); break;
case 3: insert_middle(); break;
case 4:
printf("Enter position: ");
scanf("%d", &pos);
insert_pos(pos);
break;
case 5: delete_begin(); break;
case 6: delete_end(); break;
case 7: delete_middle(); break;
case 8:
printf("Enter position: ");
scanf("%d", &pos);
delete_pos(pos);
break;
case 9: display(); break;
case 10: exit(0);
default: printf("Invalid choice\n");
}
}
return 0;
}