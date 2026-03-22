#include <iostream>
#include <Climits>
using namespace std;
int main()
{
    int marks[] = {17, 24, 36, 4, 15};
    int size = 5;

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        largest = max(largest, marks[i]);
        smallest = min(smallest, marks[i]);
    }
    cout << "largest : " << largest << endl;
    cout << "smallest : " << smallest << endl;

    // index of largest and smallest

    int idx_smallest;
    int idx_largest;
    for (int i = 0; i < size; i++)
    {
        if (marks[i] == smallest)
        {
            idx_smallest = i;
        }
        if (marks[i] == largest)
        {
            idx_largest = i;
        }
    }

    cout << "idx_largest : " << idx_largest << endl;
    cout << "idx_smallest : " << idx_smallest << endl;
}
