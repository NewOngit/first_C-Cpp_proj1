//Here the given 2D array is a region in which a soucre place has been prived from where you have to find the destination place ;
//Here the cell having value "1" represent the source place and the cell having value "2" represent destination;
//The value "0" represent a wall from where you can't walk through;
//And the other values represent a blank path from you can walk through;
//Remark: You can walk only in the direction(in terms of indices) of ([i][j+1],[i][j-1],[i+1][j] and [i-1][j]); [left ,right,down,up]

#include <stdio.h>

#include<stdlib.h>

int path_exist_helper=0;

int is_any_path(int **,int ,int ,int,int,int,int);

int main()

{

int index;

int sub_index;

int row =5;

int col=5;

int p[row][col]={{3,0,3,0,0},{3,0,3,0,3}

,{2,3,0,3,0},{3,0,3,3,0},{3,1,0,0,3}};

 int **f=(int **)malloc(5*sizeof (int*));

for(index=0;index<row;index++)

f[index]=(int*)malloc(5*sizeof (int));

for(index=0;index<row;index++)

for(sub_index=0;sub_index<col;sub_index++)

f[index][sub_index]=p[index][sub_index];

printf("%d",is_any_path(f,0,0,5,5,0,0));

return 0;

}

int is_any_path(int **p,int index,int sub_index,int row_cpy,int col_cpy,int dest,int src)

{

if(path_exist_helper)

return 1;

if(dest==2&&src==1)

{

path_exist_helper=1;

return 1;

}

if(index>=row_cpy||sub_index>=col_cpy||p[index][sub_index]==0)

{

dest=0;

src=0;

return 0;

}

if(p[index][sub_index]==2)

dest=2;

if(p[index][sub_index]==1)

src=1;

is_any_path(p,index+1,sub_index,row_cpy,col_cpy,dest,src);

is_any_path(p,index,sub_index+1,row_cpy,col_cpy,dest,src);

}
