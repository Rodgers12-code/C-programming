    // Rodgers Kiilu Muia
    // CT100/G/30723/26
    
    #include <stdio.h>
    
    int main(){
        
        int age;
        double income;
        
        printf("Enter Age: ");
        scanf("%d", &age);
        
        printf("Enter income: ");
        scanf("%lf", &income);
        
        if (age >= 21 && income >= 21000)
        {
            printf("CONGRATULATIONS YOU QUALIFY FOR A LOAN");
         }
         else
         {
            printf("UNFORTUNATELY, WE ARE UNABLE TO OFFER YOU A LOAN AT THIS TIME");
         }
     return 0;
          }
