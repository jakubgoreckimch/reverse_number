#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int reverse = 0;
    reverse = function(num);
    printf("%d", reverse);
  
    return 0;
}

int function(int number){
  int digits = counter(number);
  int total = 0;
  int i = digits;
  int dig = 0;
    
  while (i != 0){
    dig = number % 10;
    number = number/10;
    if(i == 1){
      total = total + dig;
    } else {
      total = total + dig * pow(10,i-1);
    }
    // printf("%d\n",i);        show single digit
    i--;
   
  }
  return total;
}

int counter(int number){
    int help = number;
    int i = 0;

    if(number == 0){
    i = 1;
    }
    else {
      while(help != 0){
        help = help/10;
        i++;
      }
    }
  return i;
}



/*                        Secound version
int main()
{
    int num;
    scanf("%d", &num);

    //Write your code here
    int ans = 0;

    while(num > 0)
    {
        int mod = num % 10;
        ans = ans * 10 + mod;
        num = num / 10;
    }

    printf("%d", ans);
    return 0;
}
*/
