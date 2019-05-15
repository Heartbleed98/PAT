#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    if(M > N)
        M -= N;
    vector<int> arr(N);
    for(int i=0; i<N; i++){
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+M);//从数组开头查M个元素转换顺序
    reverse(arr.begin()+M,arr.end());//从数组第M+1个元素到数组末尾转换顺序，arr.end()可以写成arr.begin()+N
    for(int j=0; j<N; j++){
        if(j != 0)
            cout << " ";
        cout << arr[j];
    }
    return 0;
}