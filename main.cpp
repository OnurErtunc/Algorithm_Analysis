#include <cmath>
#include <iostream> 
#include <ctime>
#include <fstream>
#include <string>

using namespace std;
/**
 * @file main.cpp
 * @author Onur Ertunc 
 * @brief Algorithm analysis of some well-known searching algorithms 
 * @version 
 * @date 2021-04-08
 * 
 * 
 * 
 */

int linearSearch( int* arr, int N, int value );
int linearSearch2( int* arr, int pos, int N, int value );
int binarySearch( int* arr, int N, int value );
int jumpSearch( int* arr, int N, int value);


int main() {

    const int counter = 70000;
    // arrays and their sizes
    const int size1 = 1000, size2 = 2000, size3 = 3000, size4 = 4000;
    const int size5 = 5000, size6 = 7500, size7 = 10000, size8 = 12500;
    const int size9 = 15000, size10 = 20000;
    int arr1[size1];
    int arr2[size2];
    int arr3[size3];
    int arr4[size4];
    int arr5[size5];
    int arr6[size6];
    int arr7[size7];
    int arr8[size8];
    int arr9[size9];
    int arr10[size10];

    double timeTaken[10][16];

    double duration1_1a, duration1_1b, duration1_1c, duration1_1d;
    double duration1_2a, duration1_2b, duration1_2c, duration1_2d;
    double duration1_3a, duration1_3b, duration1_3c, duration1_3d;
    double duration1_4a, duration1_4b, duration1_4c, duration1_4d;

    double duration2_1a, duration2_1b, duration2_1c, duration2_1d;
    double duration2_2a, duration2_2b, duration2_2c, duration2_2d;
    double duration2_3a, duration2_3b, duration2_3c, duration2_3d;
    double duration2_4a, duration2_4b, duration2_4c, duration2_4d;

    double duration3_1a, duration3_1b, duration3_1c, duration3_1d;
    double duration3_2a, duration3_2b, duration3_2c, duration3_2d;
    double duration3_3a, duration3_3b, duration3_3c, duration3_3d;
    double duration3_4a, duration3_4b, duration3_4c, duration3_4d;

    double duration4_1a, duration4_1b, duration4_1c, duration4_1d;
    double duration4_2a, duration4_2b, duration4_2c, duration4_2d;
    double duration4_3a, duration4_3b, duration4_3c, duration4_3d;
    double duration4_4a, duration4_4b, duration4_4c, duration4_4d;

    double duration5_1a, duration5_1b, duration5_1c, duration5_1d;
    double duration5_2a, duration5_2b, duration5_2c, duration5_2d;
    double duration5_3a, duration5_3b, duration5_3c, duration5_3d;
    double duration5_4a, duration5_4b, duration5_4c, duration5_4d;

    double duration6_1a, duration6_1b, duration6_1c, duration6_1d;
    double duration6_2a, duration6_2b, duration6_2c, duration6_2d;
    double duration6_3a, duration6_3b, duration6_3c, duration6_3d;
    double duration6_4a, duration6_4b, duration6_4c, duration6_4d;

    double duration7_1a, duration7_1b, duration7_1c, duration7_1d;
    double duration7_2a, duration7_2b, duration7_2c, duration7_2d;
    double duration7_3a, duration7_3b, duration7_3c, duration7_3d;
    double duration7_4a, duration7_4b, duration7_4c, duration7_4d;

    double duration8_1a, duration8_1b, duration8_1c, duration8_1d;
    double duration8_2a, duration8_2b, duration8_2c, duration8_2d;
    double duration8_3a, duration8_3b, duration8_3c, duration8_3d;
    double duration8_4a, duration8_4b, duration8_4c, duration8_4d;

    double duration9_1a, duration9_1b, duration9_1c, duration9_1d;
    double duration9_2a, duration9_2b, duration9_2c, duration9_2d;
    double duration9_3a, duration9_3b, duration9_3c, duration9_3d;
    double duration9_4a, duration9_4b, duration9_4c, duration9_4d;

    double duration10_1a, duration10_1b, duration10_1c, duration10_1d;
    double duration10_2a, duration10_2b, duration10_2c, duration10_2d;
    double duration10_3a, duration10_3b, duration10_3c, duration10_3d;
    double duration10_4a, duration10_4b, duration10_4c, duration10_4d;


    clock_t startTime1_1a, startTime1_1b, startTime1_1c, startTime1_1d;
    clock_t startTime1_2a, startTime1_2b, startTime1_2c, startTime1_2d;
    clock_t startTime1_3a, startTime1_3b, startTime1_3c, startTime1_3d;
    clock_t startTime1_4a, startTime1_4b, startTime1_4c, startTime1_4d;

    clock_t startTime2_1a, startTime2_1b, startTime2_1c, startTime2_1d;
    clock_t startTime2_2a, startTime2_2b, startTime2_2c, startTime2_2d;
    clock_t startTime2_3a, startTime2_3b, startTime2_3c, startTime2_3d;
    clock_t startTime2_4a, startTime2_4b, startTime2_4c, startTime2_4d;

    clock_t startTime3_1a, startTime3_1b, startTime3_1c, startTime3_1d;
    clock_t startTime3_2a, startTime3_2b, startTime3_2c, startTime3_2d;
    clock_t startTime3_3a, startTime3_3b, startTime3_3c, startTime3_3d;
    clock_t startTime3_4a, startTime3_4b, startTime3_4c, startTime3_4d;

    clock_t startTime4_1a, startTime4_1b, startTime4_1c, startTime4_1d;
    clock_t startTime4_2a, startTime4_2b, startTime4_2c, startTime4_2d;
    clock_t startTime4_3a, startTime4_3b, startTime4_3c, startTime4_3d;
    clock_t startTime4_4a, startTime4_4b, startTime4_4c, startTime4_4d;

    clock_t startTime5_1a, startTime5_1b, startTime5_1c, startTime5_1d;
    clock_t startTime5_2a, startTime5_2b, startTime5_2c, startTime5_2d;
    clock_t startTime5_3a, startTime5_3b, startTime5_3c, startTime5_3d;
    clock_t startTime5_4a, startTime5_4b, startTime5_4c, startTime5_4d;

    clock_t startTime6_1a, startTime6_1b, startTime6_1c, startTime6_1d;
    clock_t startTime6_2a, startTime6_2b, startTime6_2c, startTime6_2d;
    clock_t startTime6_3a, startTime6_3b, startTime6_3c, startTime6_3d;
    clock_t startTime6_4a, startTime6_4b, startTime6_4c, startTime6_4d;

    clock_t startTime7_1a, startTime7_1b, startTime7_1c, startTime7_1d;
    clock_t startTime7_2a, startTime7_2b, startTime7_2c, startTime7_2d;
    clock_t startTime7_3a, startTime7_3b, startTime7_3c, startTime7_3d;
    clock_t startTime7_4a, startTime7_4b, startTime7_4c, startTime7_4d;

    clock_t startTime8_1a, startTime8_1b, startTime8_1c, startTime8_1d;
    clock_t startTime8_2a, startTime8_2b, startTime8_2c, startTime8_2d;
    clock_t startTime8_3a, startTime8_3b, startTime8_3c, startTime8_3d;
    clock_t startTime8_4a, startTime8_4b, startTime8_4c, startTime8_4d;

    clock_t startTime9_1a, startTime9_1b, startTime9_1c, startTime9_1d;
    clock_t startTime9_2a, startTime9_2b, startTime9_2c, startTime9_2d;
    clock_t startTime9_3a, startTime9_3b, startTime9_3c, startTime9_3d;
    clock_t startTime9_4a, startTime9_4b, startTime9_4c, startTime9_4d;

    clock_t startTime10_1a, startTime10_1b, startTime10_1c, startTime10_1d;
    clock_t startTime10_2a, startTime10_2b, startTime10_2c, startTime10_2d;
    clock_t startTime10_3a, startTime10_3b, startTime10_3c, startTime10_3d;
    clock_t startTime10_4a, startTime10_4b, startTime10_4c, startTime10_4d;



    // values to be searched in each array
    
    // for arr1:
    int a1 = 122, b1 = 526, c1 = 819, d1 = -2;

    // for arr2:
    int a2 = 190, b2 = 1148, c2 = 1889, d2 = -2;

    // for arr3:
    int a3 = 220, b3 = 1510, c3 = 2889, d3 = -1;

    // for arr4: 
    int a4 = 250, b4 = 2040, c4 = 3888, d4 = -2;

    // for arr5:
    int a5 = 390, b5 = 2350, c5 = 4900, d5 = -5;

    // for arr6:
    int a6 = 140, b6 = 3300, c6 = 7350, d6 = -6;

    // for arr7:
    int a7 = 600, b7 = 4970, c7 = 9974, d7 = -7;

    // for arr8:
    int a8 = 880, b8 = 6800, c8 = 12100, d8 = -8;

    // for arr9:
    int a9 = 740, b9 = 7213, c9 = 14612, d9 = -9;

    // for arr10
    int a10 = 200, b10 = 10059, c10 = 19980, d10 = -10;


    // adding elements to arr1 
    cout << "arr1 size: " << size1 << endl;
    for ( int i = 0; i < size1; i++ ) {
        arr1[i] = i+1;
    }
    cout << "added" << endl;

    // adding elements to arr2
    cout << "arr2 size: " << size2 << endl;
    for ( int i = 0; i < size2; i++ ) {
        arr2[i] = i+1;
    }
    cout << "added" << endl;

    // adding elements to arr3
    cout << "arr3 size: " << size3 << endl;
    for ( int i = 0; i < size3; i++ ) {
        arr3[i] = i+1;
    }
    cout << "added" << endl;

    // adding elements to arr4
    cout << "arr4 size: " << size4 << endl;
    for ( int i = 0; i < size4; i++ ) {
        arr4[i] = i+1;
    }
    cout << "added" << endl;

    // adding elements to arr5
    cout << "arr5 size: " << size5 << endl;
    for ( int i = 0; i < size5; i++ ) {
        arr5[i] = i+1;
    }
    cout << "added" << endl;

    // adding elements to arr6
    cout << "arr6 size: " << size6 << endl;
    for ( int i = 0; i < size6; i++ ) {
        arr6[i] = i+1;
    }
    cout << "added" << endl;

    // adding elements to arr7
    cout << "arr7 size: " << size7 << endl;
    for ( int i = 0; i < size7; i++ ) {
        arr7[i] = i+1;
    }
    cout << "added" << endl;

    // adding elements to arr8
    cout << "arr8 size: " << size8 << endl;
    for ( int i = 0; i < size8; i++ ) {
        arr8[i] = i+1;
    }
    cout << "added" << endl;

    // adding elements to arr9
    cout << "arr9 size: " << size9 << endl;
    for ( int i = 0; i < size9; i++ ) {
        arr9[i] = i+1;
    }
    cout << "added" << endl;

    // adding elements to arr10
    cout << "arr10 size: " << size10 << endl;
    for ( int i = 0; i < size10; i++ ) {
        arr10[i] = i+1;
    }
    cout << "added" << endl;
    cout << endl;

    // algorithms and calls

    // algorithm calls for the arr1 with size1
    cout << "Linear Search (iterative) with arr1 size " << size1 << endl;

    startTime1_1a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr1, size1, a1 );
    }
    duration1_1a = 1000 * double( clock() - startTime1_1a ) / CLOCKS_PER_SEC;
    duration1_1a = duration1_1a / counter; 
    timeTaken[0][0] = duration1_1a;
    cout << "a-) " << linearSearch( arr1, size1, a1 ) << endl; 
    cout << "Execution took " << duration1_1a << " miliseconds." << endl;
    cout << endl;

    startTime1_1b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr1, size1, b1 );
    }
    duration1_1b = 1000 * double( clock() - startTime1_1b ) / CLOCKS_PER_SEC;
    duration1_1b = duration1_1b / counter; 
    timeTaken[0][1] = duration1_1b;
    cout << "b-) " << linearSearch( arr1, size1, b1 ) << endl; 
    cout << "Execution took " << duration1_1b << " miliseconds." << endl;
    cout << endl;

    startTime1_1c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr1, size1, c1 );
    }
    duration1_1c = 1000 * double( clock() - startTime1_1c ) / CLOCKS_PER_SEC;
    duration1_1c = duration1_1c / counter; 
    timeTaken[0][2] = duration1_1c;
    cout << "c-) " << linearSearch( arr1, size1, c1 ) << endl;
    cout << "Execution took " << duration1_1c << " miliseconds." << endl;
    cout << endl;


    startTime1_1d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr1, size1, d1 );
    }
    duration1_1d = 1000 * double( clock() - startTime1_1d ) / CLOCKS_PER_SEC;
    duration1_1d = duration1_1d / counter; 
    timeTaken[0][3] = duration1_1d;
    cout << "d-) " << linearSearch( arr1, size1, d1 ) << endl;
    cout << "Execution took " << duration1_1d << " miliseconds." << endl;
    cout << endl;


    cout << "Linear Search (recursive) with arr1 size " << size1 << endl;

    startTime1_2a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr1, 0, size1, a1 );
    }
    duration1_2a = 1000 * double( clock() - startTime1_2a ) / CLOCKS_PER_SEC;
    duration1_2a = duration1_2a / counter; 
    timeTaken[0][4] = duration1_2a;
    cout << "a-) " << linearSearch2( arr1, 0, size1, a1 ) << endl;
    cout << "Execution took " << duration1_2a << " miliseconds." << endl;
    cout << endl;

    startTime1_2b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr1, 0, size1, b1 );
    }
    duration1_2b = 1000 * double( clock() - startTime1_2b ) / CLOCKS_PER_SEC;
    duration1_2b = duration1_2b / counter; 
    timeTaken[0][5] = duration1_2b;
    cout << "b-) " << linearSearch2( arr1, 0, size1, b1 ) << endl;
    cout << "Execution took " << duration1_2b << " miliseconds." << endl;
    cout << endl;

    startTime1_2c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr1, 0, size1, c1 );
    }
    duration1_2c = 1000 * double( clock() - startTime1_2c ) / CLOCKS_PER_SEC;
    duration1_2c = duration1_2c / counter; 
    timeTaken[0][6] = duration1_2c;
    cout << "c-) " << linearSearch2( arr1, 0, size1, c1 ) << endl;
    cout << "Execution took " << duration1_2c << " miliseconds." << endl;
    cout << endl;

    startTime1_2d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr1, 0, size1, d1 );
    }
    duration1_2d = 1000 * double( clock() - startTime1_2d ) / CLOCKS_PER_SEC;
    duration1_2d = duration1_2d / counter; 
    timeTaken[0][7] = duration1_2d;
    cout << "d-) " << linearSearch2( arr1, 0, size1, d1 ) << endl;
    cout << "Execution took " << duration1_2d << " miliseconds." << endl;
    cout << endl;


    cout << "Binary Search with arr1 size " << size1 << endl;

    startTime1_3a = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr1, size1, a1 );
    }
    duration1_3a = 1000 * double( clock() - startTime1_3a ) / CLOCKS_PER_SEC;
    duration1_3a = duration1_3a / counter; 
    timeTaken[0][8] = duration1_3a;
    cout << "a-) " << binarySearch( arr1, size1, a1 ) << endl;
    cout << "Execution took " << duration1_3a << " miliseconds." << endl;
    cout << endl;

    startTime1_3b = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr1, size1, b1 );
    }
    duration1_3b = 1000 * double( clock() - startTime1_3b ) / CLOCKS_PER_SEC;
    duration1_3b = duration1_3b / counter; 
    timeTaken[0][9] = duration1_3b;
    cout << "b-) " << binarySearch( arr1, size1, b1 ) << endl;
    cout << "Execution took " << duration1_3b << " miliseconds." << endl;
    cout << endl;

    startTime1_3c = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr1, size1, c1 );
    }
    duration1_3c = 1000 * double( clock() - startTime1_3c ) / CLOCKS_PER_SEC;
    duration1_3c = duration1_3c / counter; 
    timeTaken[0][10] = duration1_3c;
    cout << "c-) " << binarySearch( arr1, size1, c1 ) << endl;
    cout << "Execution took " << duration1_3c << " miliseconds." << endl;
    cout << endl;

    startTime1_3d = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr1, size1, d1 );
    }
    duration1_3d = 1000 * double( clock() - startTime1_3d ) / CLOCKS_PER_SEC;
    duration1_3d = duration1_3d / counter; 
    timeTaken[0][11] = duration1_3d;
    cout << "d-) " << binarySearch( arr1, size1, d1 ) << endl;
    cout << "Execution took " << duration1_3d << " miliseconds." << endl;
    cout << endl;


    cout << "Jump Search with arr1 size " << size1 << endl;

    startTime1_4a = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr1, size1, a1 );
    }
    duration1_4a = 1000 * double( clock() - startTime1_4a ) / CLOCKS_PER_SEC;
    duration1_4a = duration1_4a / counter; 
    timeTaken[0][12] = duration1_4a;
    cout << "a-) " << jumpSearch( arr1, size1, a1 ) << endl;
    cout << "Execution took " << duration1_4a << " miliseconds." << endl;
    cout << endl;

    startTime1_4b = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr1, size1, b1 );
    }
    duration1_4b = 1000 * double( clock() - startTime1_4b ) / CLOCKS_PER_SEC;
    duration1_4b = duration1_4b / counter; 
    timeTaken[0][13] = duration1_4b;
    cout << "b-) " << jumpSearch( arr1, size1, b1 ) << endl;
    cout << "Execution took " << duration1_4b << " miliseconds." << endl;
    cout << endl;

    startTime1_4c = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr1, size1, c1 );
    }
    duration1_4c = 1000 * double( clock() - startTime1_4c ) / CLOCKS_PER_SEC;
    duration1_4c = duration1_4c / counter; 
    timeTaken[0][14] = duration1_4c;
    cout << "c-) " << jumpSearch( arr1, size1, c1 ) << endl;
    cout << "Execution took " << duration1_4c << " miliseconds." << endl;
    cout << endl;
    
    startTime1_4d = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr1, size1, d1 );
    }
    duration1_4d = 1000 * double( clock() - startTime1_4d ) / CLOCKS_PER_SEC;
    duration1_4d = duration1_4d / counter; 
    timeTaken[0][15] = duration1_4d;
    cout << "d-) " << jumpSearch( arr1, size1, d1 ) << endl;
    cout << "Execution took " << duration1_4d << " miliseconds." << endl;
    cout << endl;
    //------------------------------------------


    // algorithm calls for the arr2 with size2
    cout << "Linear Search (iterative) with arr2 size " << size2 << endl;

    startTime2_1a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr2, size2, a2 );
    }
    duration2_1a = 1000 * double( clock() - startTime2_1a ) / CLOCKS_PER_SEC;
    duration2_1a = duration2_1a / counter; 
    timeTaken[1][0] = duration2_1a;
    cout << "a-) " << linearSearch( arr2, size2, a2 ) << endl;
    cout << "Execution took " << duration2_1a << " miliseconds." << endl;
    cout << endl;

    startTime2_1b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr2, size2, b2 );
    }
    duration2_1b = 1000 * double( clock() - startTime2_1b ) / CLOCKS_PER_SEC;
    duration2_1b = duration2_1b / counter; 
    timeTaken[1][1] = duration2_1b;
    cout << "b-) " << linearSearch( arr2, size2, b2 ) << endl;
    cout << "Execution took " << duration2_1b << " miliseconds." << endl;
    cout << endl;

    startTime2_1c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr2, size2, c2 );
    }
    duration2_1c = 1000 * double( clock() - startTime2_1c ) / CLOCKS_PER_SEC;
    duration2_1c = duration2_1c / counter; 
    timeTaken[1][2] = duration2_1c;
    cout << "c-) " << linearSearch( arr2, size2, c2 ) << endl;
    cout << "Execution took " << duration2_1c << " miliseconds." << endl;
    cout << endl;

    startTime2_1d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr2, size2, d2 );
    }
    duration2_1d = 1000 * double( clock() - startTime2_1d ) / CLOCKS_PER_SEC;
    duration2_1d = duration2_1d / counter; 
    timeTaken[1][3] = duration2_1d;
    cout << "d-) " << linearSearch( arr2, size2, d2 ) << endl;
    cout << "Execution took " << duration2_1d << " miliseconds." << endl;
    cout << endl;


    cout << "Linear Search (recursive) with arr2 size " << size2 << endl;

    startTime2_2a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr2, 0, size2, a2 );
    }
    duration2_2a = 1000 * double( clock() - startTime2_2a ) / CLOCKS_PER_SEC;
    duration2_2a = duration2_2a / counter; 
    timeTaken[1][4] = duration2_2a;
    cout << "a-) " << linearSearch2( arr2, 0, size2, a2 ) << endl;
    cout << "Execution took " << duration2_2a << " miliseconds." << endl;
    cout << endl;

    startTime2_2b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr2, 0, size2, b2 );
    } 
    duration2_2b = 1000 * double( clock() - startTime2_2b ) / CLOCKS_PER_SEC;
    duration2_2b = duration2_2b / counter; 
    timeTaken[1][5] = duration2_2b;
    cout << "b-) " << linearSearch2( arr2, 0, size2, b2 ) << endl;
    cout << "Execution took " << duration2_2b << " miliseconds." << endl;
    cout << endl;

    startTime2_2c = clock();
    for ( int i = 0; i < counter; i++ ){
        linearSearch2( arr2, 0, size2, c2 );
    }
    duration2_2c = 1000 * double( clock() - startTime2_2c ) / CLOCKS_PER_SEC;
    duration2_2c = duration2_2c / counter; 
    timeTaken[1][6] = duration2_2c;
    cout << "c-) " << linearSearch2( arr2, 0, size2, c2 ) << endl;
    cout << "Execution took " << duration2_2c << " miliseconds." << endl;
    cout << endl;

    startTime2_2d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr2, 0, size2, d2 );
    } 
    duration2_2d = 1000 * double( clock() - startTime2_2d ) / CLOCKS_PER_SEC;
    duration2_2d = duration2_2d / counter; 
    timeTaken[1][7] = duration2_2d;
    cout << "d-) " << linearSearch2( arr2, 0, size2, d2 ) << endl;
    cout << "Execution took " << duration2_2d << " miliseconds." << endl;
    cout << endl;


    cout << "Binary Search with arr2 size " << size2 << endl;

    startTime2_3a = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr2, size2, a2 );
    }
    duration2_3a = 1000 * double( clock() - startTime2_3a ) / CLOCKS_PER_SEC;
    duration2_3a = duration2_3a / counter; 
    timeTaken[1][8] = duration2_3a;
    cout << "a-) " << binarySearch( arr2, size2, a2 ) << endl;
    cout << "Execution took " << duration2_3a << " miliseconds." << endl;
    cout << endl;

    startTime2_3b = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr2, size2, b2 );
    }
    duration2_3b = 1000 * double( clock() - startTime2_3b ) / CLOCKS_PER_SEC;
    duration2_3b = duration2_3b / counter; 
    timeTaken[1][9] = duration2_3b;
    cout << "b-) " << binarySearch( arr2, size2, b2 ) << endl;
    cout << "Execution took " << duration2_3b << " miliseconds." << endl;
    cout << endl;

    startTime2_3c = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr2, size2, c2 );
    }
    duration2_3c = 1000 * double( clock() - startTime2_3c ) / CLOCKS_PER_SEC;
    duration2_3c = duration2_3c / counter; 
    timeTaken[1][10] = duration2_3c;
    cout << "c-) " << binarySearch( arr2, size2, c2 ) << endl;
    cout << "Execution took " << duration2_3c << " miliseconds." << endl;
    cout << endl;

    startTime2_3d = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr2, size2, d2 );
    }
    duration2_3d = 1000 * double( clock() - startTime2_3d ) / CLOCKS_PER_SEC;
    duration2_3d = duration2_3d / counter; 
    timeTaken[1][11] = duration2_3d;
    cout << "d-) " << binarySearch( arr2, size2, d2 ) << endl;
    cout << "Execution took " << duration2_3d << " miliseconds." << endl;
    cout << endl;


    cout << "Jump Search with arr2 size " << size1 << endl;

    startTime2_4a = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr2, size2, a2 );
    }
    duration2_4a = 1000 * double( clock() - startTime2_4a ) / CLOCKS_PER_SEC;
    duration2_4a = duration2_4a / counter; 
    timeTaken[1][12] = duration2_4a;
    cout << "a-) " << jumpSearch( arr2, size2, a2 ) << endl;
    cout << "Execution took " << duration2_4a << " miliseconds." << endl;
    cout << endl;

    startTime2_4b = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr2, size2, b2 );
    }
    duration2_4b = 1000 * double( clock() - startTime2_4b ) / CLOCKS_PER_SEC;
    duration2_4b = duration2_4b / counter; 
    timeTaken[1][13] = duration2_4b;
    cout << "b-) " << jumpSearch( arr2, size2, b2 ) << endl;
    cout << "Execution took " << duration2_4b << " miliseconds." << endl;
    cout << endl;

    startTime2_4c = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr2, size2, c2 );
    }
    duration2_4c = 1000 * double( clock() - startTime2_4c ) / CLOCKS_PER_SEC;
    duration2_4c = duration2_4c / counter; 
    timeTaken[1][14] = duration2_4c;
    cout << "c-) " << jumpSearch( arr2, size2, c2 ) << endl;
    cout << "Execution took " << duration2_4c << " miliseconds." << endl;
    cout << endl;

    startTime2_4d = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr2, size2, d2 );
    }
    duration2_4d = 1000 * double( clock() - startTime2_4d ) / CLOCKS_PER_SEC;
    duration2_4d = duration2_4d / counter; 
    timeTaken[1][15] = duration2_4d;
    cout << "d-) " << jumpSearch( arr2, size2, d2 ) << endl;
    cout << "Execution took " << duration2_4d << " miliseconds." << endl;
    cout << endl;
    //------------------------------------------

    // algorithm calls for the arr3 with size3
    cout << "Linear Search (iterative) with arr3 size " << size3 << endl;

    startTime3_1a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr3, size3, a3 );
    }
    duration3_1a = 1000 * double( clock() - startTime3_1a ) / CLOCKS_PER_SEC;
    duration3_1a = duration3_1a / counter; 
    timeTaken[2][0] = duration3_1a;
    cout << "a-) " << linearSearch( arr3, size3, a3 ) << endl;
    cout << "Execution took " << duration3_1a << " miliseconds." << endl;
    cout << endl;

    startTime3_1b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr3, size3, b3 );
    }
    duration3_1b = 1000 * double( clock() - startTime3_1b ) / CLOCKS_PER_SEC;
    duration3_1b = duration3_1b / counter; 
    timeTaken[2][1] = duration3_1b;
    cout << "b-) " << linearSearch( arr3, size3, b3 ) << endl;
    cout << "Execution took " << duration3_1b << " miliseconds." << endl;
    cout << endl;

    startTime3_1c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr3, size3, c3 );
    }
    duration3_1c = 1000 * double( clock() - startTime3_1c ) / CLOCKS_PER_SEC;
    duration3_1c = duration3_1c / counter; 
    timeTaken[2][2] = duration3_1c;
    cout << "c-) " << linearSearch( arr3, size3, c3 ) << endl;
    cout << "Execution took " << duration3_1c << " miliseconds." << endl;
    cout << endl;

    startTime3_1d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr3, size3, d3 );
    }
    duration3_1d = 1000 * double( clock() - startTime3_1d ) / CLOCKS_PER_SEC;
    duration3_1d = duration3_1d / counter; 
    timeTaken[2][3] = duration3_1d;
    cout << "d-) " << linearSearch( arr3, size3, d3 ) << endl;
    cout << "Execution took " << duration3_1d << " miliseconds." << endl;
    cout << endl;

    cout << "Linear Search (recursive) with arr3 size " << size3 << endl;

    startTime3_2a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr3, 0, size3, a3 );
    }
    duration3_2a = 1000 * double( clock() - startTime3_2a ) / CLOCKS_PER_SEC;
    duration3_2a = duration3_2a / counter; 
    timeTaken[2][4] = duration3_2a;
    cout << "a-) " << linearSearch2( arr3, 0, size3, a3 ) << endl;
    cout << "Execution took " << duration3_2a << " miliseconds." << endl;
    cout << endl;

    startTime3_2b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr3, 0, size3, b3 );
    }
    duration3_2b = 1000 * double( clock() - startTime3_2b ) / CLOCKS_PER_SEC;
    duration3_2b = duration3_2a / counter; 
    timeTaken[2][5] = duration3_2b;
    cout << "b-) " << linearSearch2( arr3, 0, size3, b3 ) << endl;
    cout << "Execution took " << duration3_2b << " miliseconds." << endl;
    cout << endl;

    startTime3_2c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr3, 0, size3, c3 );
    }
    duration3_2c = 1000 * double( clock() - startTime3_2c ) / CLOCKS_PER_SEC;
    duration3_2c = duration3_2c / counter; 
    timeTaken[2][6] = duration3_2c;
    cout << "c-) " << linearSearch2( arr3, 0, size3, c3 ) << endl;
    cout << "Execution took " << duration3_2c << " miliseconds." << endl;
    cout << endl;

    startTime3_2d = clock();
    for ( int i = 0; i < counter; i++ ){
        linearSearch2( arr3, 0, size3, d3 );
    }
    duration3_2d = 1000 * double( clock() - startTime3_2d ) / CLOCKS_PER_SEC;
    duration3_2d = duration3_2d / counter; 
    timeTaken[2][7] = duration3_2d;
    cout << "d-) " << linearSearch2( arr3, 0, size3, d3 ) << endl;
    cout << "Execution took " << duration3_2d << " miliseconds." << endl;
    cout << endl;


    cout << "Binary Search with arr3 size " << size3 << endl;

    startTime3_3a = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr3, size3, a3 );
    }
    duration3_3a = 1000 * double( clock() - startTime3_3a ) / CLOCKS_PER_SEC;
    duration3_3a = duration3_3a / counter; 
    timeTaken[2][8] = duration3_3a;
    cout << "a-) " << binarySearch( arr3, size3, a3 ) << endl;
    cout << "Execution took " << duration3_3a << " miliseconds." << endl;
    cout << endl;

    startTime3_3b = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr3, size3, b3 );
    }
    duration3_3b = 1000 * double( clock() - startTime3_3b ) / CLOCKS_PER_SEC;
    duration3_3b = duration3_3b / counter; 
    timeTaken[2][9] = duration3_3b;
    cout << "b-) " << binarySearch( arr3, size3, b3 ) << endl;
    cout << "Execution took " << duration3_3b << " miliseconds." << endl;
    cout << endl;

    startTime3_3c = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr3, size3, c3 );
    }
    duration3_3c = 1000 * double( clock() - startTime3_3c ) / CLOCKS_PER_SEC;
    duration3_3c = duration3_3c / counter; 
    timeTaken[2][10] = duration3_3c;
    cout << "c-) " << binarySearch( arr3, size3, c3 ) << endl;
    cout << "Execution took " << duration3_3c << " miliseconds." << endl;
    cout << endl;

    startTime3_3d = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr3, size3, d3 );
    } 
    duration3_3d = 1000 * double( clock() - startTime3_3d ) / CLOCKS_PER_SEC;
    duration3_3d = duration3_3d / counter; 
    timeTaken[2][11] = duration3_3d;
    cout << "d-) " << binarySearch( arr3, size3, d3 ) << endl;
    cout << "Execution took " << duration3_3d << " miliseconds." << endl;
    cout << endl;


    cout << "Jump Search with arr3 size " << size3 << endl;

    startTime3_4a = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr3, size3, a3 );
    }
    duration3_4a = 1000 * double( clock() - startTime3_4a ) / CLOCKS_PER_SEC;
    duration3_4a = duration3_4a / counter; 
    timeTaken[2][12] = duration3_4a;
    cout << "a-) " << jumpSearch( arr3, size3, a3 ) << endl;
    cout << "Execution took " << duration3_4a << " miliseconds." << endl;
    cout << endl;

    startTime3_4b = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr3, size3, b3 );
    }
    duration3_4b = 1000 * double( clock() - startTime3_4b ) / CLOCKS_PER_SEC;
    duration3_4b = duration3_4b / counter; 
    timeTaken[2][13] = duration3_4b;
    cout << "b-) " << jumpSearch( arr3, size3, b3 ) << endl;
    cout << "Execution took " << duration3_4b << " miliseconds." << endl;
    cout << endl;

    startTime3_4c = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr3, size3, c3 );
    } 
    duration3_4c = 1000 * double( clock() - startTime3_4c ) / CLOCKS_PER_SEC;
    duration3_4c = duration3_4c / counter; 
    timeTaken[2][14] = duration3_4c;
    cout << "c-) " << jumpSearch( arr3, size3, c3 ) << endl;
    cout << "Execution took " << duration3_4c << " miliseconds." << endl;
    cout << endl;

    startTime3_4d = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr3, size3, d3 );
    }
    duration3_4d = 1000 * double( clock() - startTime3_4d ) / CLOCKS_PER_SEC;
    duration3_4d = duration3_4d / counter; 
    timeTaken[2][15] = duration3_4d;
    cout << "d-) " << jumpSearch( arr3, size3, d3 ) << endl;
    cout << "Execution took " << duration3_4d << " miliseconds." << endl;
    cout << endl;
    //------------------------------------------

    // algorithm calls for the arr4 with size4
    cout << "Linear Search (iterative) with arr4 size " << size4 << endl;

    startTime4_1a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr4, size4, a4 );
    }
    duration4_1a = 1000 * double( clock() - startTime4_1a ) / CLOCKS_PER_SEC;
    duration4_1a = duration4_1a / counter; 
    timeTaken[3][0] = duration4_1a;
    cout << "a-) " << linearSearch( arr4, size4, a4 ) << endl;
    cout << "Execution took " << duration4_1a << " miliseconds." << endl;
    cout << endl;

    startTime4_1b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr4, size4, b4 );
    }
    duration4_1b = 1000 * double( clock() - startTime4_1b ) / CLOCKS_PER_SEC;
    duration4_1b = duration4_1b / counter; 
    timeTaken[3][1] = duration4_1b;
    cout << "b-) " << linearSearch( arr4, size4, b4 ) << endl;
    cout << "Execution took " << duration4_1b << " miliseconds." << endl;
    cout << endl;

    startTime4_1c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr4, size4, c4 );
    }
    duration4_1c = 1000 * double( clock() - startTime4_1c ) / CLOCKS_PER_SEC;
    duration4_1c = duration4_1c / counter; 
    timeTaken[3][2] = duration4_1c;
    cout << "c-) " << linearSearch( arr4, size4, c4 ) << endl;
    cout << "Execution took " << duration4_1c << " miliseconds." << endl;
    cout << endl;

    startTime4_1d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr4, size4, d4 );
    }
    duration4_1d = 1000 * double( clock() - startTime4_1d ) / CLOCKS_PER_SEC;
    duration4_1d = duration4_1d / counter; 
    timeTaken[3][3] = duration4_1d;
    cout << "d-) " << linearSearch( arr4, size4, d4 ) << endl;
    cout << "Execution took " << duration4_1d << " miliseconds." << endl;
    cout << endl;


    cout << "Linear Search (recursive) with arr4 size " << size4 << endl;

    startTime4_2a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr4, 0, size4, a4 );
    }
    duration4_2a = 1000 * double( clock() - startTime4_2a ) / CLOCKS_PER_SEC;
    duration4_2a = duration4_2a / counter; 
    timeTaken[3][4] = duration4_2a;
    cout << "a-) " << linearSearch2( arr4, 0, size4, a4 ) << endl;
    cout << "Execution took " << duration4_2a << " miliseconds." << endl;
    cout << endl;

    startTime4_2b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr4, 0, size4, b4 );
    }
    duration4_2b = 1000 * double( clock() - startTime4_2b ) / CLOCKS_PER_SEC;
    duration4_2b = duration4_2b / counter; 
    timeTaken[3][5] = duration4_2b;
    cout << "b-) " << linearSearch2( arr4, 0, size4, b4 ) << endl;
    cout << "Execution took " << duration4_2b << " miliseconds." << endl;
    cout << endl;

    startTime4_2c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr4, 0, size4, c4 );
    }
    duration4_2c = 1000 * double( clock() - startTime4_2c ) / CLOCKS_PER_SEC;
    duration4_2c = duration4_2c / counter; 
    timeTaken[3][6] = duration4_2c;
    cout << "c-) " << linearSearch2( arr4, 0, size4, c4 ) << endl;
    cout << "Execution took " << duration4_2c << " miliseconds." << endl;
    cout << endl;

    startTime4_2d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr4, 0, size4, d4 );
    }
    duration4_2d = 1000 * double( clock() - startTime4_2d ) / CLOCKS_PER_SEC;
    duration4_2d = duration4_2d / counter; 
    timeTaken[3][7] = duration4_2d;
    cout << "d-) " << linearSearch2( arr4, 0, size4, d4 ) << endl;
    cout << "Execution took " << duration4_2d << " miliseconds." << endl;
    cout << endl;


    cout << "Binary Search with arr4 size " << size4 << endl;

    startTime4_3a = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr4, size4, a4 );
    }
    duration4_3a = 1000 * double( clock() - startTime4_3a ) / CLOCKS_PER_SEC;
    duration4_3a = duration4_3a / counter; 
    timeTaken[3][8] = duration4_3a;
    cout << "a-) " << binarySearch( arr4, size4, a4 ) << endl;
    cout << "Execution took " << duration4_3a << " miliseconds." << endl;
    cout << endl;

    startTime4_3b = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr4, size4, b4 );
    }  
    duration4_3b = 1000 * double( clock() - startTime4_3b ) / CLOCKS_PER_SEC;
    duration4_3b = duration4_3b / counter; 
    timeTaken[3][9] = duration4_3b;
    cout << "b-) " << binarySearch( arr4, size4, b4 ) << endl;
    cout << "Execution took " << duration4_3b << " miliseconds." << endl;
    cout << endl;

    startTime4_3c = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr4, size4, c4 );
    }
    duration4_3c = 1000 * double( clock() - startTime4_3c ) / CLOCKS_PER_SEC;
    duration4_3c = duration4_3c / counter; 
    timeTaken[3][10] = duration4_3c;
    cout << "c-) " << binarySearch( arr4, size4, c4 ) << endl;
    cout << "Execution took " << duration4_3c << " miliseconds." << endl;
    cout << endl;

    startTime4_3d = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr4, size4, d4 );
    }
    duration4_3d = 1000 * double( clock() - startTime4_3d ) / CLOCKS_PER_SEC;
    duration4_3d = duration4_3d / counter; 
    timeTaken[3][11] = duration4_3d;
    cout << "d-) " << binarySearch( arr4, size4, d4 ) << endl;
    cout << "Execution took " << duration4_3d << " miliseconds." << endl;
    cout << endl;


    cout << "Jump Search with arr4 size " << size4 << endl;

    startTime4_4a = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr4, size4, a4 );
    } 
    duration4_4a = 1000 * double( clock() - startTime4_4a ) / CLOCKS_PER_SEC;
    duration4_4a = duration4_4a / counter; 
    timeTaken[3][12] = duration4_4a;
    cout << "a-) " << jumpSearch( arr4, size4, a4 ) << endl;
    cout << "Execution took " << duration4_4a << " miliseconds." << endl;
    cout << endl;

    startTime4_4b = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr4, size4, b4 );
    }
    duration4_4b = 1000 * double( clock() - startTime4_4b ) / CLOCKS_PER_SEC;
    duration4_4b = duration4_4b / counter; 
    timeTaken[3][13] = duration4_4b;
    cout << "b-) " << jumpSearch( arr4, size4, b4 ) << endl;
    cout << "Execution took " << duration4_4b << " miliseconds." << endl;
    cout << endl;

    startTime4_4c = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr4, size4, c4 );
    } 
    duration4_4c = 1000 * double( clock() - startTime4_4c ) / CLOCKS_PER_SEC;
    duration4_4c = duration4_4c / counter; 
    timeTaken[3][14] = duration4_4c;
    cout << "c-) " << jumpSearch( arr4, size4, c4 ) << endl;
    cout << "Execution took " << duration4_4c << " miliseconds." << endl;
    cout << endl;

    startTime4_4d = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr4, size4, d4 );
    }
    duration4_4d = 1000 * double( clock() - startTime4_4d ) / CLOCKS_PER_SEC;
    duration4_4d = duration4_4d / counter; 
    timeTaken[3][15] = duration4_4d;
    cout << "d-) " << jumpSearch( arr4, size4, d4 ) << endl;
    cout << "Execution took " << duration4_4d << " miliseconds." << endl;
    cout << endl;
    //------------------------------------------

    // algorithm calls for the arr5 with size5
    cout << "Linear Search (iterative) with arr5 size " << size5 << endl;

    startTime5_1a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr5, size5, a5 );
    }
    duration5_1a = 1000 * double( clock() - startTime5_1a ) / CLOCKS_PER_SEC;
    duration5_1a = duration5_1a / counter; 
    timeTaken[4][0] = duration5_1a;
    cout << "a-) " << linearSearch( arr5, size5, a5 ) << endl;
    cout << "Execution took " << duration5_1a << " miliseconds." << endl;
    cout << endl;

    startTime5_1b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr5, size5, b5 );
    }
    duration5_1b = 1000 * double( clock() - startTime5_1b ) / CLOCKS_PER_SEC;
    duration5_1b = duration5_1b / counter; 
    timeTaken[4][1] = duration5_1b;
    cout << "b-) " << linearSearch( arr5, size5, b5 ) << endl;
    cout << "Execution took " << duration5_1b << " miliseconds." << endl;
    cout << endl;

    startTime5_1c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr5, size5, c5 );
    }
    duration5_1c = 1000 * double( clock() - startTime5_1c ) / CLOCKS_PER_SEC;
    duration5_1c = duration5_1c / counter; 
    timeTaken[4][2] = duration5_1c;
    cout << "c-) " << linearSearch( arr5, size5, c5 ) << endl;
    cout << "Execution took " << duration5_1c << " miliseconds." << endl;
    cout << endl;

    startTime5_1d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr5, size5, d5 );
    }
    duration5_1d = 1000 * double( clock() - startTime5_1d ) / CLOCKS_PER_SEC;
    duration5_1d = duration5_1d / counter; 
    timeTaken[4][3] = duration5_1d;
    cout << "d-) " << linearSearch( arr5, size5, d5 ) << endl;
    cout << "Execution took " << duration5_1d << " miliseconds." << endl;
    cout << endl;


    cout << "Linear Search (recursive) with arr5 size " << size5 << endl;

    startTime5_2a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr5, 0, size5, a5 );
    }
    duration5_2a = 1000 * double( clock() - startTime5_2a ) / CLOCKS_PER_SEC;
    duration5_2a = duration5_2a / counter; 
    timeTaken[4][4] = duration5_2a;
    cout << "a-) " << linearSearch2( arr5, 0, size5, a5 ) << endl;
    cout << "Execution took " << duration5_2a << " miliseconds." << endl;
    cout << endl;

    startTime5_2b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr5, 0, size5, b5 );
    }
    duration5_2b = 1000 * double( clock() - startTime5_2b ) / CLOCKS_PER_SEC;
    duration5_2b = duration5_2b / counter; 
    timeTaken[4][5] = duration5_2b;
    cout << "b-) " << linearSearch2( arr5, 0, size5, b5 ) << endl;
    cout << "Execution took " << duration5_2b << " miliseconds." << endl;
    cout << endl;

    startTime5_2c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr5, 0, size5, c5 );
    }
    duration5_2c = 1000 * double( clock() - startTime5_2c ) / CLOCKS_PER_SEC;
    duration5_2c = duration5_2c / counter; 
    timeTaken[4][6] = duration5_2c;
    cout << "c-) " << linearSearch2( arr5, 0, size5, c5 ) << endl;
    cout << "Execution took " << duration5_2c << " miliseconds." << endl;
    cout << endl;

    startTime5_2d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr5, 0, size5, d5 );
    }
    duration5_2d = 1000 * double( clock() - startTime5_2d ) / CLOCKS_PER_SEC;
    duration5_2d = duration5_2d / counter; 
    timeTaken[4][7] = duration5_2d;
    cout << "d-) " << linearSearch2( arr5, 0, size5, d5 ) << endl;
    cout << "Execution took " << duration5_2d << " miliseconds." << endl;
    cout << endl;


    cout << "Binary Search with arr5 size " << size5 << endl;

    startTime5_3a = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr5, size5, a5 );
    }
    duration5_3a = 1000 * double( clock() - startTime5_3a ) / CLOCKS_PER_SEC;
    duration5_3a = duration5_3a / counter; 
    timeTaken[4][8] = duration5_3a;
    cout << "a-) " << binarySearch( arr5, size5, a5 ) << endl;
    cout << "Execution took " << duration5_3a << " miliseconds." << endl;
    cout << endl;

    startTime5_3b = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr5, size5, b5 );
    }
    duration5_3b = 1000 * double( clock() - startTime5_3b ) / CLOCKS_PER_SEC;
    duration5_3b = duration5_3b / counter; 
    timeTaken[4][9] = duration5_3b;
    cout << "b-) " << binarySearch( arr5, size5, b5 ) << endl;
    cout << "Execution took " << duration5_3b << " miliseconds." << endl;
    cout << endl;

    startTime5_3c = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr5, size5, c5 );
    }
    duration5_3c = 1000 * double( clock() - startTime5_3c ) / CLOCKS_PER_SEC;
    duration5_3c = duration5_3c / counter; 
    timeTaken[4][10] = duration5_3c;
    cout << "c-) " << binarySearch( arr5, size5, c5 ) << endl;
    cout << "Execution took " << duration5_3c << " miliseconds." << endl;
    cout << endl;

    startTime5_3d = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr5, size5, d5 );
    }
    duration5_3d = 1000 * double( clock() - startTime5_3d ) / CLOCKS_PER_SEC;
    duration5_3d = duration5_3d / counter; 
    timeTaken[4][11] = duration5_3d;
    cout << "d-) " << binarySearch( arr5, size5, d5 ) << endl;
    cout << "Execution took " << duration5_3d << " miliseconds." << endl;
    cout << endl;

    cout << "Jump Search with arr5 size " << size5 << endl;

    startTime5_4a = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr5, size5, a5 );
    }
    duration5_4a = 1000 * double( clock() - startTime5_4a ) / CLOCKS_PER_SEC;
    duration5_4a = duration5_4a / counter; 
    timeTaken[4][12] = duration5_4a;
    cout << "a-) " << jumpSearch( arr5, size5, a5 ) << endl;
    cout << "Execution took " << duration5_4a << " miliseconds." << endl;
    cout << endl;

    startTime5_4b = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr5, size5, b5 );
    }
    duration5_4b = 1000 * double( clock() - startTime5_4b ) / CLOCKS_PER_SEC;
    duration5_4b = duration5_4b / counter; 
    timeTaken[4][13] = duration5_4b;
    cout << "b-) " << jumpSearch( arr5, size5, b5 ) << endl;
    cout << "Execution took " << duration5_4b << " miliseconds." << endl;
    cout << endl;

    startTime5_4c = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr5, size5, c5 );
    }
    duration5_4c = 1000 * double( clock() - startTime5_4b ) / CLOCKS_PER_SEC;
    duration5_4c = duration5_4c / counter; 
    timeTaken[4][14] = duration5_4c;
    cout << "c-) " << jumpSearch( arr5, size5, c5 ) << endl;
    cout << "Execution took " << duration5_4c << " miliseconds." << endl;
    cout << endl;

    startTime5_4d = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr5, size5, d5 );
    }
    duration5_4d = 1000 * double( clock() - startTime5_4d ) / CLOCKS_PER_SEC;
    duration5_4d = duration5_4d / counter; 
    timeTaken[4][15] = duration5_4d;
    cout << "d-) " << jumpSearch( arr5, size5, d5 ) << endl;
    cout << "Execution took " << duration5_4d << " miliseconds." << endl;
    cout << endl;
    //------------------------------------------




    // algorithm calls for the arr6 with size6
    cout << "Linear Search (iterative) with arr6 size " << size6 << endl;
    startTime6_1a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr6, size6, a6 );
    }
    duration6_1a = 1000 * double( clock() - startTime6_1a ) / CLOCKS_PER_SEC;
    duration6_1a = duration6_1a / counter; 
    timeTaken[5][0] = duration6_1a;
    cout << "a-) " << linearSearch( arr6, size6, a6 ) << endl;
    cout << "Execution took " << duration6_1a << " miliseconds." << endl;
    cout << endl;

    startTime6_1b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr6, size6, b6 );
    }
    duration6_1b = 1000 * double( clock() - startTime6_1b ) / CLOCKS_PER_SEC;
    duration6_1b = duration6_1b / counter; 
    timeTaken[5][1] = duration6_1b;
    cout << "b-) " << linearSearch( arr6, size6, b6 ) << endl;
    cout << "Execution took " << duration6_1b << " miliseconds." << endl;
    cout << endl;

    startTime6_1c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr6, size6, c6 );
    }
    duration6_1c = 1000 * double( clock() - startTime6_1c ) / CLOCKS_PER_SEC;
    duration6_1c = duration6_1c / counter; 
    timeTaken[5][2] = duration6_1c;
    cout << "c-) " << linearSearch( arr6, size6, c6 ) << endl;
    cout << "Execution took " << duration6_1c << " miliseconds." << endl;
    cout << endl;

    startTime6_1d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr6, size6, d6 );
    }
    duration6_1d = 1000 * double( clock() - startTime6_1d ) / CLOCKS_PER_SEC;
    duration6_1d = duration6_1d / counter; 
    timeTaken[5][3] = duration6_1d;
    cout << "d-) " << linearSearch( arr6, size6, d6 ) << endl;
    cout << "Execution took " << duration6_1d << " miliseconds." << endl;
    cout << endl;


    cout << "Linear Search (recursive) with arr6 size " << size6 << endl;
    
    startTime6_2a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr6, 0, size6, a6 );
    }
    duration6_2a = 1000 * double( clock() - startTime6_2a ) / CLOCKS_PER_SEC;
    duration6_2a = duration6_2a / counter; 
    timeTaken[5][4] = duration6_2a;
    cout << "a-) " << linearSearch2( arr6, 0, size6, a6 ) << endl;
    cout << "Execution took " << duration6_2a << " miliseconds." << endl;
    cout << endl;

    startTime6_2b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr6, 0, size6, b6 );
    }
    duration6_2b = 1000 * double( clock() - startTime6_2b ) / CLOCKS_PER_SEC;
    duration6_2b = duration6_2b / counter; 
    timeTaken[5][5] = duration6_2b;
    cout << "b-) " << linearSearch2( arr6, 0, size6, b6 ) << endl;
    cout << "Execution took " << duration6_2b << " miliseconds." << endl;
    cout << endl;

    startTime6_2c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr6, 0, size6, c6 );
    }
    duration6_2c = 1000 * double( clock() - startTime6_2c ) / CLOCKS_PER_SEC;
    duration6_2c = duration6_2c / counter; 
    timeTaken[5][6] = duration6_2c;
    cout << "c-) " << linearSearch2( arr6, 0, size6, c6 ) << endl;
    cout << "Execution took " << duration6_2c << " miliseconds." << endl;
    cout << endl;

    startTime6_2d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr6, 0, size6, d6 );
    }
    duration6_2d = 1000 * double( clock() - startTime6_2d ) / CLOCKS_PER_SEC;
    duration6_2d = duration6_2d / counter; 
    timeTaken[5][7] = duration6_2d;
    cout << "d-) " << linearSearch2( arr6, 0, size6, d6 ) << endl;
    cout << "Execution took " << duration6_2d << " miliseconds." << endl;
    cout << endl;

    
    cout << "Binary Search with arr6 size " << size6 << endl;
    
    startTime6_3a = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr6, size6, a6 );
    }
    duration6_3a = 1000 * double( clock() - startTime6_3a ) / CLOCKS_PER_SEC;
    duration6_3a = duration6_3a / counter; 
    timeTaken[5][8] = duration6_3a;
    cout << "a-) " << binarySearch( arr6, size6, a6 ) << endl;
    cout << "Execution took " << duration6_3a << " miliseconds." << endl;
    cout << endl;

    startTime6_3b = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr6, size6, b6 );
    }
    duration6_3b = 1000 * double( clock() - startTime6_3b ) / CLOCKS_PER_SEC;
    duration6_3b = duration6_3b / counter; 
    timeTaken[5][9] = duration6_3b;
    cout << "b-) " << binarySearch( arr6, size6, b6 ) << endl;
    cout << "Execution took " << duration6_3b << " miliseconds." << endl;
    cout << endl;

    startTime6_3c = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr6, size6, c6 );
    }
    duration6_3c = 1000 * double( clock() - startTime6_3c ) / CLOCKS_PER_SEC;
    duration6_3c = duration6_3c / counter; 
    timeTaken[5][10] = duration6_3c;
    cout << "c-) " << binarySearch( arr6, size6, c6 ) << endl;
    cout << "Execution took " << duration6_3c << " miliseconds." << endl;
    cout << endl;

    startTime6_3d = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr6, size6, d6 );
    }
    duration6_3d = 1000 * double( clock() - startTime6_3d ) / CLOCKS_PER_SEC;
    duration6_3d = duration6_3d / counter; 
    timeTaken[5][11] = duration6_3d;
    cout << "d-) " << binarySearch( arr6, size6, d6 ) << endl;
    cout << "Execution took " << duration6_3d << " miliseconds." << endl;
    cout << endl;

    cout << "Jump Search with arr6 size " << size6 << endl;
    
    startTime6_4a = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr6, size6, a6 );
    }
    duration6_4a = 1000 * double( clock() - startTime6_4a ) / CLOCKS_PER_SEC;
    duration6_4a = duration6_4a / counter; 
    timeTaken[5][12] = duration6_4a;
    cout << "a-) " << jumpSearch( arr6, size6, a6 ) << endl;
    cout << "Execution took " << duration6_4a << " miliseconds." << endl;
    cout << endl;

    startTime6_4b = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr6, size6, b6 );
    }
    duration6_4b = 1000 * double( clock() - startTime6_4b ) / CLOCKS_PER_SEC;
    duration6_4b = duration6_4b / counter; 
    timeTaken[5][13] = duration6_4b;
    cout << "b-) " << jumpSearch( arr6, size6, b6 ) << endl;
    cout << "Execution took " << duration6_4b << " miliseconds." << endl;
    cout << endl;

    startTime6_4c = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr6, size6, c6 );
    }
    duration6_4c = 1000 * double( clock() - startTime6_4c ) / CLOCKS_PER_SEC;
    duration6_4c = duration6_4c / counter; 
    timeTaken[5][14] = duration6_4c;
    cout << "c-) " << jumpSearch( arr6, size6, c6 ) << endl;
    cout << "Execution took " << duration6_4c << " miliseconds." << endl;
    cout << endl;

    startTime6_4d = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr6, size6, d6 );
    }
    duration6_4d = 1000 * double( clock() - startTime6_4d ) / CLOCKS_PER_SEC;
    duration6_4d = duration6_4d / counter; 
    timeTaken[5][15] = duration6_4d;
    cout << "d-) " << jumpSearch( arr6, size6, d6 ) << endl;
    cout << "Execution took " << duration6_4d << " miliseconds." << endl;
    cout << endl;
    //------------------------------------------




    // algorithm calls for the arr7 with size7
    cout << "Linear Search (iterative) with arr7 size " << size7 << endl;

    startTime7_1a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr7, size7, a7 );
    }
    duration7_1a = 1000 * double( clock() - startTime7_1a ) / CLOCKS_PER_SEC;
    duration7_1a = duration7_1a / counter; 
    timeTaken[6][0] = duration7_1a;
    cout << "a-) " << linearSearch( arr7, size7, a7 ) << endl;
    cout << "Execution took " << duration7_1a << " miliseconds." << endl;
    cout << endl;

    startTime7_1b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr7, size7, b7 );
    }
    duration7_1b = 1000 * double( clock() - startTime7_1b ) / CLOCKS_PER_SEC;
    duration7_1b = duration7_1b / counter; 
    timeTaken[6][1] = duration7_1b;
    cout << "b-) " << linearSearch( arr7, size7, b7 ) << endl;
    cout << "Execution took " << duration7_1b << " miliseconds." << endl;
    cout << endl;

    startTime7_1c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr7, size7, c7 );
    }
    duration7_1c = 1000 * double( clock() - startTime7_1c ) / CLOCKS_PER_SEC;
    duration7_1c = duration7_1c / counter; 
    timeTaken[6][2] = duration7_1c;
    cout << "c-) " << linearSearch( arr7, size7, c7 ) << endl;
    cout << "Execution took " << duration7_1c << " miliseconds." << endl;
    cout << endl;

    startTime7_1d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr7, size7, d7 );
    }
    duration7_1d = 1000 * double( clock() - startTime7_1d ) / CLOCKS_PER_SEC;
    duration7_1d = duration7_1d / counter; 
    timeTaken[6][3] = duration7_1d;
    cout << "d-) " << linearSearch( arr7, size7, d7 ) << endl;
    cout << "Execution took " << duration7_1d << " miliseconds." << endl;
    cout << endl;


    cout << "Linear Search (recursive) with arr7 size " << size7 << endl;

    startTime7_2a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr7, 0, size7, a7 );
    }
    duration7_2a = 1000 * double( clock() - startTime7_2a ) / CLOCKS_PER_SEC;
    duration7_2a = duration7_2a / counter; 
    timeTaken[6][4] = duration7_2a;
    cout << "a-) " << linearSearch2( arr7, 0, size7, a7 ) << endl;
    cout << "Execution took " << duration7_2a << " miliseconds." << endl;
    cout << endl;

    startTime7_2b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr7, 0, size7, b7 );
    }
    duration7_2b = 1000 * double( clock() - startTime7_2b ) / CLOCKS_PER_SEC;
    duration7_2b = duration7_2b / counter; 
    timeTaken[6][5] = duration7_2b;
    cout << "b-) " << linearSearch2( arr7, 0, size7, b7 ) << endl;
    cout << "Execution took " << duration7_2b << " miliseconds." << endl;
    cout << endl;

    startTime7_2c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr7, 0, size7, c7 );
    }
    duration7_2c = 1000 * double( clock() - startTime7_2c ) / CLOCKS_PER_SEC;
    duration7_2c = duration7_2c / counter; 
    timeTaken[6][6] = duration7_2c;
    cout << "c-) " << linearSearch2( arr7, 0, size7, c7 ) << endl;
    cout << "Execution took " << duration7_2c << " miliseconds." << endl;
    cout << endl;

    startTime7_2d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr7, 0, size7, d7 );
    }
    duration7_2c = 1000 * double( clock() - startTime7_2d ) / CLOCKS_PER_SEC;
    duration7_2c = duration7_2d / counter; 
    timeTaken[6][7] = duration7_2d;
    cout << "d-) " << linearSearch2( arr7, 0, size7, d7 ) << endl;
    cout << "Execution took " << duration7_2d << " miliseconds." << endl;
    cout << endl;


    cout << "Binary Search with arr7 size " << size7 << endl;

    startTime7_3a = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr7, size7, a7 );
    }
    duration7_3a = 1000 * double( clock() - startTime7_3a ) / CLOCKS_PER_SEC;
    duration7_3a = duration7_3a / counter; 
    timeTaken[6][8] = duration7_3a;
    cout << "a-) " << binarySearch( arr7, size7, a7 ) << endl;
    cout << "Execution took " << duration7_3a << " miliseconds." << endl;
    cout << endl;

    startTime7_3b = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr7, size7, b7 );
    }
    duration7_3b = 1000 * double( clock() - startTime7_3b ) / CLOCKS_PER_SEC;
    duration7_3b = duration7_3b / counter; 
    timeTaken[6][9] = duration7_3b;
    cout << "b-) " << binarySearch( arr7, size7, b7 ) << endl;
    cout << "Execution took " << duration7_3b << " miliseconds." << endl;
    cout << endl;

    startTime7_3c = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr7, size7, c7 );
    }
    duration7_3c = 1000 * double( clock() - startTime7_3c ) / CLOCKS_PER_SEC;
    duration7_3c = duration7_3b / counter; 
    timeTaken[6][10] = duration7_3c;
    cout << "c-) " << binarySearch( arr7, size7, c7 ) << endl;
    cout << "Execution took " << duration7_3c << " miliseconds." << endl;
    cout << endl;

    startTime7_3d = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr7, size7, d7 );
    }
    duration7_3d = 1000 * double( clock() - startTime7_3d ) / CLOCKS_PER_SEC;
    duration7_3d = duration7_3d / counter; 
    timeTaken[6][11] = duration7_3d;
    cout << "d-) " << binarySearch( arr7, size7, d7 ) << endl;
    cout << "Execution took " << duration7_3d << " miliseconds." << endl;
    cout << endl;


    cout << "Jump Search with arr7 size " << size7 << endl;

    startTime7_4a = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr7, size7, a7 );
    }
    duration7_4a = 1000 * double( clock() - startTime7_4a ) / CLOCKS_PER_SEC;
    duration7_4a = duration7_4a / counter; 
    timeTaken[6][12] = duration7_4a;
    cout << "a-) " << jumpSearch( arr7, size7, a7 ) << endl;
    cout << "Execution took " << duration7_4a << " miliseconds." << endl;
    cout << endl;

    startTime7_4b = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr7, size7, b7 );
    }
    duration7_4b = 1000 * double( clock() - startTime7_4b ) / CLOCKS_PER_SEC;
    duration7_4b = duration7_4b / counter; 
    timeTaken[6][13] = duration7_4b;
    cout << "b-) " << jumpSearch( arr7, size7, b7 ) << endl;
    cout << "Execution took " << duration7_4b << " miliseconds." << endl;
    cout << endl;

    startTime7_4c = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr7, size7, c7 );
    }
    duration7_4c = 1000 * double( clock() - startTime7_4c ) / CLOCKS_PER_SEC;
    duration7_4c = duration7_4c / counter; 
    timeTaken[6][14] = duration7_4c;
    cout << "c-) " << jumpSearch( arr7, size7, c7 ) << endl;
    cout << "Execution took " << duration7_4c << " miliseconds." << endl;
    cout << endl;

    startTime7_4d = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr7, size7, d7 );
    }
    duration7_4d = 1000 * double( clock() - startTime7_4d ) / CLOCKS_PER_SEC;
    duration7_4d = duration7_4d / counter; 
    timeTaken[6][15] = duration7_4d;
    cout << "d-) " << jumpSearch( arr7, size7, d7 ) << endl;
    cout << "Execution took " << duration7_4d << " miliseconds." << endl;
    cout << endl;
    //------------------------------------------





    // algorithm calls for the arr8 with size8
    cout << "Linear Search (iterative) with arr8 size " << size8 << endl;

    startTime8_1a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr8, size8, a8 );
    }
    duration8_1a = 1000 * double( clock() - startTime8_1a ) / CLOCKS_PER_SEC;
    duration8_1a = duration8_1a / counter; 
    timeTaken[7][0] = duration8_1a;
    cout << "a-) " << linearSearch( arr8, size8, a8 ) << endl;
    cout << "Execution took " << duration8_1a << " miliseconds." << endl;
    cout << endl;

    startTime8_1b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr8, size8, b8 );
    }
    duration8_1b = 1000 * double( clock() - startTime8_1b ) / CLOCKS_PER_SEC;
    duration8_1b = duration8_1b / counter; 
    timeTaken[7][1] = duration8_1b;
    cout << "b-) " << linearSearch( arr8, size8, b8 ) << endl;
    cout << "Execution took " << duration8_1b << " miliseconds." << endl;
    cout << endl;

    startTime8_1c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr8, size8, c8 );
    }
    duration8_1c = 1000 * double( clock() - startTime8_1c ) / CLOCKS_PER_SEC;
    duration8_1c = duration8_1c / counter; 
    timeTaken[7][2] = duration8_1c;
    cout << "c-) " << linearSearch( arr8, size8, c8 ) << endl;
    cout << "Execution took " << duration8_1c << " miliseconds." << endl;
    cout << endl;

    startTime8_1d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr8, size8, d8 );
    }
    duration8_1d = 1000 * double( clock() - startTime8_1d ) / CLOCKS_PER_SEC;
    duration8_1d = duration8_1d / counter; 
    timeTaken[7][3] = duration8_1d;
    cout << "d-) " << linearSearch( arr8, size8, d8 ) << endl;
    cout << "Execution took " << duration8_1d << " miliseconds." << endl;
    cout << endl;


    cout << "Linear Search (recursive) with arr8 size " << size8 << endl;

    startTime8_2a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr8, 0, size8, a8 );
    }
    duration8_2a = 1000 * double( clock() - startTime8_2a ) / CLOCKS_PER_SEC;
    duration8_2a = duration8_2a / counter; 
    timeTaken[7][4] = duration8_2a;
    cout << "a-) " << linearSearch2( arr8, 0, size8, a8 ) << endl;
    cout << "Execution took " << duration8_2a << " miliseconds." << endl;
    cout << endl;

    startTime8_2b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr8, 0, size8, b8 );
    }
    duration8_2b = 1000 * double( clock() - startTime8_2b ) / CLOCKS_PER_SEC;
    duration8_2b = duration8_2b / counter; 
    timeTaken[7][5] = duration8_2b;
    cout << "b-) " << linearSearch2( arr8, 0, size8, b8 ) << endl;
    cout << "Execution took " << duration8_2b << " miliseconds." << endl;
    cout << endl;

    startTime8_2c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr8, 0, size8, c8 );
    }
    duration8_2c = 1000 * double( clock() - startTime8_2c ) / CLOCKS_PER_SEC;
    duration8_2c = duration8_2c / counter; 
    timeTaken[7][6] = duration8_2c;
    cout << "c-) " << linearSearch2( arr8, 0, size8, c8 ) << endl;
    cout << "Execution took " << duration8_2c << " miliseconds." << endl;
    cout << endl;

    startTime8_2d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr8, 0, size8, d8 );
    }
    duration8_2d = 1000 * double( clock() - startTime8_2d ) / CLOCKS_PER_SEC;
    duration8_2d = duration8_2d / counter; 
    timeTaken[7][7] = duration8_2d;
    cout << "d-) " << linearSearch2( arr8, 0, size8, d8 ) << endl;
    cout << "Execution took " << duration8_2d << " miliseconds." << endl;
    cout << endl;


    cout << "Binary Search with arr8 size " << size8 << endl;

    startTime8_3a = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr8, size8, a8 );
    }
    duration8_3a = 1000 * double( clock() - startTime8_3a ) / CLOCKS_PER_SEC;
    duration8_3a = duration8_3a / counter; 
    timeTaken[7][8] = duration8_3a;
    cout << "a-) " << binarySearch( arr8, size8, a8 ) << endl;
    cout << "Execution took " << duration8_3a << " miliseconds." << endl;
    cout << endl;
    
    startTime8_3b = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr8, size8, b8 );
    }
    duration8_3b = 1000 * double( clock() - startTime8_3b ) / CLOCKS_PER_SEC;
    duration8_3b = duration8_3b / counter; 
    timeTaken[7][9] = duration8_3b;
    cout << "b-) " << binarySearch( arr8, size8, b8 ) << endl;
    cout << "Execution took " << duration8_3b << " miliseconds." << endl;
    cout << endl;

    startTime8_3c = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr8, size8, c8 );
    }
    duration8_3c = 1000 * double( clock() - startTime8_3c ) / CLOCKS_PER_SEC;
    duration8_3c = duration8_3c / counter; 
    timeTaken[7][10] = duration8_3c;
    cout << "c-) " << binarySearch( arr8, size8, c8 ) << endl;
    cout << "Execution took " << duration8_3c << " miliseconds." << endl;
    cout << endl;

    startTime8_3d = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr8, size8, d8 );
    }
    duration8_3d = 1000 * double( clock() - startTime8_3d ) / CLOCKS_PER_SEC;
    duration8_3d = duration8_3d / counter; 
    timeTaken[7][11] = duration8_3d;
    cout << "d-) " << binarySearch( arr8, size8, d8 ) << endl;
    cout << "Execution took " << duration8_3d << " miliseconds." << endl;
    cout << endl;


    cout << "Jump Search with arr8 size " << size8 << endl;

    startTime8_4a = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr8, size8, a8 );
    }
    duration8_4a = 1000 * double( clock() - startTime8_4a ) / CLOCKS_PER_SEC;
    duration8_4a = duration8_4a / counter; 
    timeTaken[7][12] = duration8_4a;
    cout << "a-) " << jumpSearch( arr8, size8, a8 ) << endl;
    cout << "Execution took " << duration8_4a << " miliseconds." << endl;
    cout << endl;

    startTime8_4b = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr8, size8, b8 );
    }
    duration8_4b = 1000 * double( clock() - startTime8_4b ) / CLOCKS_PER_SEC;
    duration8_4b = duration8_4b / counter; 
    timeTaken[7][13] = duration8_4b;
    cout << "b-) " << jumpSearch( arr8, size8, b8 ) << endl;
    cout << "Execution took " << duration8_4b << " miliseconds." << endl;
    cout << endl;

    startTime8_4c = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr8, size8, c8 );
    }
    duration8_4c = 1000 * double( clock() - startTime8_4c ) / CLOCKS_PER_SEC;
    duration8_4c = duration8_4c / counter; 
    timeTaken[7][14] = duration8_4c;
    cout << "c-) " << jumpSearch( arr8, size8, c8 ) << endl;
    cout << "Execution took " << duration8_4c << " miliseconds." << endl;
    cout << endl;

    startTime9_4d = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr8, size8, d8 );
    }
    duration8_4d = 1000 * double( clock() - startTime8_4c ) / CLOCKS_PER_SEC;
    duration8_4d = duration8_4c / counter; 
    timeTaken[7][15] = duration8_4d;
    cout << "d-) " << jumpSearch( arr8, size8, d8 ) << endl;
    cout << "Execution took " << duration8_4d << " miliseconds." << endl;
    cout << endl;
    //------------------------------------------



    // algorithm calls for the arr9 with size9
    cout << "Linear Search (iterative) with arr9 size " << size9 << endl;

    startTime9_1a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr9, size9, a9 );
    }
    duration9_1a = 1000 * double( clock() - startTime9_1a ) / CLOCKS_PER_SEC;
    duration9_1a = duration9_1a / counter; 
    timeTaken[8][0] = duration9_1a;
    cout << "a-) " << linearSearch( arr9, size9, a9 ) << endl;
    cout << "Execution took " << duration9_1a << " miliseconds." << endl;
    cout << endl;

    startTime9_1b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr9, size9, b9 );
    }
    duration9_1b = 1000 * double( clock() - startTime9_1b ) / CLOCKS_PER_SEC;
    duration9_1b = duration9_1b / counter; 
    timeTaken[8][1] = duration9_1b;
    cout << "b-) " << linearSearch( arr9, size9, b9 ) << endl;
    cout << "Execution took " << duration9_1b << " miliseconds." << endl;
    cout << endl;

    startTime9_1c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr9, size9, c9 );
    }
    duration9_1c = 1000 * double( clock() - startTime9_1c ) / CLOCKS_PER_SEC;
    duration9_1c = duration9_1c / counter; 
    timeTaken[8][2] = duration9_1c;
    cout << "c-) " << linearSearch( arr9, size9, c9 ) << endl;
    cout << "Execution took " << duration9_1c << " miliseconds." << endl;
    cout << endl;

    startTime9_1d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr9, size9, d9 );
    }
    duration9_1d = 1000 * double( clock() - startTime9_1d ) / CLOCKS_PER_SEC;
    duration9_1d = duration9_1d / counter; 
    timeTaken[8][3] = duration9_1d;
    cout << "d-) " << linearSearch( arr9, size9, d9 ) << endl;
    cout << "Execution took " << duration9_1d << " miliseconds." << endl;
    cout << endl;


    cout << "Linear Search (recursive) with arr9 size " << size9 << endl;

    startTime9_2a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr9, 0, size9, a9 );
    }
    duration9_2a = 1000 * double( clock() - startTime9_2a ) / CLOCKS_PER_SEC;
    duration9_2a = duration9_2a / counter; 
    timeTaken[8][4] = duration9_2a;
    cout << "a-) " << linearSearch2( arr9, 0, size9, a9 ) << endl;
    cout << "Execution took " << duration9_2a << " miliseconds." << endl;
    cout << endl;

    startTime9_2b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr9, 0, size9, b9 );
    }
    duration9_2b = 1000 * double( clock() - startTime9_2b ) / CLOCKS_PER_SEC;
    duration9_2b = duration9_2b / counter; 
    timeTaken[8][5] = duration9_2b;
    cout << "b-) " << linearSearch2( arr9, 0, size9, b9 ) << endl;
    cout << "Execution took " << duration9_2b << " miliseconds." << endl;
    cout << endl;

    startTime9_2c = clock(); 
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr9, 0, size9, c9 );
    }
    duration9_2c = 1000 * double( clock() - startTime9_2c ) / CLOCKS_PER_SEC;
    duration9_2c = duration9_2c / counter; 
    timeTaken[8][6] = duration9_2c;
    cout << "c-) " << linearSearch2( arr9, 0, size9, c9 ) << endl;
    cout << "Execution took " << duration9_2c << " miliseconds." << endl;
    cout << endl;

    startTime9_2d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr9, 0, size9, d9 );
    }
    duration9_2d = 1000 * double( clock() - startTime9_2d ) / CLOCKS_PER_SEC;
    duration9_2d = duration9_2d / counter; 
    timeTaken[8][7] = duration9_2d;
    cout << "d-) " << linearSearch2( arr9, 0, size9, d9 ) << endl;
    cout << "Execution took " << duration9_2d << " miliseconds." << endl;
    cout << endl;


    cout << "Binary Search with arr9 size " << size9 << endl;

    startTime9_3a = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr9, size9, a9 );
    }
    duration9_3a = 1000 * double( clock() - startTime9_3a ) / CLOCKS_PER_SEC;
    duration9_3a = duration9_3a / counter; 
    timeTaken[8][8] = duration9_3a;
    cout << "a-) " << binarySearch( arr9, size9, a9 ) << endl;
    cout << "Execution took " << duration9_3a << " miliseconds." << endl;
    cout << endl;

    startTime9_3b = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr9, size9, b9 );
    }
    duration9_3b = 1000 * double( clock() - startTime9_3b ) / CLOCKS_PER_SEC;
    duration9_3b = duration9_3b / counter; 
    timeTaken[8][9] = duration9_3b;
    cout << "b-) " << binarySearch( arr9, size9, b9 ) << endl;
    cout << "Execution took " << duration9_3b << " miliseconds." << endl;
    cout << endl;

    startTime9_3c = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr9, size9, c9 );
    }
    duration9_3c = 1000 * double( clock() - startTime9_3c ) / CLOCKS_PER_SEC;
    duration9_3c = duration9_3c / counter; 
    timeTaken[8][10] = duration9_3c;
    cout << "c-) " << binarySearch( arr9, size9, c9 ) << endl;
    cout << "Execution took " << duration9_3c << " miliseconds." << endl;
    cout << endl;

    startTime9_3d = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr9, size9, d9 );
    }
    duration9_3d = 1000 * double( clock() - startTime9_3d ) / CLOCKS_PER_SEC;
    duration9_3d = duration9_3d / counter; 
    timeTaken[8][11] = duration9_3d;
    cout << "d-) " << binarySearch( arr9, size9, d9 ) << endl;
    cout << "Execution took " << duration9_3d << " miliseconds." << endl;
    cout << endl;


    cout << "Jump Search with arr9 size " << size9 << endl;

    startTime9_4a = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr9, size9, a9 );
    }
    duration9_4a = 1000 * double( clock() - startTime9_4a ) / CLOCKS_PER_SEC;
    duration9_4a = duration9_4a / counter; 
    timeTaken[8][12] = duration9_4a;
    cout << "a-) " << jumpSearch( arr9, size9, a9 ) << endl;
    cout << "Execution took " << duration9_4a << " miliseconds." << endl;
    cout << endl;

    startTime9_4b = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr9, size9, b9 );
    }
    duration9_4b = 1000 * double( clock() - startTime9_4b ) / CLOCKS_PER_SEC;
    duration9_4b = duration9_4b / counter; 
    timeTaken[8][13] = duration9_4b;
    cout << "b-) " << jumpSearch( arr9, size9, b9 ) << endl;
    cout << "Execution took " << duration9_4b << " miliseconds." << endl;
    cout << endl;

    startTime9_4c = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr9, size9, c9 );
    }
    duration9_4c = 1000 * double( clock() - startTime9_4c ) / CLOCKS_PER_SEC;
    duration9_4c = duration9_4c / counter; 
    timeTaken[8][14] = duration9_4c;
    cout << "c-) " << jumpSearch( arr9, size9, c9 ) << endl;
    cout << "Execution took " << duration9_4c << " miliseconds." << endl;
    cout << endl;

    startTime9_4d = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr9, size9, d9 );
    }
    duration9_4d = 1000 * double( clock() - startTime9_4d ) / CLOCKS_PER_SEC;
    duration9_4d = duration9_4d / counter; 
    timeTaken[8][15] = duration9_4d;
    cout << "d-) " << jumpSearch( arr9, size9, d9 ) << endl;
    cout << "Execution took " << duration9_4d << " miliseconds." << endl;
    cout << endl;

    //------------------------------------------




    // algorithm calls for the arr10 with size10
    cout << "Linear Search (iterative) with arr10 size " << size10 << endl;

    startTime10_1a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr10, size10, a10 );
    }
    duration10_1a = 1000 * double( clock() - startTime10_1a ) / CLOCKS_PER_SEC;
    duration10_1a = duration10_1a / counter; 
    timeTaken[9][0] = duration10_1a;
    cout << "a-) " << linearSearch( arr10, size10, a10 ) << endl;
    cout << "Execution took " << duration10_1a << " miliseconds." << endl;
    cout << endl;

    startTime10_1b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr10, size10, b10 );
    }
    duration10_1b = 1000 * double( clock() - startTime10_1b ) / CLOCKS_PER_SEC;
    duration10_1b = duration10_1b / counter; 
    timeTaken[9][1] = duration10_1b;
    cout << "b-) " << linearSearch( arr10, size10, b10 ) << endl;
    cout << "Execution took " << duration10_1b << " miliseconds." << endl;
    cout << endl;

    startTime10_1c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr10, size10, c10 );
    }
    duration10_1c = 1000 * double( clock() - startTime10_1c ) / CLOCKS_PER_SEC;
    duration10_1c = duration10_1b / counter; 
    timeTaken[9][2] = duration10_1c;
    cout << "c-) " << linearSearch( arr10, size10, c10 ) << endl;
    cout << "Execution took " << duration10_1c << " miliseconds." << endl;
    cout << endl;

    startTime10_1d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch( arr10, size10, d10 );
    }
    duration10_1d = 1000 * double( clock() - startTime10_1d ) / CLOCKS_PER_SEC;
    duration10_1d = duration10_1d / counter; 
    timeTaken[9][3] = duration10_1d;
    cout << "d-) " << linearSearch( arr10, size10, d10 ) << endl;
    cout << "Execution took " << duration10_1d << " miliseconds." << endl;
    cout << endl;


    cout << "Linear Search (recursive) with arr10 size " << size10 << endl;

    startTime10_2a = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr10, 0, size10, a10 );
    }
    duration10_2a = 1000 * double( clock() - startTime10_2a ) / CLOCKS_PER_SEC;
    duration10_2a = duration10_2a / counter; 
    timeTaken[9][4] = duration10_2a;
    cout << "a-) " << linearSearch2( arr10, 0, size10, a10 ) << endl;
    cout << "Execution took " << duration10_2a << " miliseconds." << endl;
    cout << endl;

    startTime10_2b = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr10, 0, size10, b10 );
    }
    duration10_2b = 1000 * double( clock() - startTime10_2b ) / CLOCKS_PER_SEC;
    duration10_2b = duration10_2b / counter; 
    timeTaken[9][5] = duration10_2b;
    cout << "b-) " << linearSearch2( arr10, 0, size10, b10 ) << endl;
    cout << "Execution took " << duration10_2b << " miliseconds." << endl;
    cout << endl;

    startTime10_2c = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr10, 0, size10, c10 );
    }
    duration10_2c = 1000 * double( clock() - startTime10_2c ) / CLOCKS_PER_SEC;
    duration10_2c = duration10_2c / counter; 
    timeTaken[9][6] = duration10_2c;
    cout << "c-) " << linearSearch2( arr10, 0, size10, c10 ) << endl;
    cout << "Execution took " << duration10_2c << " miliseconds." << endl;
    cout << endl;

    startTime10_2d = clock();
    for ( int i = 0; i < counter; i++ ) {
        linearSearch2( arr10, 0, size10, d10 );
    } 
    duration10_2d = 1000 * double( clock() - startTime10_2d ) / CLOCKS_PER_SEC;
    duration10_2d = duration10_2d / counter; 
    timeTaken[9][7] = duration10_2d;
    cout << "d-) " << linearSearch2( arr10, 0, size10, d10 ) << endl;
    cout << "Execution took " << duration10_2c << " miliseconds." << endl;
    cout << endl;


    cout << "Binary Search with arr10 size " << size10 << endl;

    startTime10_3a = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr10, size10, a10 );
    }
    duration10_3a = 1000 * double( clock() - startTime10_3a ) / CLOCKS_PER_SEC;
    duration10_3a = duration10_3a / counter; 
    timeTaken[9][8] = duration10_3a;
    cout << "a-) " << binarySearch( arr10, size10, a10 ) << endl;
    cout << "Execution took " << duration10_3a << " miliseconds." << endl;
    cout << endl;

    startTime10_3b = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr10, size10, b10 );
    }
    duration10_3b = 1000 * double( clock() - startTime10_3b ) / CLOCKS_PER_SEC;
    duration10_3b = duration10_3b / counter; 
    timeTaken[9][9] = duration10_3b;
    cout << "b-) " << binarySearch( arr10, size10, b10 ) << endl;
    cout << "Execution took " << duration10_3b << " miliseconds." << endl;
    cout << endl;

    startTime10_3c = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr10, size10, c10 );
    }
    duration10_3c = 1000 * double( clock() - startTime10_3c ) / CLOCKS_PER_SEC;
    duration10_3c = duration10_3c / counter; 
    timeTaken[9][10] = duration10_3c;
    cout << "c-) " << binarySearch( arr10, size10, c10 ) << endl;
    cout << "Execution took " << duration10_3c << " miliseconds." << endl;
    cout << endl;

    startTime10_3d = clock();
    for ( int i = 0; i < counter; i++ ) {
        binarySearch( arr10, size10, d10 );
    }
    duration10_3d = 1000 * double( clock() - startTime10_3d ) / CLOCKS_PER_SEC;
    duration10_3d = duration10_3d / counter; 
    timeTaken[9][11] = duration10_3d;
    cout << "d-) " << binarySearch( arr10, size10, d10 ) << endl;
    cout << "Execution took " << duration10_3d << " miliseconds." << endl;
    cout << endl;


    cout << "Jump Search with arr10 size " << size10 << endl;

    startTime10_4a = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr10, size10, a10 );
    }
    duration10_4a = 1000 * double( clock() - startTime10_4a ) / CLOCKS_PER_SEC;
    duration10_4a = duration10_4a / counter; 
    timeTaken[9][12] = duration10_4a;
    cout << "a-) " << jumpSearch( arr10, size10, a10 ) << endl;
    cout << "Execution took " << duration10_4a << " miliseconds." << endl;
    cout << endl;

    startTime10_4b = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr10, size10, b10 );
    }
    duration10_4b = 1000 * double( clock() - startTime10_4b ) / CLOCKS_PER_SEC;
    duration10_4b = duration10_4b / counter; 
    timeTaken[9][13] = duration10_4b;
    cout << "b-) " << jumpSearch( arr10, size10, b10 ) << endl;
    cout << "Execution took " << duration10_4b << " miliseconds." << endl;
    cout << endl;

    startTime10_4c = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr10, size10, c10 );
    }
    duration10_4c = 1000 * double( clock() - startTime10_4c ) / CLOCKS_PER_SEC;
    duration10_4c = duration10_4c / counter; 
    timeTaken[9][14] = duration10_4c;
    cout << "c-) " << jumpSearch( arr10, size10, c10 ) << endl;
    cout << "Execution took " << duration10_4c << " miliseconds." << endl;
    cout << endl;

    startTime10_4d = clock();
    for ( int i = 0; i < counter; i++ ) {
        jumpSearch( arr10, size10, d10 );
    }
    duration10_4d = 1000 * double( clock() - startTime10_4d ) / CLOCKS_PER_SEC;
    duration10_4d = duration10_4d / counter; 
    timeTaken[9][15] = duration10_4d;
    cout << "d-) " << jumpSearch( arr10, size10, d10 ) << endl;
    cout << "Execution took " << duration10_4d << " miliseconds." << endl;
    cout << endl;
    //------------------------------------------

    //ofstream fw("C:\\Users\\User\\Desktop\\Sec01_Onur_Ertunc_HW2\\output.txt",std::ofstream::out);
    //if (fw.is_open()) {
    for ( int i = 0; i < 10; i++ ) {
        for ( int j = 0; j < 16; j++ ) {
            cout << timeTaken[i][j] << " ";
        }
        cout << endl;
    }
    //fw.close();
    //}
    return 0;
    
}

