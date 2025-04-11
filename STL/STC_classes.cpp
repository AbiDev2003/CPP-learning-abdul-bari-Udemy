#include <iostream>

using namespace std;

int main() {
    // STL has 3 types of classes: Sequence Containers, Associative Containers, Derived Containers
    // Sequence Containers: vector, list, deque, array, forward_list
    // Associative Containers: set, multiset, map, multimap
    // Derived Containers: stack, queue, priority_queue

    // Again 4 types of classes: Algorithms, Containers, Functions, Iterators
    // algorithms are : sort, binary_search, reverse, rotate, copy, remove, unique, merge, min, max, accumulate, inner_product, partial_sum, adjacent_difference, iota, etc
    // containers are: vector, list, deque, array, forward_list, set, multiset, map, multimap, stack, queue, priority_queue
    // functions are: plus, minus, multiplies, divides, modulus, negate, equal_to, not_equal_to, greater, less, greater_equal, less_equal, logical_and, logical_or, logical_not, bit_and, bit_or, bit_xor, bit_not, etc
    // iterators are: input iterator, output iterator, forward iterator, bidirectional iterator, random access iterator

    //some functions in vector are: push_back, pop_back, insert, erase, clear, empty, size, swap, emplace, emplace_back, at, front, back, assign, operator=, operator[], operator==, operator!=, operator<, operator<=, operator>, operator>=, operator<<, operator>>, etc
    //some functions in list are: push_back, push_front, pop_back, pop_front, insert, erase, clear, empty, size, swap, emplace, emplace_back, emplace_front, remove, remove_if, reverse, sort, merge, splice, unique, splice_after, unique_after, operator=, operator==, operator!=, operator<, operator<=, operator>, operator>=, operator<<, operator>>, etc

    //forward-list is singley linked list
    // deque is an array, but accessible from both ends

    // priority queue is a queue, but the element with the highest priority is served first, it has fucntons like : push, pop, top, empty, size, swap, emplace, operator=, operator==, operator!=, operator<, operator<=, operator>, operator>=, operator<<, operator>>, etc
    // stack is a container that follows LIFO, it has functions like: push, pop, top, empty, size, swap, emplace, operator=, operator==, operator!=, operator<, operator<=, operator>, operator>=, operator<<, operator>>, etc
    //set is a container that stores unique elements, it has functions like: insert, erase, clear, empty, size, swap, emplace, emplace_hint, count, find, equal_range, lower_bound, upper_bound, operator=, operator==, operator!=, operator<, operator<=, operator>, operator>=, operator<<, operator>>, etc
    // map is a container that stores unique key-value pairs, it has functions like: insert, erase, clear, empty, size, swap, emplace, emplace_hint, count, find, equal_range, lower_bound, upper_bound, operator=, operator==, operator!=, operator<, operator<=, operator>, operator>=, operator<<, operator>>, etc.       it uses hash table to store the elements

    return 0;
}