
#include <iostream>
#include <vector>

using namespace std;

void DisplayVector(const vector<int>& vec) {
    int nNum = 0;
    for_each(vec.cbegin(), vec.cend(), [&nNum](int n) { ++nNum; cout << n << ' '; });
    cout << ": Total " << nNum << " integers" << endl;
}

int main(int argc, const char * argv[])
{
    vector<int> vecInteger;
    for (int i=0; i<10; i++) {
        vecInteger.push_back(i);
    }
    
    DisplayVector(vecInteger);
    
    random_shuffle(vecInteger.begin(), vecInteger.end());
    
    DisplayVector(vecInteger);
    
    return 0;
}


