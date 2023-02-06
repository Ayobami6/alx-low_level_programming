#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Typedefs and data Strucures
typedef char *string;

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

/*now we've created how hash_function
*/

/*lets now create the hash_table_create function
to do that we the help of two data structures arrays and 
singly linked list
*/

// Create the hash_table_create function, takes no arg

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


string hash_lookup(hash_ll_array_s *hashtable, string key){
	unsigned int index = hash_func(key);
	hash_node_t *node = hashtable->array[index];
	if (node == NULL)
		return NULL;
	while (node != NULL){
		if(strcmp(node->key, key) == 0){
			return node->value;
		}
		node = node->next;
	}
	return NULL;
}

void hash_table_show(hash_ll_array_s *hashtable){
	for (int i = 0; i < TAB_SIZE; i++){
		hash_node_t *node = hashtable->array[i];
		if (node == NULL)
			continue;
		printf("Index: %d ", i);
		while(node){
			printf("key, value is %s : %s ", node->key, node->value);
			node = node->next;
		}
		printf("\n");
	}

}

void hash_delete(hash_ll_array_s *hashtable){
	hash_node_t *node, *tmp;

	if (hashtable->array == NULL)
	{
		free(hashtable);
		return;
	}

	for (int i = 0; i < TAB_SIZE; i++)
	{
		node = hashtable->array[i];
		// if (node == NULL)
		// {
		// 	free(node);
		// 	free(hashtable);
		// 	return;
		// }
		while (node)
		{
			tmp = node;
			node = node->next;
			// free(tmp->key);
			// free(tmp->value);
			free(tmp);
		}
	}
	free(hashtable->array);
	free(hashtable);
}

int main(void)
{
	int key = 0;
	key = hash_func("Ayo");
	printf(" key for Ayo is :%d\n", key);
	hash_ll_array_s *hashtable = hash_create();
	string keys[5] = {"Nigeria", "Kenya", "Ghana", "UK", "US"};
	string values[5] ={"Abuja", "Nairobi", "Accra", "London", "Washington DC"};
	for (int i = 0; i < 5; i++){
		map_data(hashtable, keys[i], values[i]);
	}
	printf("hash for US is %d\n", hash_func("US"));
    hash_table_show(hashtable);
    hash_delete(hashtable);
	return 0;
}
