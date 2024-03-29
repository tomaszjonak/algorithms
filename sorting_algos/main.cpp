#include <iostream>
#include <array>
#include <list>
#include <string>
#include "bubble_sort.hpp"
#include "insert_sort.hpp"
#include "selection_sort.hpp"
#include "heap_sort.hpp"

template <typename iterable_t>
void printIterable(std::ostream & os, iterable_t iterable) {
    for (const auto& token : iterable) {
        os << token << " ";
    }
    os << std::endl;
}

template <typename container_t>
void applySorting(void (*sorting_func)(container_t &), container_t & container) {
    printIterable(std::cout, container);
    sorting_func(container);
    printIterable(std::cout, container);
}

void testBubble() {
    std::array<int, 8> basicTestArray{{6, 5, 3, 1, 8, 2, 7, 4}};
    std::list<int> basicTestList{basicTestArray.begin(), basicTestArray.end()};
    std::vector<int> basicTestVector{basicTestArray.begin(), basicTestArray.end()};
 
    std::cout << "BUBBLE SORT" << std::endl;
    std::cout << "Array test\n";
    applySorting(sorting::bubbleSort, basicTestArray);
    std::cout << "List test\n";
    applySorting(sorting::bubbleSort, basicTestList);
    std::cout << "Vector test\n";
    applySorting(sorting::bubbleSort, basicTestVector);
}

void testInsertion() {
    std::array<int, 8> basicTestArray{{6, 5, 3, 1, 8, 2, 7, 4}};
    std::list<int> basicTestList{basicTestArray.begin(), basicTestArray.end()};
    std::vector<int> basicTestVector{basicTestArray.begin(), basicTestArray.end()};
 
    std::cout << "INSERTION SORT" << std::endl;
    std::cout << "Array test\n";
    applySorting(sorting::insertionSort, basicTestArray);
    std::cout << "List test\n";
    applySorting(sorting::insertionSort, basicTestList);
    std::cout << "Vector test\n";
    applySorting(sorting::insertionSort, basicTestVector);
}

void testSelection() {
    std::array<int, 8> basicTestArray{{6, 5, 3, 1, 8, 2, 7, 4}};
    std::list<int> basicTestList{basicTestArray.begin(), basicTestArray.end()};
    std::vector<int> basicTestVector{basicTestArray.begin(), basicTestArray.end()};
 
    std::cout << "SELECTION SORT" << std::endl;
    std::cout << "Array test\n";
    applySorting(sorting::selectionSort, basicTestArray);
    std::cout << "List test\n";
    applySorting(sorting::selectionSort, basicTestList);
    std::cout << "Vector test\n";
    applySorting(sorting::selectionSort, basicTestVector);
}

void testHeap() {
    std::array<int, 8> basicTestArray{{6, 5, 3, 1, 8, 2, 7, 4}};
    std::list<int> basicTestList{basicTestArray.begin(), basicTestArray.end()};
    std::vector<int> basicTestVector{basicTestArray.begin(), basicTestArray.end()};
 
    std::cout << "HEAP SORT" << std::endl;
    std::cout << "Array test\n";
    applySorting(sorting::heapSort, basicTestArray);
    std::cout << "List test\n";
    applySorting(sorting::heapSort, basicTestList);
    std::cout << "Vector test\n";
    applySorting(sorting::heapSort, basicTestVector);
}

int main() {
    testBubble();
    testInsertion();
    testSelection();
    testHeap();

    return  0;
}

