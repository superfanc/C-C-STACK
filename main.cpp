//
//  main.cpp
//  Stack
//
//  Created by fanaticheng on 2016/10/13.
//  Copyright © 2016年 fanaticheng. All rights reserved.
//
#include "POSTK.hpp"
#include "OOSTK.hpp"
int main(){
    POSTK A;
    POSTK S;
    int option;
    int start=1;
    while(start){
        system("clear");
        printf("\n\n");
        printf("      Menu for  STACK STRUCTURE           \n");
        printf("-------------------------------------------------\n");
        printf("    	  1. POSTKSTACK       2. OOSTKSTACK      \n");
        printf("    	  3. VIRTUALSTACK     4. QUE2S           \n");
        printf("    	  5. QUEIS    	      0. Exit            \n");
        printf("-------------------------------------------------\n");
        printf("    请选择你的操作[0~5]:\n");
        scanf("%d",&option);
        switch(option){
            case 1:{
                int choose;
                int on=1;
                while(on){
                    system("clear");
                    printf("\n\n");
                    printf("      Menu for POSTK STACK STRUCTURE       \n");
                    printf("-------------------------------------------------\n");
                    printf("    	  1. initPOSTK       2. size     \n");
                    printf("    	  3. howMany         4. getelem  \n");
                    printf("    	  5. push            6. pop      \n");
                    printf("    	  7. initPOSTKbyS    8. print    \n");
                    printf("    	  9. assign          10.destroy \n");
                    printf("    	  0. Exit\n");
                    printf("-------------------------------------------------\n");
                    printf("    请选择你的操作[0~10]:\n");
                    scanf("%d",&choose);
                    switch(choose){
                        case 1:{
                            int m;
                            printf("请输入栈的最大元素个数:\n");
                            scanf("%d",&m);
                            initPOSTK(&A, m);
                            if(A.elems)
                                printf("栈创建成功!\n");
                            else
                                printf("栈创建失败!\n");
                            getchar();getchar();
                            break;
                        }
                        case 2:{
                            printf("当前栈的最大容量为:%d\n",size(&A));
                            getchar();getchar();
                            break;
                        }
                        case 3:{
                            printf("当前栈的元素个数为:%d\n",howMany(&A));
                            getchar();getchar();
                            break;
                        }
                        case 4:{
                            int x;
                            printf("输入想要访问的下标x:");
                            scanf("%d",&x);
                            printf("下标%d对应的元素为:%d\n",x,getelem(&A,x));
                            getchar();getchar();
                            break;
                        }
                        case 5:{
                            int e=0;
                            printf("请输入即将入栈的数:");
                            scanf("%d",&e);
                            if(A.pos==A.max)
                                printf("插入失败，栈元素已满\n");
                            else{
                                A=*push(&A, e);
                                printf("入栈成功!\n");
                            }
                            getchar();getchar();
                            break;
                        }
                        case 6:{
                            int elem;
                            A=*pop(&A,elem);
                            printf("出栈的数据为:%d\n",elem);
                            printf("出栈成功!\n");
                            getchar();getchar();
                            break;
                        }
                        case 7:{
                            
                            if(!initPOSTKS(&S))
                                printf("拷贝失败\n");
                            else{
                                initPOSTK(&A, S);
                                printf("栈初始化成功，成功分配储存空间\n");
                            }
                            getchar();getchar();
                            break;
                        }
                        case 8:{
                            print(&A);
                            getchar();getchar();
                            break;
                        }
                        case 9:{
                            if(!initPOSTKS(&S))
                                printf("拷贝失败\n");
                            else{
                                A=*assign(&A, S);
                                printf("拷贝成功，将S的元素成功拷贝\n");
                            }
                            getchar();getchar();
                            break;
                        }
                        case 10:{
                            destroyPOSTK(&A);
                            printf("摧毁栈成功\n");
                            getchar();getchar();
                            break;
                        }
                        case 0:{
                            on=0;
                            break;
                        }
                    }//end of switch
                }//end of while
                printf("欢迎下次测试功能1\n");
                break;
            }//end of case 1
            case 0:{
                start=0;
                break;
            }
            case 2:{
                OOSTK TK1(0);   //防止没有对象
                int choose;
                int on=1;
                while(on){
                    system("clear");
                    printf("\n\n");
                    printf("      Menu for initPOSTK STACK STRUCTURE       \n");
                    printf("-------------------------------------------------\n");
                    printf("    	  1. OOSTK           2. OOSTKbyS     \n");
                    printf("    	  0. Exit\n");
                    printf("-------------------------------------------------\n");
                    printf("    请选择你构造栈的方式[0~2]:\n");
                    scanf("%d",&choose);
                    switch(choose){
                        case 1:{
                            int m;
                            std::cout<<"请输入栈的最大元素个数"<<std::endl;
                            std::cin>>m;
                            OOSTK TK1(m);
                            std::cout<<"栈创建成功"<<std::endl;
                            //下面模块显示对当前栈操作的测试代码
                            int ch;
                            int go=1;
                            while(go){
                                system("clear");
                                printf("\n\n");
                                printf("      Menu for initPOSTK STACK STRUCTURE       \n");
                                printf("-------------------------------------------------\n");
                                printf("    	  1. size            2. howMany     \n");
                                printf("    	  3. getelem         4. push  \n");
                                printf("    	  5. pop             6. print      \n");
                                printf("    	  7. ~OOSTK          0. exit    \n");
                                printf("    请选择你测试的功能[0~7]:\n");
                                scanf("%d",&ch);
                                switch(ch){
                                    case 1:{
                                        std::cout<<"当前栈的最大容量为"<<TK1.size()<<std::endl;
                                        getchar();getchar();
                                        break;
                                    }
                                    case 2:{
                                        std::cout<<"当前栈的元素个数为"<<TK1.howMany()<<std::endl;
                                        getchar();getchar();
                                        break;
                                    }
                                    case 3:{
                                        std::cout<<"输入想要访问的下标x"<<std::endl;
                                        int x;
                                        std::cin>>x;
                                        std::cout<<"下标"<<x<<"对应的元素为:"<<TK1.getelem(x)<<std::endl;
                                        getchar();getchar();
                                        break;
                                    }
                                    case 4:{
                                        std::cout<<"请输入即将入栈的数:"<<std::endl;
                                        int e;
                                        std::cin>>e;
                                        if(TK1.howMany()==TK1.size())
                                            std::cout<<"插入失败，栈已满";
                                        else{
                                            TK1.push(e);
                                            std::cout<<"插入元素成功";
                                        }
                                        getchar();getchar();
                                        break;
                                    }
                                    case 5:{
                                        int e;
                                        TK1.pop(e);
                                        std::cout<<"出栈成功!"<<"出栈元素为:"<<e<<std::endl;
                                        getchar();getchar();
                                        break;
                                    }
                                    case 6:{
                                        TK1.print();
                                        getchar();getchar();
                                        break;
                                    }
                                    case 7:{
                                        TK1.~OOSTK();
                                        if(TK1.size()==0)
                                            std::cout<<"栈销毁成功!"<<std::endl;
                                        else
                                            std::cout<<"栈销毁失败!"<<std::endl;
                                        getchar();getchar();
                                        break;
                                    }
                                    case 0:{
                                        go=0;
                                        break;
                                    }
     
                                }//end of switch
                            }//end of while
                            std::cout<<"OOSTK功能测试完毕!"<<std::endl;
                            break;
                        }//end of case 1
                        case 2:{
                            OOSTK TK2(4);
                            TK2.push(1);
                            TK2.push(2);
                            TK2.push(3);
                            TK2.push(4);  //初始化待拷贝的TK2栈
                            TK1.assign(TK2);  //拷贝
                            std::cout<<"栈拷贝成功"<<std::endl;
                            //下面模块显示对当前栈操作的测试代码
                            int ch;
                            int go=1;
                            while(go){
                                system("clear");
                                printf("\n\n");
                                printf("      Menu for initPOSTK STACK STRUCTURE       \n");
                                printf("-------------------------------------------------\n");
                                printf("    	  1. size            2. howMany     \n");
                                printf("    	  3. getelem         4. push  \n");
                                printf("    	  5. pop             6. print      \n");
                                printf("    	  7. ~OOSTK          0. exit    \n");
                                printf("    请选择你测试的功能[0~7]:\n");
                                scanf("%d",&ch);
                                switch(ch){
                                    case 1:{
                                        std::cout<<"当前栈的最大容量为"<<TK1.size()<<std::endl;
                                        getchar();getchar();
                                        break;
                                    }
                                    case 2:{
                                        std::cout<<"当前栈的元素个数为"<<TK1.howMany()<<std::endl;
                                        getchar();getchar();
                                        break;
                                    }
                                    case 3:{
                                        std::cout<<"输入想要访问的下标x"<<std::endl;
                                        int x;
                                        std::cin>>x;
                                        std::cout<<"下标"<<x<<"对应的元素为:"<<TK1.getelem(x)<<std::endl;
                                        getchar();getchar();
                                        break;
                                    }
                                    case 4:{
                                        std::cout<<"请输入即将入栈的数:"<<std::endl;
                                        int e;
                                        std::cin>>e;
                                        if(TK1.howMany()==TK1.size())
                                            std::cout<<"插入失败，栈已满";
                                        else{
                                            TK1.push(e);
                                            std::cout<<"插入元素成功";
                                        }
                                        getchar();getchar();
                                        break;
                                    }
                                    case 5:{
                                        int e;
                                        TK1.pop(e);
                                        std::cout<<"出栈成功!"<<"出栈元素为:"<<e<<std::endl;
                                        getchar();getchar();
                                        break;
                                    }
                                    case 6:{
                                        TK1.print();
                                        getchar();getchar();
                                        break;
                                    }
                                    case 7:{
                                        TK1.~OOSTK();
                                        if(TK1.size()==0)
                                            std::cout<<"栈销毁成功!"<<std::endl;
                                        else
                                            std::cout<<"栈销毁失败!"<<std::endl;
                                        getchar();getchar();
                                        break;
                                    }
                                    case 0:{
                                        go=0;
                                        break;
                                    }
                                        
                                }//end of switch
                            }//end of while
                            std::cout<<"OOSTK功能测试完毕!"<<std::endl;

                            break;
                        }//end of case 2:OOSTKbyS
                        case 0:{
                            on=0;
                            break;
                        }//end of case 0
                    }//end of switch
                }//end of while
                printf("欢迎下次测试功能2\n");
                break;
            }//end of case 2:OOSTK
            case 3:{
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
        }//end of swith
    }//end of while
    printf("欢迎下次测试本系统\n");
    return 0;
}
