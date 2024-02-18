/*

> Date Created: October 9, 2023
> Author: Ishaan Rastogi
> Purpose: Theory & Concepts
> Operating System: This is only for Windows OS, it may or may not work on other OS

/*

Topic: Hashing & Hash Tables

1. Hashing is the idea of taking a value and being able to output a value that becomes a shortcut to it later.

2. Eg- hashing apple may hash as a value of 1, and berry may be hashed as 2. Therefore, finding apple is as easy as asking the hash algorithm where apple is stored. While not ideal in terms of design, ultimately, putting all a’s in one bucket and b’s in another, this concept of bucketizing hashed values illustrates how you can use this concept: a hashed value can be used to shortcut finding such a value.

3. A hash function is an algorithm that reduces a larger value to something small and predictable. Generally, this function takes in an item you wish to add to your hash table, and returns an integer representing the array index in which the item should be placed.

4. A hash table is a fantastic combination of both arrays and linked lists. When implemented in code, a hash table is an array of pointers to nodes.

The price we pay here is memory.

Topic: Trie

It's a sort of fancier tree and it's short for retrieval, but pronounced as try. So, a trie is a tree, each of whose nodes is an array.

The price we pay here is the same just in above topic that is memory.

*/