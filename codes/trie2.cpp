#include <bits/stdc++.h>
# define CHAR_TO_INDEX(a)((int)a-(int)'c')	
using namespace std;
struct trieNode {
	trieNode *children[26];
	bool isLeaf;
};
trieNode *getNode(void){
	trieNode *pNode=NULL;
	pNode=new trieNode();
	 if (pNode)
    {
        int i;
 
        pNode->isLeaf = false;
 
        for (i = 0; i < 26; i++)
            pNode->children[i] = NULL;
    }
 
    return pNode;
}

void insert(trieNode *root,char *key){
	int level;
	int length=strlen(key);
	int index;
	trieNode *pCrawl=root;
	for (level = 0; level < length; ++level)
	{
		//cout<<"keylevel"<<key[level];
        index = CHAR_TO_INDEX(key[level]);
        //cout<<index<<endl;
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
 		//cout<<pCrawl->children[index]<<endl;
        pCrawl = pCrawl->children[index];
        
    }
 
    // mark last node as leaf
    pCrawl->isLeaf = true;
}
bool search( trieNode *root,const char *key)
{
    int level;
    int length = strlen(key);
    int index;
     trieNode *pCrawl = root;
 
    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
 
        if (!pCrawl->children[index])
            return false;
 
        pCrawl = pCrawl->children[index];
    }
 
    return (pCrawl != NULL && pCrawl->isLeaf);
}
int main(){
	char keys[][32]={"the", "a", "there", "answer", "any","by", "bye", "their"};
	int size=sizeof(keys)/sizeof(keys[0]);
	//cout<<sizeof(keys[0]);
	trieNode *root=getNode();
	for (int i = 0; i < size; ++i)
	{
		insert(root,keys[i]);
	}
	cout<<search(root,"the");	

}