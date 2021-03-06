//
//   This file contains the C++ code from Program 12.4 of
//   "Data Structures and Algorithms
//    with Object-Oriented Design Patterns in C++"
//   by Bruno R. Preiss.
//
//   Copyright (c) 1998 by Bruno R. Preiss, P.Eng.  All rights reserved.
//
//   http://www.pads.uwaterloo.ca/Bruno.Preiss/books/opus4/programs/pgm12_04.cpp
//
SetAsArray operator + (SetAsArray const& s, SetAsArray const& t)
{
    if (s.universeSize != t.universeSize)
	throw invalid_argument ("mismatched sets");
    SetAsArray result (s.universeSize);
    for (unsigned int i = 0; i < s.universeSize; ++i)
	result.array [i] = s.array [i] || t.array [i];
    return result;
}

SetAsArray operator * (SetAsArray const& s, SetAsArray const& t)
{
    if (s.universeSize != t.universeSize)
	throw invalid_argument ("mismatched sets");
    SetAsArray result (s.universeSize);
    for (unsigned int i = 0; i < s.universeSize; ++i)
	result.array [i] = s.array [i] && t.array [i];
    return result;
}

SetAsArray operator - (SetAsArray const& s, SetAsArray const& t)
{
    if (s.universeSize != t.universeSize)
	throw invalid_argument ("mismatched sets");
    SetAsArray result (s.universeSize);
    for (unsigned int i = 0; i < s.universeSize; ++i)
	result.array [i] = s.array [i] && !t.array [i];
    return result;
}
