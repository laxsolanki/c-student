#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int password=1007;
  if(n==password){

int roll[100],Class[100],count=0;
char name[100][50],father[100][50];    //float marks[100];

while(1){
        int choise;

printf(".....Student Record system..... \n" ) ;
printf( "1 add student information \n ");

printf("2 view All student \n ");
printf("3 search student \n  ") ;
printf("4 all student information \n ");
printf("5 Exit \n "  );
scanf("%d",&choise) ;
if(choise ==1){
        printf("Enter a roll number");
    scanf("%d",roll[count]);
    printf("Enter a name ");
    scanf("%s",name[count]);
printf("enter father name \n ");
    scanf("%s" ,father[count]);
    printf("Enter mother name\n");
    scanf("%s",mother[count]);
    printf("Enter class\n");
    scanf("%d",&Class[count]);

    printf("...succesfull...");
    count++;
}
}
  }
  else{
    printf("Invalid password");
  }

return 0;
}
