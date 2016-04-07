#include <cstdlib>
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v1 = [0, 0, 30, 20, 0, 0, 0, 0, 10, 0];
    vector<int> v2;
    
    const int N = 0;
    for (int i : v1) {
        if (not_equal_to<int>()(i, N)){
            v2.push_back(i);
        }
    }
    for (int i : v2) cout << i << endl;
    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
