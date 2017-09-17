
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void makeTree(treeNode* root, FILE * file);
void t9ToWord(treeNode * node);
void freeAll(treeNode* node);

// Passes in a count of arguments and an array of arguments
// This program creates a tree full of dictionary word, and allows the user use the tree to convert
// t9 sequences to words in the dictionary.
int main (int argc, char * argv[]) {
	if (argc < 2) {
		fprintf(stderr, "Need an input file");
		exit(1);
	}
	//Building the tree:
	treeNode* overallRoot = newNode();
	FILE * input = fopen(argv[1], "r");
	if (input == NULL) {
		fprintf(stderr, "File not found\n");
		exit(1);
	}	
	makeTree(overallRoot, input);
	fclose(input);
	//Searching the tree and interacting with user:
	t9ToWord(overallRoot);
	//freeing all listNodes & treeNodes:
	freeAll(overallRoot);
	return 0;
}


//Passes in a character.
//Converts the corresponding character to its t9 number and returns that int.
int charToInt(char character) {
	int number = -1;
	if (character == 'a' || character == 'b' || character == 'c') {
		number = 0;
	} else if (character == 'd' || character == 'e' || character == 'f') {
		number = 1;
	} else if (character == 'g' || character == 'h' || character == 'i') {
		number = 2;
	} else if (character == 'j' || character == 'k' || character == 'l') {
		number = 3;
	} else if (character == 'm' || character == 'n' || character == 'o') {
		number = 4;
	} else if (character == 'p' || character == 'q' || character == 'r' || character == 's') {
		number = 5;
	} else if (character == 't' || character == 'u' || character == 'v') {
		number = 6;
	} else {
		number = 7;
	}
	return number;
}

// Passes in the file to read from and a treeNode root.
// Creates the tree that allows the user to use for the program.
void makeTree(treeNode* root, FILE * file) {
	char string[100];
	treeNode* temp;
	while (fgets(string, 100, file) != NULL) {// reads through line by line and makes the tree
		listNode * current;
		temp = root;
		for (int i = 0; i < strlen(string) - 1; i++) {
			int index = charToInt(string[i]);
			if (temp->nums[index] == NULL) {
				temp->nums[index] = newNode();
			}
			temp = temp->nums[index];
			if (i == strlen(string) - 2) {
				if (temp->wordList != NULL) {
					current = temp->wordList;
					while (current->next != NULL) {
						current = current->next;
					}
					listNode * list = newList(string);
					current->next = list;
				} else {
					listNode * list = newList(string);
					temp->wordList = list;
				}
			}
		}
	}
}

// Passes in a treeNode node.
// Asks the user for a t9 number sequence. It then converts the sequence to the corresponding word.
// If the user inputs a "#" then the program cycles through the list of words corresponding to the number sequence.
void t9ToWord(treeNode * node) {
	treeNode * temp = node;
	char userInput[100];
	listNode * cur;
	printf("Enter \"exit\" to quit.\n");
	printf("Enter Key Sequence (or \"#\" for next word):\n");
	printf("> ");
	while (fgets(userInput, 100, stdin)) { // asks user for input
		if(strncmp("exit", userInput, 4) == 0){
			exit(1);
		}
		int end = 0;
		temp = node;
		int hashCount = 0;
			if (userInput[0] == '#') {
				if (cur != NULL && cur->next != NULL) {
                        cur = cur->next;		
						printf("    \'%s\'\n", cur->word);
						end = 1;
				} else {
                    if (end != 1) {
						printf("    There are no more T9onyms\n");
						end = 1;
                    }
				}
			} else {
				cur = temp->wordList;
				for (int i = 0; i < strlen(userInput) - 1; i++ ) { // loops through the user input char by char
					if (temp != NULL) {
						if (userInput[i] == '2') {
							temp = temp->nums[0];
						} else if (userInput[i] == '3') {
							temp = temp->nums[1];
						} else if (userInput[i] == '4') {
							temp = temp->nums[2];
						} else if (userInput[i] == '5') {
							temp = temp->nums[3];
						} else if (userInput[i] == '6') {
							temp = temp->nums[4];
						} else if (userInput[i] == '7') {
							temp = temp->nums[5];
						} else if (userInput[i] == '8') {
							temp = temp->nums[6];
						} else if (userInput[i] == '9') {
							temp = temp->nums[7];
						} else if (userInput[i] == '#' && i != 0) {
							if (hashCount == 0) {
								cur = temp->wordList;
                            }
                            hashCount++;
						}
					} else {
						if (end != 1) {
							printf("    Not found in current dictionary.\n");
							end = 1;
						}
					}
				}
			}
            if (userInput[0] != '#') {
            if (hashCount == 0) {
                if (temp != NULL) {
                    cur = temp->wordList;
                    printf("    \'%s\'\n", cur->word);
                    end = 1;
                } else {
                    if (end != 1) {
                        printf("    Not found in current dictionary.\n");
                        end = 1;
                    }
                }
            } else {
                while (hashCount > 0 && cur != NULL && cur->next != NULL) {
                cur = cur->next;
                hashCount--;
                }
            }
            if (hashCount == 0) {
                    if (end != 1) {
                        printf("    \'%s\'\n", cur->word);
                        end = 1;
                    }
            } else {
                if (end != 1) {
                    printf("    There are no more T9onyms\n");
                    end = 1;
                }
            }
            
            }
		printf("Enter Key Sequence (or \"#\" for next word):\n");
		printf("> ");
	}
}	

// Frees the memory allocated to the linked list.
void freeList(listNode* node) {
	if (node->next != NULL) {
		freeList(node->next);
	}
	free(node->word);
	free(node);
}

// Frees the memory allocated to the tree as well as the linked list.
void freeAll(treeNode* node) {
	for (int i = 0; i < 8; i++) {
		if (node->nums[i] != NULL) {
			freeAll(node->nums[i]);
		}
	}
	if(node->wordList != NULL) {
		freeList(node->wordList);
	}
	free(node);
}
