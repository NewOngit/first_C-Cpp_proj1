#include <stdio.h>

int main()

{

    int s[][3]={{348, 391},

          {618, 193}};

int sub_index=0;

int header_index;

int index;

int row =2;                            //integer row val

int col=2;                             //integer colimn val

int temp_min;

int min_sum=0;

for(header_index=0;header_index<row;header_index++)

{

   temp_min=s[header_index][0];

   for(sub_index=0;sub_index<col;sub_index++)

    if(temp_min<s[header_index][sub_index])

        temp_min=s[header_index][sub_index];

     min_sum=min_sum+temp_min;

}

   printf ("%d",min_sum);

}
