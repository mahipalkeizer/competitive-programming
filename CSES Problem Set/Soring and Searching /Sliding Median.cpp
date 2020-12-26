#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>   
using namespace std; 
using namespace __gnu_pbds; 
typedef tree<int, null_type, 
             less_equal<int>, rb_tree_tag, 
             tree_order_statistics_node_update> 
    Ordered_set; 
    

void findMedian(int arr[], int n,int k) { 
    Ordered_set s; 
    for (int i = 0; i < n; i++) { 
        if(i-k>=0){
            s.erase(s.find_by_order(s.order_of_key(arr[i-k]))); 
        }
        s.insert(arr[i]);
        if(i>=k-1){
            int ans = *s.find_by_order((k-1)/ 2); 
            cout << ans << " "; 
        }
    } 
    cout << endl; 
} 
  
int main() 
{ 
    int n,k;cin>>n>>k;
    int arr[n];
    for(int &x:arr)cin>>x;
    findMedian(arr, n, k); 
    return 0; 
}