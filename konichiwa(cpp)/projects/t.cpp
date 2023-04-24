#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int sum{0};
    for (int i = 1; i <= 15; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
            cout << sum << endl;
        }
    }
    int scores[]{100, 90, 97};
    for (auto scores : scores)
        cout << scores << endl;

    vector<double> temp{1.2, 2.3, 4.5, 10.3};
    double avg_temp{};
    double run_sum{};
    for (auto temp : temp)
        run_sum += temp;
    avg_temp = run_sum / temp.size();
    cout << avg_temp<<endl;

for(auto val:{1,2,3,4})
cout<<val<<endl;
    

while (1==0)
{
    cout<<"it works"<<endl;
}

    return 0;
}
