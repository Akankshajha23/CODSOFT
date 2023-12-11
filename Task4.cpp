                                            //TASK 4: TO CREATE A CONSOLE BASED TO - DO LIST MANAGER 

#include<iostream>
#include<vector>
using namespace std;

//Will Create a structure for representing a task

struct Task{
    string info;
    bool completed;
};
vector<Task>tasks;        

//Function to display the different functionality of to-do-list manager

void display(){
    cout<<"******************TO-DO-LIST MANAGER*******************"<<endl;
    cout<<"1: Add Task"<<endl;
    cout<<"2: View Tasks"<<endl;
    cout<<"3: Mark as Complete"<<endl;
    cout<<"4: Delete Task"<<endl;
    cout<<"5: Exit"<<endl;
}



//Function to add a task to the to-do list

void addTask(){
    string newTask;
    cout<<"Enter your task";
    getline(cin>>ws,newTask);
    tasks.push_back({newTask,false});
    cout<<"Task Added Successfully!"<<endl;
}

//Function to view all task of the to-do list

void viewTask(){
    if(tasks.empty()){
        cout<<"No Tasks Available"<<endl;
    }
    else{
        cout<<"|| To-Do List ||"<<endl;
        for(int i=0;i<tasks.size();i++){
            string status=tasks[i].completed ? "completed" : "pending";
            cout<<i+1<<": "<<tasks[i].info<<"- "<<status<<endl;
        }
    }
}
void mark_as_completed(){
    int task_num;
    cout<<"Enter the task number you want to mark as completed:"<<endl;
    cin>>task_num;
    if(task_num<=0||task_num>tasks.size()){
        cout<<"You have entered invalid task number"<<endl;
        return;
    }
    else{
        tasks[task_num-1].completed=true;
        cout<<"Task marked as Completed!"<<endl;
    }
}

void deleteTask(){
    int task_num;
    cout<<"Enter the task number you want to delete:"<<endl;
    cin>>task_num;
    if(task_num<=0||task_num>tasks.size()){
        cout<<"You have entered invalid task number"<<endl;
        return;
    }
    else{
        tasks.erase(tasks.begin() + task_num-1);
        cout<<"Task Deleted Successfully!"<<endl;
    }

}

//Main Program
//Vector to store tasks


int main(){
    string name;
    cout<<"Enter Your Name:"<<endl;
    cin>>name;
    cout<<"Welcome "<<name<<" "<<endl;
    int choice;
    do{
        display();
        cout<<"Enter the choice:"<<endl;
        cin>>choice;

        switch(choice){
            case 1:{
                addTask();
                break;
            }
            case 2:{
                viewTask();
                break;
            }
            case 3:{
                mark_as_completed();
                break;
            }
            case 4:{
                deleteTask();
                break;
            }
            case 5:{
                cout<<"See you again!"<<endl;
                break;
            }
            default:{
                cout<<"Invalid Choice!"<<endl;
                break;
            }
        }

    }while(choice!=5);
    return 0;
}