//用逆序遍历方式逆序输出链表
//用数组方式逆序输出链表

#include <stdio.h>
#include <stdlib.h>

// Create a node
typedef struct _node{ 
    int data;
    struct _node *next;
}   node;

//Create a linklist head
typedef struct _list{ 
    node* head;
}   list;

void create_list_node(list *pList,int *number);
void print_list_reverse(list *pList);

int main(){ 
    list List;
    List.head = NULL;
    int number = 0;
    int ret = 0;

    do{
        ret = scanf("%d",&number);  //判断是否非法字符，若不是则 ret = 1;
        if(ret == 0 || ret == EOF){
            //printf("%d",ret); //验证一下就知道，非法字符时确实是 ret = 0；
            //fflush(stdin);  //清除输入缓冲区,这个也不行，为啥。。。
            break;
            //continue;     //为什么continue不行？搞不懂
        }
        //printf("%d",ret); //验证确实是 ret = 1；
        if(number != -1){ 
            create_list_node(&List, &number);    
        } else {
            break;
        }
    }
    while(number != -1);    //坑爹错误：-1写成了1，找了一整天才找到

    print_list_reverse(&List);

    return 0;
}

void create_list_node(list* pList, int *number){ 
    node *new = (node*)malloc(sizeof(node));
    new->data = *number;
    new->next = NULL;
    node *last = pList->head;
    if(last){ 
        while(last->next){ 
            last = last->next;
        }
        last->next = new;
    }
        else{ 
        pList->head = new;
        //last = pList->head;   //这句话是多余的，这个函数其实是一次只处理一个数的；
    }
    
    return;
}

void print_list_reverse(list *pList){
    node *pHead = pList->head;
    node *pCur = pHead;
    node *pPre = NULL;
    node *pTail = NULL;

    if (pHead == NULL){ 
        return;
    }
    while(pCur){
        pTail = pCur;
        pCur = pCur->next; 
    }
    while(pTail != pHead){ 
        pCur = pHead;
        while(pCur != pTail){ 
            pPre = pCur;
            pCur = pCur->next;
        }
        printf("%d ",pTail->data);
        pTail = pPre;
    }
    printf("%d ",pHead->data);  //mooc asked the space also in the last number.
    
}

//C语言不支持重载
/*
void print_list_reverse(list *pList){
    node *pHead = pList->head;
    int data[1000] = {0};
    int l = 0;

    for(int i = 0; i < 1000; i++){
        if(!pHead){ //当pHead有值时跳过if
            break;
        }
        data[i] = pHead->data;
        pHead = pHead->next;
        l++;    //最后一个pHead指向的是 NULL，但 l 还是增加了一位，所以后面要减去1；
    }
    for(int i = l-1; i >= 0; i--){
        printf("%d ",data[i]);
    }

    return;
}
*/









