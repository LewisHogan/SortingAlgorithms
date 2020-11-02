#include <iostream>
#include <vector>

std::ostream& operator <<(std::ostream& os, const std::vector<int>& numbers)
{
    for (int number : numbers) os << number << " ";

    return os;
}

/**
 * @brief Uses insertion_sort to sort the incoming numbers.
 *
 * @param numbers A list of integers that need to be sorted in place.
 * @return std::vector<int> A sorted list of numbers.
 */
std::vector<int>& sort(std::vector<int>& numbers)
{
    for (auto i = 1; i < numbers.size(); ++i)
    {
        int item = numbers[i];
        auto j = i - 1;

        // Loop through all the numbers before the current item and ensure that none of the ones infront are bigger.
        // If there are any bigger ones, we move them back in the list by one point (this overwrites our original item, but we deal with that later).
        while (j >= 0 && numbers[j] > item)
        {
            numbers[j + 1] = numbers[j];
            --j;
        }

        // Now we can place our item back in the list, overwriting the duplicate copy of an element that was made during the shift backwards.
        numbers[j + 1] = item;
    }

    return numbers;
}

int main()
{
    using namespace std;

    vector<int> numbers = { 32, 45, 123, 132, 542, 123, 654, 568, 543, 31 };
    cout << "Insertion Sort." << std::endl;
    cout << "Unsorted List : " << numbers << endl;
    
    sort(numbers);
    cout << "Sorted List   : " << numbers << endl;
}