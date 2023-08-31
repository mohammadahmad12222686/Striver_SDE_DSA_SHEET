import java.util.*;
class Solution {
    public void setZeroes(int[][] matrix) {

        Scanner s=new Scanner(System.in);

        int row=matrix.length;
        int col=matrix[0].length;
        int arrow[]=new int[row];
        Arrays.fill(arrow, 0);
        int arcol[]=new int[col];
        Arrays.fill(arcol, 0);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
        {
        
            if(matrix[i][j]==0){
                arrow[i]++;
                arcol[j]++;
            }

        }


        }

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
        {
        
            if(arrow[i]!=0){
                matrix[i][j]=0;
            }
             if(arcol[j]!=0){
                matrix[i][j]=0;
            }

        }

        }

for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
        {
        
            System.out.print(matrix[i][j]);

        }

        }

        
    }
}