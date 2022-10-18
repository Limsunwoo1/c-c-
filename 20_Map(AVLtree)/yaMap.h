#pragma once
using namespace std;

namespace ya
{
	template<typename kT, typename vT>
	class map
	{
	public:
		struct Node
		{
			kT key;
			vT value;
			struct Node* left;
			struct Node* right;
		};

	public:
		map()
		{
			mRoot = NULL;
		}
		// AVL 트리의 높이를 출력합니다.
		int height(Node* temp)
		{
			int h = 0;
			if (temp != NULL)
			{
				// 재귀적으로 왼쪽 혹은 오른쪽으로 검색합니다.
				int left = height(temp->left);
				int right = height(temp->right);
				int maxHeight = max(left, right);
				h = maxHeight + 1;
			}
			return h;
		}
		// 균형인수(높이의 차이)를 반환합니다.
		int diff(Node* temp)
		{
			// 왼쪽 자식의 높이와 오른쪽 자식의 높이 차이를 반환합니다.
			int left = height(temp->left);
			int right = height(temp->right);
			int factor = left - right;
			return factor;
		}
		Node* ll(Node* parent)
		{
			Node* temp = nullptr;
			temp = parent->left;
			parent->left = temp->right;
			temp->right = parent;

			return temp;
		}
		Node* rr(Node* parent)
		{
			Node* temp = nullptr;
			temp = parent->right;
			parent->right = temp->left;
			temp->left = parent;

			return temp;
		}
		Node* lr(Node* parent)
		{
			Node* temp = nullptr;
			temp = parent->left;
			parent->left = rr(temp);
			return ll(parent);
		}
		Node* rl(Node* parent)
		{
			Node* temp = nullptr;
			temp = parent->right;
			parent->right = ll(temp);
			return rr(parent);
		}
		Node* balance(Node* temp)
		{
			int factor = diff(temp);
			// 왼쪽 서브트리쪽으로 삽입이 되어 균형이 깨진 경우입니다.
			if (factor > 1)
			{
				//LL
				if (diff(temp->left) > 0)
				{
					temp = ll(temp);
				}
				//LR
				else
				{
					temp = lr(temp);
				}
			}
			else if (factor < -1)
			{
				//RL
				if (diff(temp->right) > 0)
				{
					temp = rl(temp);
				}
				//RR
				else
				{
					temp = rr(temp);
				}
			}

			return temp;
		}
		void insert(std::pair<kT, vT> pair)
		{
			mRoot = insert(mRoot, pair);
		}
		Node* insert(Node* node, std::pair<kT, vT> pair)
		{
			// 현재 트리가 비었을 때
			if (node == NULL)
			{
				node = new Node;
				node->key = pair.first;
				node->value = pair.second;
				node->left = NULL;
				node->right = NULL;

				if (mRoot == nullptr)
					mRoot = node;

				return node;
			}
			else if (pair.first < node->key)
			{
				node->left = insert(node->left, pair);
				node = balance(node);
			}
			// 크거나 같은 경우 오른쪽 서브트리에 삽입합니다.
			else if (pair.first >= node->key)
			{
				node->right = insert(node->right, pair);
				node = balance(node);
			}

			return node;
		}


		void circulateMap()
		{
			postorder(mRoot);
		}

		// 전위 순회
		void preorder(Node* node)
		{
			if (node == nullptr)
				return;

			cout << node->key << "    ";
			preorder(node->left);
			preorder(node->right);
		}

		//  중위 순회
		void inorder(Node* node)
		{
			if (node == nullptr)
				return;

			
			inorder(node->left);
			cout << node->key << "    ";
			inorder(node->right);
		}

		//  후위 순회
		void postorder(Node* node)
		{
			if (node == nullptr)
				return;


			postorder(node->left);
			postorder(node->right);
			cout << node->key << "    ";
		}


		vT find(kT first)
		{
			return findNode(mRoot, first);
		}
		// 탐색
		vT findNode(Node* node, kT first)
		{
			// 현재 트리가 비었을 때
			if (node->key == first)
			{
				return node->value;
			}
			else if (first < node->key)
			{
				return findNode(node->left, first);
			}
			// 크거나 같은 경우 오른쪽 서브트리에 삽입합니다.
			else if (first >= node->key)
			{
				return findNode(node->right, first);
			}
		}

		void delNode(Node* node, kT first)
		{
			if (node->left->key == first)
			{
				delete node->left;
				node->left = nullptr;
			}
			else if (node->right->key == first)
			{
				delete node->right;
				node->right = nullptr;
			}
			else if ( first < node->key)
			{
				delNode(node->left, first);
			}
			else if (first > node->key)
			{
				delNode(node->right, first);
			}
		}

		void deleteNode(kT key)
		{
			delNode(mRoot, key);
		}



	private:
		Node* mRoot;
	};


}