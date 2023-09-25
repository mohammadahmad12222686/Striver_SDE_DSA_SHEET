public class Solution {
    public static void selectionSort(int[] arr) {
       int n=arr.length;
       
       for(int i=0; i<n-1;i++){
           int min=arr[i];
           int minindex=i;
           for(int j=i+1;j<n;j++){
               if(arr[j]<min){
                   min=arr[j];
                   minindex=j;
               }
           }
           int temp=arr[i];
           arr[i]=min;
           arr[minindex]=temp;
       } 

        
    }
}


// 0.1 Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

// 0.2 Selection sort is a simple and efficient sorting algorithm that works by repeatedly 
// selecting the smallest (or largest) element from the unsorted portion of the list 
// and moving it to the sorted portion of the list. 