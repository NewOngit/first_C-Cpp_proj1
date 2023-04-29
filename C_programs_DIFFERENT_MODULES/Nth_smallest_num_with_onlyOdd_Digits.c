 #include<stdio.h>
 int main()
 {
        int find_nth_num=700;
        int num;
        int smallest_odd_num=1;
        int index=1;
       while(index!=find_nth_num)
        {
            smallest_odd_num=smallest_odd_num+2;
            num=smallest_odd_num;
       while(num>0)
        {
           int n=num%10;
           if(n%2==0)
           {
             break;
           }
           if(num<10)
          {
           index++;
          }
           num=num/10;
        }
        }
 printf("%d", smallest_odd_num);
 return 0;
 }
