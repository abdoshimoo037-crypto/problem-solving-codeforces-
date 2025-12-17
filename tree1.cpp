 #include<iostream>
 using namespace std;
 class node {
    public:
    int data ;
    node* left,*right;
    node(int value){
        data=value;
        left=right= NULL;

    }
 };
 class BST{
     public:
     node*root;
     BST(){
        root= NULL;
     }

 };

node* Insert (node*r , int item){
    if(r== NULL){
        node*newnode=new node(item);
        r=newnode;
    }
    else if (item<=r->data){
        r->left=Insert(r->left, item);}
    else{
         r->right=Insert(r->right, item);}

    return r;     
    }    

void Insert (int main){
    root= Insert (root,item)
};
void preorder(node*r){
    if(r==NULL)
    return;
    cout<<r->data<<"\t";
    preorder(r->left);
    preorder(r->right);
}

void inorder(node*r){
    if(r==NULL)
    return;
    preorder(r->left);
    cout<<r->data<<"\t";
    preorder(r->right);
}
void postorder(node*r){
    if(r==NULL)
    return;
    preorder(r->left);
    preorder(r->right);
    cout<<r->data<<"\t";
}

Node* Search(Node* r, int key)
	{
		if (r == NULL)
			return NULL;
		else if (r->data == key)
			return r;
		else if (key < r->data)
			return	Search(r->left, key);
		else
			return Search(r->right, key);
	}

	bool Search(int key)
	{
		Node* result = Search(root, key);

		if (result == NULL)
			return false;
		else
			return true;
	}

	Node* Findmin(Node* r)
	{
		if (r == NULL)
			return NULL;
		else if (r->left == NULL)
			return r;
		else
			return Findmin(r->left);
	}

	Node* Findmax(Node* r)
	{
		if (r == NULL)
			return NULL;
		else if (r->right == NULL)
			return r;
		else
			return Findmax(r->right);
	}

	Node*  Delete(Node* r, int key)
	{
		if (r == NULL) 
			return NULL;
		if (key < r->data) 
			r->left = Delete(r->left, key);
		else if (key > r->data) 
			  r->right =Delete(r->right, key);
		else
		{
			if (r->left == NULL && r->right == NULL) 
				r = NULL;
			else if (r->left != NULL && r->right == NULL) 
			{
				r->data = r->left->data;
				delete r->left;
				r->left = NULL;
			}
			else if (r->left == NULL && r->right != NULL) 
			{
				r->data = r->right->data;
				delete r->right;
				r->right = NULL;
			}
			else
			{
				Node* max = Findmax(r->left);
				r->data = max->data;
			   r->left=	Delete(r->left, max->data);
				
			}

		}
		return r;
	}


int main()
{
	//45, 15, 79, 90, 10, 55, 12, 20, 50
	BST btree;
	btree.Insert(45);
	btree.Insert(15);
	btree.Insert(79);
	btree.Insert(90);
	btree.Insert(10);
	btree.Insert(55);
	btree.Insert(12);
	btree.Insert(20);
	btree.Insert(50);

	cout << " Display the Tree Contenet \n";
	btree.Preorder(btree.root);

	cout << " \n Delete Items \n ";
	Node *result = btree.Delete (btree.root , 12);
	cout << "\n preorder After Delete 12 \n ";
	btree.Preorder(result);

	result = btree.Delete(btree.root, 15);
	cout << "\n preorder After Delete 15 \n ";
	btree.Preorder(result);

	
}