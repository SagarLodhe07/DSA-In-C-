#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{              
            //     012345
    string name = "raghav";
    // output = rahgav
    
    /**
     * reverse()
     */

    reverse(name.begin()+1, name.begin()+5);
    cout << name << endl;
}