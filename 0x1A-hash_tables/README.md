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

int main(void)
{
	// testing our hash function
	int key = 0;
	key = hash_func("Ayo");
	printf(" key for Ayo is :%d\n", key);
	return 0;
}
```
## Output
```bash
 key for Ayo is :2
```

hash create function

```c
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The hash_node for the linked list that will be inserted into the arrays of
// linked list
typedef struct hash_node_p{
	string key;
	string value;
	struct hash_node_p *next;
}hash_node_t;

/*Arrays of linked list struct
*/
typedef struct hash_ll_array_t{
	hash_node_t **array ;// array of the linked list
} hash_ll_array_s;


hash_ll_array_s *hash_create(void){
	hash_ll_array_s *hashtable = malloc(sizeof(hash_ll_array_s)); // creating mem for the arrays of ll
	if (hashtable == NULL)
		return (NULL);
	hashtable->array = malloc(sizeof(hash_node_t *) * TAB_SIZE);  // creating mem for each linked list in the array

	//  now lets make all nodes to null to avoid garbage values 
	for (int i = 0; i < TAB_SIZE; i++){
		hashtable->array[i] = NULL;
	}
	return hashtable;
}

```

function to set the key value pair

```c
hash_node_t *key_value_set(string key, string value){
	hash_node_t *node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = key;
	node->value = value;

	node->next = NULL;
	return node;
}
```
map data function

```c
hash_node_t *key_value_set(string key, string value){
	hash_node_t *node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	// node->key = malloc(strlen(key) + 1);
	// node->value = malloc(strlen(value) + 1);

	node->key = key;
	node->value = value;

	node->next = NULL;
	return node;
}

void map_data(hash_ll_array_s *hashtable, string key, string value){
	unsigned int index = hash_func(key);

	// giving the index to a node 
	hash_node_t *node = hashtable->array[index];

	if (node == NULL) {
		// if null just put key and value
		hashtable->array[index] = key_value_set(key, value);
		return;
	}

	hash_node_t *head;

	/*While the node is not null, that is when the is a collision
	initialize the chaining method of resolving collision
	*/
	while (node != NULL){
		// check if key exist already
		if (strcmp(node->key, key) == 0){
			node->value = value;
			return;
		}
		head = node;
		node = head->next;
	}
	// if no key match 
	head->next = key_value_set(key, value);
}
```
