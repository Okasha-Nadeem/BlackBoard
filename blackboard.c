#include<stdio.h>
#include<math.h>
    
int main(){
        int answer;
        int maths = 0;
        int physics = 0;
        int english = 0;
        int urdu = 0;
        int repeat = 1;
    printf("Welcome to Blackboard \n");
while(repeat){
    printf("Are you a Teacher or Student :\n");
    printf("Press 1 for Teacher and press 2 for student :\n");
    scanf("%d",&answer);
    if (answer==1)
    {
        /* code */printf("welcome Teacher\n");
        printf("what are the marks of student in maths: ");
        scanf("%d",&maths);
        
        printf("What are the marks of student in physics :");
        scanf("%d",&physics);
        
        printf("What are the marks of student in English :");
        scanf("%d",&english);

        printf("What are the marks of student in Urdu :");
        scanf("%d",&urdu);

    }
    else if (answer==2)
    {
        printf("Welcome Student\n");
        printf("Your physics narks are : %d \n",physics);
        printf("Your maths marks are : %d \n",maths);
        printf("Your english marks are : %d \n",english);
        printf("Your urdu marks are : %d \n",urdu);
        break;

    }
    else{
        continue;
    }
}  
    
     return 0;
}