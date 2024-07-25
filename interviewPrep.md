## Event loop

Call Stack:

FILO (First In, Last Out) structure.
Handles execution of code, including variable declarations, function calls, etc.
Example: console.log('Hello'); gets pushed onto the stack and executed immediately.
Web APIs:

For asynchronous tasks like API calls, setTimeout, etc.
When such a task is encountered, it’s moved from the call stack to the Web API environment to wait for completion.
Callback Queue:

Once an asynchronous task completes (e.g., an API call returns data, a timeout finishes), the task’s callback function is pushed to the callback queue.
The callback queue holds tasks waiting to be executed.
Event Loop:

Continuously checks if the call stack is empty.
If the call stack is empty, it pushes the first task from the callback queue onto the call stack for execution.
