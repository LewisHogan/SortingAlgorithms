#include <iostream>
#include <vector>

std::ostream& operator <<(std::ostream& os, const std::vector<int>& numbers)
{
    for (int number : numbers) os << number << " ";

    return os;
}

/**
 * @brief Uses bubble_sort to sort the incoming numbers.
 *
 * @param numbers A list of integers that need to be sorted in place.
 * @return std::vector<int> A sorted list of numbers.
 */
std::vector<int>& sort(std::vector<int>& numbers)
{
    auto n = numbers.size();
    bool is_sorted = false;
    while (!is_sorted)
    {
        is_sorted = true;
        for (auto j = 0; j < n-1; ++j)
        {
            if (numbers[j] > numbers[j+1])
            {
                std::swap(numbers[j], numbers[j+1]);
                is_sorted = false;
            } 
        }
        --n;
    }

    return numbers;
}

int main()
{
    using namespace std;

    vector<int> numbers = { 32, 45, 123, 132, 542, 123, 654, 568, 543, 31 };
    cout << "Bubble Sort." << std::endl;
    cout << "Unsorted List : " << numbers << endl;
    
    sort(numbers);
    cout << "Sorted List   : " << numbers << endl;
}