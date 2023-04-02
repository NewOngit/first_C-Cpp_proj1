#include<iostream>
#define max 100000
int main()
  {
  int row=3;
  int col=5;
  int p[][5]={{1,2,3,5,6},{2,3,4,5,5},{1,0,0,0,1}};
  int temp[row][col];
  for(int i=0;i<row;i++)
    {
    for(int j=0;j<col;j++)
      {
      if(p[i][j]!=-1)
        {
      temp[i][j]=p[i][j];
      
 
        }
     else break;
      check(p,i,j,row);
      
     




}
    return 0;
    }
  
  void check(int s[max][max],int row_copy,int col_copy,int max_row)
    {
    if(row_copy==max_row)
      return ;
    int check1=0;
    for(int i=row_copy+1;i<max_row;i++)
      for(int j=0;j<col_copy;j++)
        if(s[i][j]!=-1)
          {
          if(p[row_copy][j]==p[i][j])
            check1++;
          }
    else break;
    if(check1==col_copy)
      {
      int temp_col=col_copy;
      while(temp_col--)
        p[i][j]=-1;
      
      }
    check1=0;
    }
    
 

     
  
        
