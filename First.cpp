#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <string.h>
using namespace std;

typedef struct data{
	int hour;
	int minute;
}time;

typedef struct node{
	
	int id;//进程编号 
	char name[20];//进程名 
	int good;//优先级 
	time arrive;//到达就绪队列的时间 
	int zx;//执行时间 
	time start;//开始执行时间 
	time finish;//执行完成时间 
	int zz;//周转时间=执行完成时间-到达就绪队列时间 
	float zzxs;//带权周转时间=周转时间/执行时间 
	struct node* next;
	
}Node;

typedef struct Queue{
	
	Node* front = NULL;
	Node* tail = NULL;
	
}Queue;

Queue* init(){
	
	Queue* p = (Queue*)malloc(sizeof(Queue));
	p->front = NULL;
	p->tail = NULL;
	return p;
	
} 
//函数名：timecompare()          参数:tt 当前时间, p 进程到达时间
bool timecompare(time tt,time p){//tt<p(时间没到) false    tt >= p true 
	//函数功能：比较进程到达时间和当前时间，若小于则返回false，否则返回true
	
}
//函数名：timecompare2()          参数:tt 当前时间, p 进程到达时间
bool timecompare2(time tt,time p){//tt<=p(时间没到) false    tt > p true 
	//函数功能：比较进程到达时间和当前时间，若小于等于则返回false，否则返回true
	
}
//函数名：Levelcompare()          参数:p,q 进程
bool Levelcompare(Node* p,Node* q){
	//函数功能：比较p,q的优先级，p的优先级高则返回true，低则返回false，否则比较到达时间，p先或同时到达则返回true，反之则false
	

}
//函数名：LevelSorted()          参数:que 进程队列指针
void LevelSorted(Queue* que){

//函数功能：对进程队列按优先级排序	
	
}

//函数名：ComputeTime()    参数:tt 当前时间的指针,q 当前进程的指针
time ComputeTime(time* tt,Node* q){
	
//函数功能：更新当前时间和进程的各项时间
			
}
//函数名：priority()    参数:que进程队列指针,tt当前时间 n 进程数
Queue* priority(Queue *que,time tt,int n){
	
//函数功能：进行优先级进程调度，并同时更新当前时间。
	
}
//函数名：Print()    参数:que进程队列指针, n 进程数
void Print(Queue* que,int n){
	//函数功能：打印输出进程优先进程调度结果
	
}
//函数名：ScanIn()    参数:wait进程队列指针, n 进程数
time ScanIn(Queue* wait,int n){
	
	//函数功能：输入进程信息，返回最早的进程到达时间
			
}

int main(){
	
	Queue* wait;
	wait = init();
	int flag,n;
	time earlytime;
	
	while(1){
		printf("请输入操作:(1:开始进程;0:结束进程):");
		scanf("%d",&flag);
		if(flag == 0){
			printf("\n操作结束!\n");
			break; 
		} 
		else{
			printf("请输入进程数量:");
			scanf("%d",&n);
			earlytime = ScanIn(wait,n);
			
			LevelSorted(wait);
			wait = priority(wait,earlytime,n);
			Print(wait,n);
			wait = init();
			
		}
	}
	
	return 0;

}