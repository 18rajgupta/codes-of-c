#include <stdio.h>
int main()
{
  // variables
  int row;
  int column,i,j;
  
  // take row and column size
  printf("Ener row size: ");
  scanf("%d", &row);
  printf("Ener column size: ");
  scanf("%d", &column);

  // declare array
  int arr[row][column];

  // take array elements as input
  for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
  
  // display 2D array using for loop
  printf("The Array elements are:\n");
  for(i=0; i<row; i++) {
    for(j=0; j<column; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
