#include<stdio.h>
#include<stdlib.h>

void welcome() {
  printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*\n");
  printf("\n    Stacks and Queues\n");
  printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
}
int options() {
  int a;
  printf("Choose the Data Structure :\n");
  printf("1. Stack\n2. Queue\n3. Exit\n\n>");
  scanf("%d",&a);
  return a;
}
int input(int x) {
  int b;
  printf("\nEnter the size of ");
  if(x==1) {
    printf("Stack ");
  }
  else if (x==2) {
    printf("Queue ");
  }
  printf("or Enter 0 to go back to the previous menu :\n\n>");
  scanf("%d",&b);
  return b;
}
int stack_display() {
  int c;
  printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*\n");
  printf("\n        Stack\n");
  printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*\n");
  printf("\n1. Push\n2. Pop\n3. View Stack\n4. Back to previous menu\n\n>");
  scanf("%d",&c);
  return c;
}

int queue_display() {
  int c;
  printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*\n");
  printf("\n        Queue\n");
  printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*\n");
  printf("\n1. Inqueue\n2. Dequeue\n3. View Queue\n4. Back to previous menu\n\n>");
  scanf("%d",&c);
  return c;
}

void push_or_inqueue(int n,int arr[n],int *i,int j) {
  if((*i)<n) {
    printf("\n\nEnter the value to be");
    if(j==1) {
      printf(" Pushed :\n\n>");
    }
    else if(j==2) {
      printf(" Inqueued :\n\n>");
    }
    scanf("%d",&arr[(*i)]);
    printf("\n\nExecution Successfull\n\n");
  }
  else {
    printf("\n\nData Struct !!\n\n");
    (*i)--;
  }
}

void pop(int n,int arr[n],int *i) {
  if((*i)==0) {
    printf("\n\nStack Empty...Nothing to Pop !!\n\n");
  }
  else {
    (*i)--;
    printf("\n\n %d Popped !!",arr[(*i)]);
  }
}

void dequeue(int n,int arr[n],int *i) {
  if((*i)==0) {
    printf("\n\nQueue Empty...Nothing to Dequeue !!\n\n");
  }
  else {
    printf("\n\n %d Dequeued !!",arr[0]);
    for(int j=0;j<(*i);j++){
            arr[j]=arr[j+1];
        }
    (*i)--;
  }
}

void display_data_structure(int n,int arr[n],int *i) {
  if((*i)==0) {
    printf("\n\n Data Structure Empty !!\n\n");
  }
  else {
    for(int j=0;j<(*i);j++){
      printf("\n\n%d\t",arr[j]);
    }
    printf("\n\n");
  }
}

void stack_operations(int y,int n,int arr[n],int *i) {
  if(y==1) {
    push_or_inqueue(n,arr,i,1);
    (*i)++;
  }
  else if(y==2) {
    pop(n,arr,i);
  }
  else if(y==3) {
    display_data_structure(n,arr,i);
  }
  else {
    printf("\n\nInvalid Option....try again !!\n\n");
  }
}

void queue_operations(int y,int n,int arr[],int *i) {
  if(y==1) {
    push_or_inqueue(n,arr,i,2);
    (*i)++;
  }
  else if(y==2) {
    dequeue(n,arr,i);
  }
  else if(y==3) {
    display_data_structure(n,arr,i);
  }
  else {
    printf("\n\nInvalid Option....try again !!\n\n");
  }
}

int main() {
  while (1) {
    while (1) {
      int n,x;
      welcome();
      x=options();
      if(x==3) {
        exit(0);
      }
      else if(x>3) {
        printf("Invalid Option..Try again\n");
        break;
      }
      n=input(x);
      if(n==0) {
        break;
      }
      int i=0;
      while (1) {
        int arr[n],y=0;
        if(x==1) {
          y=stack_display();
          if(y==4) {
            printf("\n\nNote : All data will be Deleted \n\n");
            break;
          }
          else {
            stack_operations(y,n,arr,&i);
          }
        }
        else if(x==2) {
          y=queue_display();
          if(y==4) {
            printf("\n\nNote : All data will be Deleted \n\n");
            break;
          }
          else {
            queue_operations(y,n,arr,&i);
          }
        }
      }
    }
  }
  return 0;
}
