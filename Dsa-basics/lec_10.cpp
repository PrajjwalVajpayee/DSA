//    :swap the alternate position of the array:
// #include<iostream>
// using namespace std;
// //     :to print the array :
// void printArray(int arr[],int n){
//     for (int i=0;i<n;i++){
//         cout<< arr[i]<<" ";
//     }
// }//   :swap function: 

// void swapAlternate(int arr[],int size){
//     for(int i=0; i<size;i=i+2){
//         if(i+1<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
// // :main function:
// int main(){
//     int even[8]={3,4,5,6,8,9,6,2};
//     int odd[5]={5,7,9,2,3};
//     swapAlternate(odd,5);
//     printArray(odd,5);

//     return 0;

// }
//         :FIND THE UNIQUE NO IN ARRAY:
// #include<iostream>
// using namespace std;
// int Unique(int arr[],int size){
//     int ans=0;
//     for(int i=0; i<size; i++){
//         ans=ans^arr[i];
//     }
//     return ans;   
// }
// int main(){
//     int uni[9]={1,2,2,3,3,4,4,5,5};
//     Unique(uni,9);

//     return 0;
// }
//     : FIND DUPLICATES :
 #include<iostream>
  using namespace std;
  int Duplicate(int arr[],int size){
     int ans=0;
     for(int i=0;i<size;i++){
          ans=ans^arr[i];
     }
     for (int i=1; i<size; i++){
         ans=ans^i;
     }
        return ans; 
  }
   int main(){
    int x[5]={1,2,3,2,3};
    cout<<Duplicate(x,5);
   }


