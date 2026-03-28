#include<iostream>
#include<algorithm>
using namespace std;
class solution{
    public:

    

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1; //arr[mid] < key   right jao → start = mid + 1

        }
        else{
            end=mid-1;  //arr[mid] > key   left jao → end = mid - 1

        }
    }
return -1;
}
};
int main(){
    solution s1;
    
    int arr[33]={3,1,6,8,0,6,5,8,0,23,67,98,21,7,8,0,12,56,9,65,24,67,0,1,3,5,67,8,90,11,000,235,7};
     sort(arr, arr+33);   // ✅ IMPORTANT firstly sort array bcz binary search works only on sorted array

     
     int key;
     
     cout<<"Enter target value: ";
     cin>>key;
   
 int index=  s1.binarySearch(arr,33,key);
   if(index!=-1){
    cout<<"Element Found in this array and the  index of target value is : "<<index;
   }
    else{
        cout<<"Element not Found  ";
    }
    
   

    return 0;

}

/*
Hum usually likhte hain:

mid = (start + end) / 2;
 Lekin agar start aur end bohat bade numbers hon (large array), to:

❌ start + end overflow ho sakta hai
(matlab int limit cross ho jaye)

✅ Safe Formula (best practice)
mid = start + (end - start) / 2;
Ye Safe Kyun Hai?
 Yahan hum:

pehle (end - start) karte hain (jo chhota number hota hai)
phir uska half le kar start mein add kar dete hain

✔ Is se overflow ka risk khatam ho jata hai

*/