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
		// AVL Ʈ���� ���̸� ����մϴ�.
		int height(Node* temp)
		{
			int h = 0;
			if (temp != NULL)
			{
				// ��������� ���� Ȥ�� ���������� �˻��մϴ�.
				int left = height(temp->left);
				int right = height(temp->right);
				int maxHeight = max(left, right);
				h = maxHeight + 1;
			}
			return h;
		}
		// �����μ�(������ ����)�� ��ȯ�մϴ�.
		int diff(Node* temp)
		{
			// ���� �ڽ��� ���̿� ������ �ڽ��� ���� ���̸� ��ȯ�մϴ�.
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
			// ���� ����Ʈ�������� ������ �Ǿ� ������ ���� ����Դϴ�.
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
			// ���� Ʈ���� ����� ��
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
			// ũ�ų� ���� ��� ������ ����Ʈ���� �����մϴ�.
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

		// ���� ��ȸ
		void preorder(Node* node)
		{
			if (node == nullptr)
				return;

			cout << node->key << "    ";
			preorder(node->left);
			preorder(node->right);
		}

		//  ���� ��ȸ
		void inorder(Node* node)
		{
			if (node == nullptr)
				return;

			
			inorder(node->left);
			cout << node->key << "    ";
			inorder(node->right);
		}

		//  ���� ��ȸ
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
		// Ž��
		vT findNode(Node* node, kT first)
		{
			// ���� Ʈ���� ����� ��
			if (node->key == first)
			{
				return node->value;
			}
			else if (first < node->key)
			{
				return findNode(node->left, first);
			}
			// ũ�ų� ���� ��� ������ ����Ʈ���� �����մϴ�.
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