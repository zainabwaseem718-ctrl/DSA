#include<iostream>
#include<stack>
using namespace std;
class reverarr{

    public:
    void reverseArray(int arr[],int size){
        stack<int> s;
        for(int i=0;i<size;i++){
            s.push(arr[i]);
        }

        for(int i=0;i<size;i++){
            arr[i]=s.top();
            s.pop();
        }
    }
     void printArray(int arr[], int n) {
        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    int n;
   
    cout<<"Enter size of Array : ";
    cin>>n;
     int arr[n];
    cout<<"Enter "<<n<<" Elements for Array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverarr r;
    cout<<"Orignal Array"<<endl;
    r.printArray(arr,n);
    r.reverseArray(arr,n);
    cout<<"Reversed Array"<<endl;
    r.printArray(arr,n);


}
   