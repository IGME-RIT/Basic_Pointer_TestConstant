/*
TestConstants
(c) 2016
original authors: David I. Schwartz
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*	This tutorial addresses ways of initialization of pointer with constant value,
*	initialization of constant pointer,and initialization of constant pointer with constant value.
*	It also relates to the concept of null pointer
*/

#include <iostream>
using namespace std;

int main() {

    // an introduction to const correctness
    // see https://isocpp.org/wiki/faq/const-correctness

    double value = 1.0;
    double tmp = 2.0;

    /*
    // constant value only:
    double const* ptr = &value;          // What does "const X* p" mean?  https://isocpp.org/wiki/faq/const-correctness#ptr-to-const
    printf("%s%3.1f\n","*ptr: ",*ptr);	// output: *ptr: 1.0
    //*ptr = 2.0;  // allowed? 
    //ptr = &tmp;  // allowed? 
    printf("%s%3.1f\n","*ptr: ",*ptr);	// output: *ptr: 1.0
    */

    /*
    // constant pointer only:
    double* const ptr = &value;          // What's the difference between "const X* p","X* const p", "const X* const p"?
										 // https://isocpp.org/wiki/faq/const-correctness#const-ptr-vs-ptr-const
    double* ptr2 = &tmp;
    printf("%s%3.1f\n","*ptr: ",*ptr);	// output: *ptr: 1.0
    // which of these are allowed?
    // *ptr = 2.0;
	// ptr = nullptr;
    // ptr = ptr2;
    printf("%s%3.1f\n","*ptr: ",*ptr);	// output: *ptr: 1.0
	*/

    /*
    // constant value AND constant pointer
    double const* const ptr = &value;     // What's the difference between "const X* p","X* const p", "const X* const p"?
										  // https://isocpp.org/wiki/faq/const-correctness#const-ptr-vs-ptr-const
    printf("%s%3.1f\n","*ptr: ",*ptr);	  // output: *ptr: 1.0
    // *ptr = 2.0; // allowed?
    // ptr = &tmp; // allowed?
    printf("%s%3.1f\n","*ptr: ",*ptr);	  // output: *ptr: 1.0
    */
}

