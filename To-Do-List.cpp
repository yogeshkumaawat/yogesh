//To-Do list

#include<iostream>
using namespace std;
#include<vector>
#include<string>

int main() {
    vector<string> toDoList;
    string task;
    int choice, index;

    while (true) {
        cout<<endl<<"------: To-Do List Menu :------"<<endl;
        cout<<"1. Add Task"<<endl;
        cout<<"2. Remove Task"<<endl;
        cout<<"3. View Tasks"<<endl;
        cout<<"4. Exit" << endl;
        cout<<"Enter your choice (1-4): ";
        cin>>choice;
        cin.ignore();

        switch(choice) {
            case 1:
                cout<<"Enter the task name: ";
                getline(cin, task);
                toDoList.push_back(task);
                break;
                
            case 2:
                if(toDoList.empty()) {
                    cout<<"There is no tasks to remove."<<endl;
                }
                
                else {
                    cout<<"Current tasks in list:"<<endl;
                    for(size_t i = 0; i < toDoList.size(); ++i) {
                        cout << i + 1 << ". " << toDoList[i] << endl;
                    }

                    cout<<"Enter the task number which you want to remove: ";
                    cin>>index;
                    cin.ignore();

                    if(index > 0 && index <= static_cast<int>(toDoList.size())) {
                        toDoList.erase(toDoList.begin() + index - 1);
                    }
                    
                    else {
                        cout << "Invalid task number!" << endl;
                    }
                }
                break;

            case 3:
                if(toDoList.empty()) {
                    cout<<"There is no tasks in list to display."<<endl;
                }
                
                else {
                    cout<<"To-Do List is :"<<endl;
                    for(size_t i = 0; i < toDoList.size(); ++i) {
                        cout<<i + 1<<". "<<toDoList[i]<<endl;
                    }
                }
                break;

            case 4:
                cout<<"Exiting program."<<endl;
                return 0;

            default:
                cout<<"Invalid choice. Please select the task number between 1 and 4."<<endl;
        }
    }

    return 0;
}