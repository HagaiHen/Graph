#ifndef GRAPH_
#define GRAPH_

typedef struct GRAPH_NODE_ *pnode;

typedef struct edge_ {
    int weight;
    pnode endpoint;
    struct edge_ *next;
} edge, *pedge;


typedef struct GRAPH_NODE_ {
    int node_num;
    int size;
    pedge edges;
    struct GRAPH_NODE_ *next;
} node, *pnode;

//struct Queue {
//    int front, rear, size;
//    int capacity;
//    int *array;
//};

void build_graph_cmd(pnode *head);
void insert_node_cmd(pnode *head);
void delete_node_cmd(pnode *head, int id);

void printGraph_cmd(pnode head);
int getmaxid (pnode *head);
void deleteGraph_cmd(pnode* head);
int shortestPath(pnode* head, int src, int dest, int max);
int TSP_cmd(pnode *head,int array [],int size, int max);
struct Queue *createQueue(int capacity);
void check(pnode *head, int *a, int start, int end, int max);
void swap(int *x, int *y);
int dequeue(struct Queue *queue);
void enqueue(struct Queue *queue, int item);
int isFull(struct Queue *queue);

int isEmpty(struct Queue *queue);
void addEdge(pnode *head, int id, int w, int end);
int caseT(pnode *head);
int caseS(pnode *head);
int caseD(pnode *head);
int caseB(pnode *head);
int caseA(pnode *head);

#endif
