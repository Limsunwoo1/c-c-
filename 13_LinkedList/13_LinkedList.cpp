// 13_LinkedList.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

struct LinkedList
{
    Node* head;
    //Node* tail;
    int size;
};

void push_back(LinkedList* list, int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    // linkedlist 노드가 최초로 만들어질대
    if (list->head == nullptr)
    {
        list->head = newNode;
    }
    else // 이미 노드가 존재할때
    {
        Node* pNode = list->head;
        while (nullptr != pNode->next)
        {
            pNode = pNode->next;
        }

        // 마지목 노드의 Next에 새로 생성된 노드를 연결해준다.
        pNode->next = newNode;

        // 새로 생성된 노드의 prev에 마지막 노드를 연결해준다.
        newNode->prev = pNode;
    }

    list->size += 1;
}

void push_front(LinkedList* list, int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    int a;

    // linkedlist 노드가 최초로 만들어질대
    if (list->head == nullptr)
    {
        list->head = newNode;
    }
    else // 이미 노드가 존재할때
    {
        Node* prevHead = list->head;
        list->head = newNode;
        list->head->next = prevHead;
        prevHead->prev = list->head /*newNode*/;
    }

    list->size += 1;
}

void release_Node(Node* node)
{
    if (node == nullptr)
    {
        return;
    }

    release_Node(node->next);
    delete node;
    node = nullptr;
}

void release_list_reculsive(LinkedList* list)
{
    release_Node(list->head);

    list->head->next = nullptr;
    list->head->prev = nullptr;

    list->size = 0;
}

void release_list(LinkedList* list)
{
    Node* pNode = list->head;
    while (nullptr != pNode)
    {
        Node* pNextNode = pNode->next;

        delete pNode;
        pNode = nullptr;

        pNode = pNextNode;
    }

    //Node* temp = list.head;
    //for (int i = 0; i < list.size; i++)
    //{
    //    std::cout << temp->data;
    //    temp = temp->next;
    //}
}

void insertNode(LinkedList* list, int find, int data)
{
    // LIST 비어있을때 HEAD == NULL
    // 맨 마지막 노드에 삽입되었을때

    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    
    if (list->head == nullptr)
    {
        list->head = newNode;
        return;
    }

    Node* pNode = list->head;
    while (pNode != nullptr)
    {
        if (pNode->data == find)
        {
            if (pNode->next == nullptr)
            {
                push_back(list, data);
                break;
            }

            Node* doubleNextNode = pNode->next;

            pNode->next = newNode;
            newNode->prev = pNode;

            newNode->next = doubleNextNode;
            doubleNextNode->prev = newNode;

            break;
        }

        pNode = pNode->next;
    }

    list->size += 1;
}

int main()
{
    // 링크드 리스트의 장점
    // 추가 삽입 삭제가 비번하게 일어날때 배열보다
    // 높은 효율을 제공한다.

    /// <summary>
    /// 스택 으로 할당한 리스트
    /// </summary>
    /// <returns></returns>
    //Node p;
    //Node d;
    //p.next = &d;

    /// <summary>
    /// 힙으로 할당한 리스트
    /// </summary>
    /// <returns></returns>
    //Node* head = nullptr;
    //head = new Node();

    //head->data = 1;
    //head->next = nullptr;

    //head->next = new Node();
    //head->next->data = 2;
    //
    //head->next->next = new Node();
    //head->next->next->data = 3;

    //head->next->next->next = new Node();
    //head->next->next->next->data = 4;

    //Node* temp = head->next->next;

    //head->next->next = new Node();
    //head->next->next->data = 7;
    //head->next->next->next = temp;

    LinkedList list;
    list.head = nullptr;
    list.size = 0;

    push_back(&list, 1);
    push_back(&list, 2);
    push_back(&list, 3);
    push_back(&list, 4);
    insertNode(&list, 2, 7);
    //insertNode(&list, 4, 9);
    
    Node* temp = list.head;
    for (int i = 0; i < list.size;  i++)
    {
        std::cout << temp->data;
        temp = temp->next;
    }

    //push_front(&list, -1);
    //push_front(&list, -2);
    //push_front(&list, -3);
    //push_front(&list, -4);

    //release_list_reculsive(&list);
    release_list(&list);

    Node* pNode = new Node();
    pNode->data = 0;
    pNode->next = nullptr;
    pNode->prev = nullptr;
    //Init(&pNode);

    Node* pNode2 = new Node();
    pNode2->data = 0;
    pNode2->next = nullptr;
    pNode2->prev = nullptr;
    //Init(&pNode2);

    delete pNode;
    pNode = nullptr;

    std::cout << pNode;

    return 0;
}

