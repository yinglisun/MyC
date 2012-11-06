
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> vecInteger;
    for (int i=0; i<10; i++) {
        vecInteger.push_back(i);
    }
    
    int nNum = 0;
    for_each(vecInteger.cbegin(), vecInteger.cend(), [&nNum](int n) { ++nNum; cout << n << ' '; });
    cout << ": Total " << nNum << " integers" << endl;

    return 0;
}

