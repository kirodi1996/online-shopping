#include <bits/stdc++.h>
#define char_to_index(c)((int)c-(int)'a')
using namespace std;
struct trieNode {
	trieNode *children[26];
	bool isLeaf;
};
trieNode *getNode(void){
	trieNode *pNode=NULL;
	pNode=new trieNode();
	if(pNode){
		pNode->isLeaf=false;
		for (int i = 0; i < 26; ++i)
		{
			pNode->children[i]=NULL;
		}
		
	}
	return pNode;
}
int isItFreeNode(trieNode *pNode)
{
    int i;
    for(i = 0; i < 26; i++)
    {
        if( pNode->children[i] )
            return 0;
    }
 
    return 1;
}
void insert(trieNode *root, char *key){
	int index;
	int level;
	int length=strlen(key);
	trieNode *pNodes=root;
	for ( level = 0; level < length; ++level)
	{
		index=char_to_index(key[level]);
		if(!pNodes->children[index]){
				pNodes->children[index]=getNode();
		}
		pNodes=pNodes->children[index];

	}
	
	pNodes->isLeaf=true;
}
bool search(trieNode *root,const char *keys){
	int length=strlen(keys);
	int index;
	trieNode *p=root;
	for (int i = 0; i < length; ++i)
	{
		index=char_to_index(keys[i]);
		if(!p->children[index]){
			break;
		}
		p=p->children[i];
	}
	return (p!=NULL && p->isLeaf);

}
#define FREE(p) \
    free(p);    \
    p = NULL;
bool deleteHelper(trieNode *pNode,char *key,int level ,int len){
	if(pNode){
		if(level==len){

			if(pNode->isLeaf){

				pNode->isLeaf=false;

				if(isItFreeNode(pNode))
				{
					return true;
				}
				return false;
			}
		}
		else{
			int index=char_to_index(key[level]);
			if(deleteHelper(pNode->children[index],key,level+1,len)){
				FREE(pNode->children[index]);
				return (!pNode->isLeaf && isItFreeNode(pNode) );
			}
		}
	}
	return false;
}
void deletekey(trieNode *root,char *key){
	int len=strlen(key);
	if(len>0){
		deleteHelper(root,key,0,len);
	}
}
int main(){
	char keys[][32]={"the", "a", "there", "answer", "any","by", "bye", "their"};
	int size=sizeof(keys)/sizeof(keys[0]);
	trieNode *root=getNode();
	for (int i = 0; i < size; ++i)
	{
		insert(root,keys[i]);
	}
	cout<<search(root,"the")<<endl;
	deletekey(root,keys[0]);
	cout<<search(root,"the")<<endl;
}