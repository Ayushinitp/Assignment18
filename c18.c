//6 sorting

// #include <stdio.h>
// int main(){
//     int i,j,t;
//     int arr[10];
//     printf("Enter 10 numbers : ");
//     for(i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
// for(i=0;i<10;i++){
//     for(j=i+1;j<10;j++){
//         if(arr[i]>arr[j]){
//        t=arr[j];
//        arr[j]=arr[i];
//        arr[i]=t;
//       }
//     }
//     }
//     for(i=0;i<10;i++){
//        printf("%d\t",arr[i]);
//     }
//     return 0;
//     }
   



//7
// #include <stdio.h>
//  int main(){
//     int i;
//     int a[10];
//     printf("Enter elements in array : ");
//      for(i=0;i<10;i++)
//      scanf("%d",&a[i]);
//    int max=a[0];
//    for(i=0;i<10;i++){
//     if(a[i]>max)
//     max=a[i];
//    }
//    int sec_max=a[0];
//    for(i=0;i<10;i++){
//     if(a[i]!=max){
//         if(a[i]>sec_max)
//             sec_max=a[i];
//     }
//    }
//    printf("Second maximum is %d",sec_max);
//    return 0;
//  }




//8
// #include <stdio.h>
//  int main(){
//     int i;
//     int a[10];
//     printf("Enter elements in array : ");
//      for(i=0;i<10;i++)
//      scanf("%d",&a[i]);
//    int min=a[0];
//    for(i=0;i<10;i++){
//     if(a[i]<min)
//     min=a[i];
//    }
//    int sec_min=a[0];
//    for(i=0;i<10;i++){
//     if(a[i]!=min){
//         if(a[i]<sec_min)
//             sec_min=a[i];
//     }
//    }
//    printf("Second minimum is %d",sec_min);
//    return 0;
 //}






//9 descending sorting

// #include <stdio.h>
// int main(){
//     int i,j,t;
//     int arr[10];
//     printf("Enter 10 numbers : ");
//     for(i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
// for(i=0;i<10;i++){
//     for(j=i+1;j<10;j++){
//         if(arr[i]<arr[j]){
//        t=arr[j];
//        arr[j]=arr[i];
//        arr[i]=t;
//       }
//     }
//     }
//     for(i=0;i<10;i++){
//        printf("%d\t",arr[i]);
//     }
//     return 0;
//     }
   




//10
// #include <stdio.h>
//  int main(){
//      int i,n;
//      printf("Enter size of array: ");
//      scanf("%d",&n);
//      int a[n],b[n];
//      printf("Enter elements : ");
//      for(i=0;i<n;i++){
//         scanf("%d",&a[i]); 
//      }
//      for(i=0;i<n;i++){
//         b[i]=a[i];
//      }
//      printf("Elements in 2nd array is : \n");
//      for(i=0;i<n;i++){
//         printf("%d\t",b[i]);
//      }
//      return 0;
//  }