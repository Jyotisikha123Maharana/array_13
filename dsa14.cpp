#include <iostream>
#include <vector>
using namespace std;

/*int findUnique (vector <int> arr){
    int ans =0 ;
    for (int i=0; i<arr.size(); i++){
        ans = ans^arr[i] ;
    }
    return ans ;
}*/

int main (){
    //create array 
    /*vector<int> arr;
    int ans = (sizeof(arr)/sizeof(int));
    cout << ans << endl;
    cout << arr.size()<<endl;
    cout << arr.capacity()<<endl;
    //insert elements
    arr.push_back(5);
    arr.push_back(6);
    for(int i=0; i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    //remove elements 
    arr.pop_back();
    for(int i=0; i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout<<endl;

    vector<int> brr(10, -101);
    cout<<"Size of b "<< brr.size()<<endl;
    cout<<"Capacity of b" <<brr.capacity()<<endl;

        for(int i=0; i<brr.size();i++){
        cout << brr[i] << " ";
    }
    cout<<endl;*/

// unique element in array 
    /*int n;
    cout<<"Enter the size of array "<< endl;
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the number of elements"<< endl;
    // taking input 
    for (int i=0; i<n; i++){
        cin>> arr[i];
    }
    int uniqueElement = findUnique(arr);
    cout << "unique element "<< uniqueElement<<endl;*/
    

    //union 
    int arr[] = { 1, 3, 5 , 7 ,9 };
    int sizea= 5; 
    int brr []= {2,4,6,8 };
    int sizeb = 4; 
    vector<int > ans; 
    for (int i= 0 ; i<sizea; i++){
        ans.push_back(arr[i]);

    }
    for (int i= 0 ; i<sizea; i++){
        ans.push_back(brr[i]);
        
    }
    //print ans 
    cout<<"Printing array "<< endl;
    for (int i =0 ; i<ans.size(); i++){
        cout << ans[i] <<" ";
    }
    return 0;
}