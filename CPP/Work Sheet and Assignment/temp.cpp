// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, m1, m2, n, num;

//     cin >> n;
//     int count = 0;
//     for (i = 0; i < n; i++)
//     {
//         cin >> num;
//         count++;
//         if (i == 0)
//         {
//             m1 = num;
//             m2 = num;
//         }
//         else if (num == -1) /* if -1 was read, then terminate the loop. */
//         {
//             break;
//         }
//         else if (num > m1)
//         {
//             m2 = m1;
//             m1 = num;
//         }
//         else if (num > m2)
//         {
//             m2 = num;
//         }
//         else if (count == 1 || count == 2 && m2 == m1){

//         }
//     }
// }
// cout << m2;
// return 0;
// }
// #include <iostream>
// using namespace std;

// void func(int a[]) {
//     cout << sizeof(a) << endl;
// }

// int main() {
//     int a[10];
//     func(a);
// }

// ========================================================

// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *front = NULL;
// struct node *rear = NULL;
// struct node *temp;

// void Insert()
// {
//     int val;
//     cout << "Insert the element in queue : " << endl;
//     cin >> val;
//     if (rear == NULL)
//     {
//         rear = new node;
//         rear->next = NULL;
//         rear->data = val;
//         front = rear;
//     }
//     else
//     {
//         temp = new node;
//         rear->next = temp;
//         temp->data = val;
//         temp->next = NULL;
//         rear = temp;
//     }
// }
// void Delet()
// {
//     temp = front;
//     if (front == NULL)
//     {
//         cout << "Underflow" << endl;
//         return;
//     }
//     else if (temp->next != NULL)
//     {
//         temp = temp->next;
//         cout << "Element deleted from queue is : " << front->data << endl;
//         // free(front);/
//         front = temp;
//     }
//     else
//     {
//         cout << "Element deleted from queue is : " << front->data << endl;
//         // free(front);
//         front = NULL;
//         rear = NULL;
//     }
// }
// void Display()
// {
//     temp = front;
//     if ((front == NULL) && (rear == NULL))
//     {
//         cout << "Queue is empty" << endl;
//         return;
//     }
//     cout << "Queue elements are: ";
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     int ch;
//     cout << "1) Insert element to queue" << endl;
//     cout << "2) Delete element from queue" << endl;
//     cout << "3) Display all the elements of queue" << endl;
//     cout << "4) Exit" << endl;
//     do
//     {
//         cout << "Enter your choice : " << endl;
//         cin >> ch;
//         switch (ch)
//         {
//         case 1:
//             Insert();
//             break;
//         case 2:
//             Delet();
//             break;
//         case 3:
//             Display();
//             break;
//         case 4:
//             cout << "Exit" << endl;
//             break;
//         default:
//             cout << "Invalid choice" << endl;
//         }
//     } while (ch != 4);
//     return 0;
// }
// =============================================
// #include <iostream>
// #include <vector>
// #include <queue>
// #include <stack>
// using namespace std;

// void edge(vector<int> adj[], int u, int v)
// {
//     adj[u].push_back(v);
// }

// //bfs uses queue data structure

// void bfs(int s, vector<int> adj[], bool visit[])
// {
//     //using a queue
//     queue<int> q;
//     q.push(s);
//     visit[s] = true;
//     while (!q.empty())
//     {
//         int u = q.front();
//         cout << u << " ";
//         q.pop();
//         //loop for traverse
//         for (int i = 0; i < adj[u].size(); i++)
//         {
//             if (!visit[adj[u][i]])
//             {
//                 q.push(adj[u][i]);
//                 visit[adj[u][i]] = true;
//             }
//         }
//     }
// }

// //bfs uses queue data structure

// void dfs(int s, vector<int> adj[], bool visit[])
// {

//     //using a stack
//     stack<int> stk;
//         stk.push(s);
//     visit[s] = true;
//     while (!stk.empty())
//     {
//         int u = stk.top();
//         cout << u << " ";
//         stk.pop();
//         //loop for traverse
//         for (int i = 0; i < adj[u].size(); i++)
//         {
//             if (!visit[adj[u][i]])
//             {
//                 stk.push(adj[u][i]);
//                 visit[adj[u][i]] = true;
//             }
//         }
//     }
// }

// //main function

// int main(){
//     vector<int> adj[5];
//     bool visit[5];
//     //initially all node are unvisited
//     for (int i = 0; i < 5; i++){
//         visit[i] = false;
//     }
//     //input for edges
//     edge(adj, 0, 2);
//     edge(adj, 0, 1);
//     edge(adj, 1, 3);
//     edge(adj, 2, 0);
//     edge(adj, 2, 3);
//     edge(adj, 2, 4);
//     cout << "BFS traversal is"
//         << " ";
//     bfs(0, adj, visit); //1 is a starting point
//     cout << endl;
//     for (int i = 0; i < 5; i++){
//         visit[i] = false;
//     }
//     cout << "DFS traversal is"
//         << " ";
//     dfs(0, adj, visit); //1 is a starting point
// }

// =======================================================================================================

#include <iostream>
using namespace std;

class BST
{
	int data;
	BST *left, *right;

public:
	BST();
	BST(int);
	BST* Insert(BST*, int);

	// Inorder traversal.
	void Inorder(BST*);
};

BST ::BST()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}
BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}
BST* BST ::Insert(BST* root, int value)
{
	if (!root)
	{
		return new BST(value);
	}
	if (value > root->data)
	{
		root->right = Insert(root->right, value);
	}
	else
	{
		root->left = Insert(root->left, value);
	}

	return root;
}
void BST ::Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}
int main()
{
	BST b, *root = NULL;
	root = b.Insert(root, 50);
	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);

	b.Inorder(root);
	return 0;
}
