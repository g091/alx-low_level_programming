# C - Search Algorithms README.

### Mandatory Tasks

***0. Write a function that searches for a value in an array of integers using the Linear search algorithm***

	* Prototype : int linear_search(int *array, size_t size, int value);
	* Where array is a pointer to the first element of the array to search in
	* size is the number of elements in array
	* value is the value to search for
	* The function must return the first index where value is located
	* If value is not present in array or if array is NULL, the function must return -1

***1. Write a function that searches for a value in a sorted array of integers using the Binary search algorithm***

	* Prototype : int binary_search(int *array, size_t size, int value);
	* Where array is a pointer to the first element of the array to search in
	* size is the number of elements in array
	* value is the value to search for
	* The function must return the index where value is located
	* Assume that array will be sorted in ascending order
	* Assume that value won’t appear more than once in array
	* If value is not present in array or if array is NULL, the function must return -1
	* Print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)

***2. What is the time complexity (worst case) of a linear search in an array of size n?***

***3. What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?***

***4. What is the time complexity (worst case) of a binary search in an array of size n?***

***5. What is the space complexity (worst case) of a binary search in an array of size n?***

***6. What is the space complexity of this function / algorithm?***

	int **allocate_map(int n, int m)
	{
	     int **map;

	     map = malloc(sizeof(int *) * n);
	     for (size_t i = 0; i < n; i++)
	     {
	          map[i] = malloc(sizeof(int) * m);
	     }
	     return (map);
	}
