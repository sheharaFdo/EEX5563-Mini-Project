                                    Multilevel Queue Scheduling Algorithm to solve Starvation

Multilevel queue scheduling is a type of CPU scheduling in which the processes in the ready state are divided into different groups, each group having its own scheduling needs. The ready queue is divided into different queues according to different properties of the process like memory size, process priority, or process type. All the different processes can be implemented in different ways, i.e., each process queue can have a different scheduling algorithm.

The features of a Multilevel Queue(MLQ) CPU Scheduling are as follows:

1. Process Priorities
Priority is given to each process. The highest priority process should be carried out first, and so on.
The process's type, importance, and attributes determine the priority of a process in MLQ CPU scheduling.
For instance, interactive operations, such as user input and output, might be prioritised over batch processes, such as file backups.

2. Various Queues
MLQ scheduling uses numerous queues, each with a different priority level.
Processes with greater priorities are put in queues with higher priority levels.
Processes with lower priorities are put in queues with lower priority levels.

3. Pre-emption Method
Preemption in computing is the act of briefly stopping a running process intending to pick it back up later. 
This ensures that high-priority processes are carried out promptly.

4. Resource Allocation
The process of allocating resources is how a computing system attempts to satisfy an application's hardware needs.
MLQ scheduling ensures that procedures with higher priority levels are executed promptly while allowing lower-priority processes to run when ready.

5. Feedback System
To guarantee that an interactive procedure is completed promptly, its priority may be raised if it has been sitting in a lower-priority queue for a long period.
A feedback mechanism may be used to change the process's priority based on a process's behaviour over time.

    Advantages of Multilevel Queue Scheduling
(a).Multilevel queue scheduling improves the response time of processes by assigning higher priority to interactive processes, which ensures that these processes are executed first before any other processes
(b). Multilevel queue scheduling also improves equality as it makes sure that all processes get a chance of execution regardless of their priority. This is done by dividing the processes into different queues, and each queue has its own priority level set
(c). It helps in reducing starvation which refers to a situation where a process is never able to run because it is always preempted by other higher-priority processes. By assigning lower priority to processes that have been running for a long time, we can reduce the chances of starvation
(d). Multilevel queue scheduling can be customized in order to meet the specific needs of a system. For example, the number of queues and the priority levels of each queue can be adjusted to optimize the performance of the system

    Disadvantages of Multilevel Queue Scheduling
(a). There are chances of starvation for lower-priority processes. If higher-priority processes keep coming, then the lower-priority processes won't get an opportunity to go into the running state
 
(b). Multilevel queue scheduling is inflexible
