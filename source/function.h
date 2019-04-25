#ifndef FUNCTION_H
#define FUNCTION_H

// Function signature - parameters, total parameters and return type
#include "function/function_parameter.hpp"
#include "function/total_parameter.hpp"
#include "function/return_type.hpp"
#include "function/function_signature.hpp"

// Common functions properties
#include "function/is_pointer_function.hpp"
#include "function/is_type_function.hpp"
#include "function/variable_argument.hpp"
#include "function/is_ellipsis_function.hpp"

// Non-member functions 
#include "function/is_non_member_function.hpp"

// Class member functions
#include "function/member_function_of.hpp"
#include "function/is_member_function.hpp"
#include "function/is_lvalue_function.hpp"
#include "function/is_rvalue_function.hpp"
#include "function/is_const_function.hpp"

// Is Function
#include "function/is_function.hpp"

// All function properties
#include "function/function_property.hpp"

#endif


