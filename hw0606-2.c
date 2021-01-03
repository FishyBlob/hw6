#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int main()
 {
    int32_t * a[9] = {0};
    
    

   
    for( size_t i = 0 ; i < 9 ; i++ )
    {
      int32_t array[9];
      a[i] =array;

      for( size_t j = 0 ; j < 9 ; j++ )
      {
        a[i][j] = ( i + 1 ) * ( j + 1 );
      }
    }

    for( size_t i = 0 ; i < 9 ; i++ )
    {
      for( size_t j = 0 ; j < 9 ; j++ )

      {
        printf( "%02d ", a[i][j] );
      }

      printf( "\n" );
    }

    printf("Sequential memory starting from &a[0][0] store values->\n");
    int32_t *ptr;
    ptr=&a[0][0];
    for( size_t i = 0 ; i < 81 ; i++ )
    {
      
        printf( "%02d ", *(ptr+i));
        if((i+1)%9==0)
        {
          printf("\n");
        }
      
    }

    return 0;
 }