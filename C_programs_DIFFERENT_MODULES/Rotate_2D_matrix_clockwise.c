#include <stdio.h>
int main()
{
    int index=0;
    int sub_index=0;
    int rotation_qty=18;
    int row1=0;
    int col1=0;
    int row =4;
    int col=3;

    int s[][3]= {{2,3,4},{3,5,4},{8,3,4},{7,8,6}};
    if(rotation_qty>sizeof(s)/sizeof (int))
        rotation_qty=rotation_qty%col;
    if(rotation_qty!=0)
    {
        if(rotation_qty%col)
        {
            col1=col-rotation_qty%col;
            row1=row-1-rotation_qty/col;
        }
        else
        {
            col1=0;
            row1=row-rotation_qty/col;
        }
    }

    int temp[row][col];
    for(index=0; index<row; index++)
        for(sub_index=0; sub_index<col; sub_index++)
        {
            temp[index][sub_index]=s[row1][col1];
            col1++;
            if(col1==col)
            {
                row1++;
                col1=0;
                if(row1==row)
                    row1=0;
            }
        }

  for(index=0; index<row; index++)
{
        for(sub_index=0; sub_index<col; sub_index++)
        printf("%d ",temp[index][sub_index]);
        printf("\n");
        }
}
