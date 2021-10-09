#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char email[100];
scanf("%s",email);

char p[50];
char q[50];
int i=0;
int flag=1;
while(email[i++] !='@'){
   p[i]=email[i];
}
i++;
while(email[i++] !='\0'){
   q[i]=email[i];
}

if(sizeof(q) == 0){
   flag=0;
}else{
   int i=0;
   while(q[i] != '\0'){
   if(p[i] == '@'){
   flag=0;
   }
  i++;
}  
}
 
for(int j=0;j<sizeof(p);j++){
   if(p[j] == '.'){
   flag=0;
   break;
  }
} 



if(flag==1){
   printf("The email is valid");
}else{
   printf("email is not valid ");
}
   return 0;
}