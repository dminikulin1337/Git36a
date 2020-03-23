#pragma once
#include<iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

template<typename T>
void FillRand(T arr[], const int n);
template<typename T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename P>
void Print(P arr[], const int n);
template<typename P>
void Print(P arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename S>
void Sort(S arr[], const int n);
template<typename S>
void Sort(S arr[ROWS][COLS], const int ROWS, const int COLS);