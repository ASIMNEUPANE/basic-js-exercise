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

## React lifeCycle

> Mounting- Birth of the component
> Update - Growth of the component
> Unmount - Death of the component

## Methods in react component lifeCycle

1. render() method is used to render html of the component in react.this method is required class based component to render the dom.it runs during the mounting and updating of the component, render() method should be pure ie you cannot modify the state inside it.

2. componentDidMount() method runs after the component is output has been rendered to the dom. like to[ api fetching,state set ,asyn method used]

3. componentDidUpdate() method is invoked as soon as the updating happens. the most common use case for the componentDidCUpdate() method is updating the DOM in response to prop or state changes.

4.componentWIllUnMount() lifecycle method is called just befor the component is unmounted and destrory .Usually used to perform cleanups.

## React virtual dom
react has it own virtual dom where they have a component in like tree structure where it only update the components whichis changed. unlike og dom which reload whole page and updated it.

  reconciliation: The algorith react uses to diff one tree with another to determine which parts to be changes.

  Reconciliation is the algorithm behind what is popularly understood as the "Virtual Dom"

why to use key in the looping fn like .map ?  because fiber the new algo in react if we want to improve the proformance of the list than used keys.. although without key its works not not efficieant.

## Fiber
what can be done with fiber
.pause work and come back to it later .
.assign priority to different work.
.reuse previously completed work.
.abort work if its no longer needed.


useCallback hooks is used to memoize/cache the fn , this is use where we know that the fn can called multiple time . like password generator and there is special charc, number add .

useMemo is a React Hook that lets you cache the result of a calculation between re-renders.
