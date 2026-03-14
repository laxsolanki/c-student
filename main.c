#include<stdio.h>
#include<string.h>

int main(){

FILE *fp,*temp;

int n;
printf("Enter password:\n ");
scanf("%d\n",&n);

int password = 1007;

if(n == password){

int roll, cls;
char name[50], father[50], mother[50], batch[20];

while(1){

int choice;

printf("\n.....Student Record System.....\n");
printf("1 Add student information\n");
printf("2 View All students\n");
printf("3 Search student\n");
printf("4 Delete student\n");
printf("5 Exit\n");

printf("Enter choice:\n ");
scanf("%d\n",&choice);

if(choice == 1){

fp = fopen("students.txt","a");

printf("Enter name:\n ");
scanf("%s\n",name);

printf("Enter roll number:\n ");
scanf("%d\n",&roll);

printf("Enter father name:\n ");
scanf("%s\n",father);

printf("Enter mother name:\n ");
scanf("%s\n",mother);

printf("Enter class:\n ");
scanf("%d\n",&cls);

printf("Enter batch:\n ");
scanf("%s\n",batch);

fprintf(fp,"%d %s %s %s %d %s\n",
roll,name,father,mother,cls,batch);

fclose(fp);

printf("Student saved successfully\n");

}

else if(choice == 2){

fp = fopen("students.txt","r");

if(fp == NULL){
printf("No records found\n");
}

else{

printf("\nRoll Name Father Mother Class Batch\n");

while(fscanf(fp,"%d %s %s %s %d %s",
&roll,name,father,mother,&cls,batch)!=EOF){

printf("%d %s %s %s %d %s\n",
roll,name,father,mother,cls,batch);

}

fclose(fp);

}

}

else if(choice == 3){

int r, found=0;

printf("Enter roll number:\n ");
scanf("%d\n",&r);

fp = fopen("students.txt","r");

while(fscanf(fp,"%d %s %s %s %d %s",
&roll,name,father,mother,&cls,batch)!=EOF){

if(r == roll){

printf("\nStudent Found\n");
printf("Name: %s\n",name);
printf("Father: %s\n",father);
printf("Mother: %s\n",mother);
printf("Class: %d\n",cls);
printf("Batch: %s\n",batch);

found=1;

}

}

if(found==0){
printf("Record not found\n");
}

fclose(fp);

}

else if(choice == 4){

int r, found=0;

printf("Enter roll number to delete: ");
scanf("%d",&r);

fp = fopen("students.txt","r");
temp = fopen("temp.txt","w");

while(fscanf(fp,"%d %s %s %s %d %s",
&roll,name,father,mother,&cls,batch)!=EOF){

if(roll != r){

fprintf(temp,"%d %s %s %s %d %s\n",
roll,name,father,mother,cls,batch);

}

else{
found = 1;
}

}

fclose(fp);
fclose(temp);

remove("students.txt");
rename("temp.txt","students.txt");

if(found==1){
printf("Student deleted successfully\n");
}
else{
printf("Record not found\n");
}

}

else if(choice == 5){
printf("Program Exit\n");
break;
}

else{
printf("Invalid choice\n");
}

}

}

else{
printf("Invalid password\n");
}

return 0;
}