// Linear search (iterative implementation) - Algorithm 1
int linearSearch( int* arr, int N, int value ) {

    for ( int i = 0; i < N; i++ ) {
        if ( arr[i] == value ) {
            return i;
        }
    }
    return -1;
}

// Linear search (recursive implementation) - Algorithm 2
int linearSearch2( int* arr, int pos, int N, int value ) {

    if ( pos > N ) {
        return -1;
    }
    if ( arr[pos] == value ) {
        return pos;
    }
    return linearSearch2( arr, pos+1, N, value );
}


// binary search - Algorithm 3
int binarySearch( int* arr, int N, int value ) {
    int low = 0, high = N-1;
    while ( low <= high ) {
        int mid = ( low + high ) / 2;
        if ( arr[mid] < value ) {
            low = mid + 1;
        }
        else if ( arr[mid] > value ) {
            high = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}


// jump search - Algorithm 4
int jumpSearch( int* arr, int N, int value) {

    // Finding the optimum block size
    int m = sqrt(N);

    // finding the block where element is present
    // if it is
    int prev = 0;
    while ( arr[min(m, N)-1] < value ) {
        prev = m; 
        m = m + sqrt(N);
        if ( prev >= N ) {
            return -1;
        }
    }

    // linear search in the block
    while ( arr[prev] < value ) {
        prev++;

        // if we reached next block or the end of array
        if ( prev == min( m, N ) ) {
            return -1;
        }

    }
    if ( arr[prev] == value ) {
        return prev;
    }

    return -1;
}
