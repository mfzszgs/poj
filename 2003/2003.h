typedef class TreeNode * PtrToNode;

class TreeNode
{
	private:
    	char[20] Name;
	    PtrToNode FirstChild;
	    PtrToNode NextSibling;
	public:
	    bool IsEmpty();
		void Hires(char[] Name);
		static void Fire(char[] Name);
} 
