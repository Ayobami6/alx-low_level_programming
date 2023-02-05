## Hash Table in C

Hash table is an hash map, that maps keys to values, just like a dictionary in other programming language such as python. It uses hash function to compute the index also called hash code into slots from which desired values can be found. Hash function is used to map data in the hash table.
The hash function is a regular function that takes a string as an arg and return an integer after running an algorthim on the string.

To implement a collision free hash table, we'll need three things:
	>-  Normally distributed hash function
	>- Arrays data structure and 
	>- Linked List

But before we move on to the implementation let's understand collision;
Collision is a situation that occurs when two or more peices of keys ran through the hash function yields the same hash code or index number, hence the index would have already be allocated to the first key:value.

There are couples ways of resolving the collision, but here we'll be using the chaining method which leads the use of data structure linked list.

Ok, thats that.... lets write our hash function

```c
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Typedefs and data Strucures
typedef char *string;

/*Table size, the max number of item we can store in the hash table 
before collision
collision occurs when two pieces of data when ran through 
the hash function yield the same hash code, hence different value 
will  be mapped to the same hash codes or index*/
#define TAB_SIZE 5

/*Hash_function*/
// we need this to generate our hash code which is the key index

unsigned int hash_func(string key){
	unsigned int result =0;
	int index, len = 0;
	len = strlen(key);
	for (int i = 0; i < len; i++){
		result += (key[i]);
	}

	index = result % TAB_SIZE;
	return index;
}

```
