/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2021
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.1
 * @date    9/10/2021
 *
 * @copyright Copyright (c) 2021 James R. Daehn
 */

#ifndef CSC232_COMMON_H_
#define CSC232_COMMON_H_

#define FALSE 0
#define TRUE 1
#define EXECUTE_BLOCK FALSE

#define FINISHED_PART_1 TRUE
#define FINISHED_PART_2 TRUE
#define FINISHED_PART_3 TRUE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <utility>
#include <vector>

#include "expanded_templates.h"

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

/**
 * @brief Common namespace for CSC232 identifiers.
 */
namespace csc232
{
    // Add any user-defined functions prescribed in your assignment below

    // Created the Shape interface
    class Shape {
        public:
            // Two pure virtual member functions, one to find the area and another to find the perimeter.
            virtual double area() const = 0;
            virtual double perimeter() const = 0;

            // Implemented the virtual destructor
            virtual ~Shape() = default;
    };

    // Definition of the square class
    class Square : public Shape {
        public:
            // Defined the area to return the area of a square
            double area() const override {
                return side * side;
            }
            // Defined the perimeter to return the perimeter of a square
            double perimeter() const override {
                return 4 * side;
            }
        private:
            // Side is a private variable, as desired.
            double side = 1;
    };

    // Defined the circle class.
    class Circle : public Shape {
        public:
            // Using M_PI from the cmath library, we return the area of a circle.
            double area() const override {
                return (M_PI * radius * radius);
            }
            // Again, using M_PI from the cmath library, we return the perimeter of a circle.
            double perimeter() const override {
                return (2 * M_PI * radius);
            }
        private:
            // I was unsure if radius was supposed to be private or public, but since the tests passed while it was private, I left it that way. In fig. 1, it has a plus next to radius, which is where my confusion comes from.
            double radius = 1.0;
    };

    // DO NOT Modify anything below this line
} // namespace csc232

#endif // CSC232_COMMON_H_
