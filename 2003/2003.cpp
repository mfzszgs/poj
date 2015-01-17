#include"2003.h"
bool TreeNode::IsEmpty()
{
	if(FirstChild==NULL && NextSibling==NULL)return 1;
	else return 0;
}
void TreeNode::Hires(char[] Name)
{
	if(FirstChild==NULL)
	{	
		FirstChild = new TreeNode();
		FirstChild.Name=Name;
	}
	else if()

