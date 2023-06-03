#include "iostream"
#include "none_of.h"
#include "is_sorted.h"
#include "find_backwords.h"
#include "CPoint.h"
#include "vector"

int main() {
    std::vector<int> numbers = { 1, 2, 3, 5, 7 };

    auto PersentTwo = [](int num) { return num % 2 == 0; };

    /*none_of*/
    bool AfterPersentTwo = Functions::none_of(numbers.begin(), numbers.end(), PersentTwo);

    std::cout << "Numbers NONE_OF: " << std::boolalpha << AfterPersentTwo << '\n';

    std::vector<int> isSortedNumbers = { 1, 2, 3, 4, 5 };
    /*is_sorted*/ 
    bool isSorted = Functions::is_sorted(isSortedNumbers.begin(), isSortedNumbers.end(), [](int a, int b) { return a < b; });
    std::cout << "Sorted IS_SORTED : " << std::boolalpha << isSorted << '\n';
  //  std::vector<int> numbers3 = { 10,4,1,6,4,3, 3, 9, 3, 239 };
    
    /*find_backward*/
    std::vector<int> backWordNumbers = { 10,4,1,6,4,3, 3, 9, 3, 239 };
    char target = '3';  
       auto it1 = Functions::find_backwords(backWordNumbers.begin(), backWordNumbers.end(), 4);
}