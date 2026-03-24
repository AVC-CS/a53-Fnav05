#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, begin, end, sum = 0;

    // TODO: prompt user for begin and end valueswhile (1) {
    while (1) {
    cout << "Enter being and end: ";
    cin >> begin >> end;
    if (begin <= end) {
      break;
    }
}
    // TODO: loop from begin to end and accumulate sum of even values
    if (begin % 2 == 1) {
      begin++;
    }
    i = begin;
    
    while (i <= end) {
      sum += i;
      i += 2;
    }
    cout << "The sum of even values is " << sum << endl;
}
