#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int main()
{
    struct point {
        int value;
        bool coverByOthers;
        vector<int> coverList;
    };

    int number;
    cin>>number;

    vector<point> inputPoint;
    vector<int> intSet;
    point ptmp;//临时保存每一项的信息
    int temp;

    //记录每一个输入的值以及覆盖信息
    for(int i = 0; i < number; i++)
    {
        cin>>temp;
        ptmp.value = temp;
        ptmp.coverByOthers = false;
        while(temp != 1)
        {
            if(temp % 2 == 0)
            {
                temp /= 2;
                if(temp != 1)
                    ptmp.coverList.push_back(temp);
            }
            else
            {
                temp = (3 * temp + 1) / 2;
                if(temp != 1)
                    ptmp.coverList.push_back(temp);
            }
        }
        inputPoint.push_back(ptmp);
    }

    //将每一个输入的覆盖列表与其他输入进行比对
    for(int i = 0; i < number; i++)
    {
        ptmp = inputPoint[i];
        vector<int> CL_tmp = ptmp.coverList;
        for(int j = 0; j < CL_tmp.size(); j++)
        {
            int cover = CL_tmp[j];
            for(int k = 0; k < inputPoint.size(); k++)
            {
                if(inputPoint[k].value == cover)
                    inputPoint[k].coverByOthers = true;
            }
        }
    }

    for(int i = 0;i<number;i++)
	{
		if(inputPoint[i].coverByOthers ==false)
			intSet.push_back(inputPoint[i].value);
	}

    sort(intSet.begin(), intSet.end(), greater<int>());
    vector<int>::iterator itr = intSet.begin();
    cout<<intSet[0];
    for(int i = 1; i < intSet.size(); i++) 
        cout << " " << intSet[i];

    return 0;
}