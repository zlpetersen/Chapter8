# Chapter8
#### 0. CandyBar
The `CandyBar` structure contains three members: the brand (`char*`), the weight (`float`), and the calories (`int`). Write a program that uses a function that takes as arguments a reference to `CandyBar`, a pointer-to-`char`, a `double`, and an `int` and uses the last three to set the corresponding members of the structure. The last three arguments should have default values of `"Millenium Munch"`, `2.85`, and `350`. It should also use a function that takes a reference to a `CandyBar` as an argument and displays the contents of the structure.
#### 1. upperCase
Write a function that takes a reference to a `string` object as its paramater and converts the contents of the string uo uppercase:
`
Enter a string (q to quit): go away
GO AWAY
Enter a string (q to quit): Good Grief!
GOOD GRIEF!
Enter a string (q to quit): q
`
#### 2. max5
Write a template function `max5()` that takes as its argument an array of five items of type `T` and returns the largest item in the array. The size is fixed, so it can be hard-coded into the loop.
#### 3. maxN
Write a template functino `maxN()` that takes as its arguments an array of items of type `T` and an `int` representing the number of elements in the array and returns the largest element in the array.
