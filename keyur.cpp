'use strict';
//implement a queue using two stacks

//create a stack data structure
function Stack() {
    var storage = [];

    this.push = function() {
        storage.push.apply(storage, arguments);
    };
    this.pop = function() {
        return storage.pop.apply(storage, arguments);
    };
    this.size = function() {
        return storage.length;
    };
    this.peek = function() {
        return storage;
    };
}

//STACK TESTS
var stack = new Stack();
stack.push(10, 20, 40, 50, 20);
console.log(stack.peek());
stack.pop();
console.log(stack.peek());


function Queue() {
    var inbox = new Stack();
    var outbox = new Stack();

    this.eneque = function() {
        inbox.push.apply(inbox, arguments);
    };
    this.dequeue = function() {
        if (outbox.size() === 0) {
            while (inbox.size())
                outbox.push(inbox.pop());
        }
        return outbox.pop();
    };
    this.size = function(){
      return inbox.size() + outbox.size();
    };
    this.peek = function() {
        return outbox.peek();
    };
}

//QUEUE TESTS
var queue = new Queue();
queue.eneque(10, 20, 30, 40, 50, 70);
console.log(queue.dequeue());
console.log(queue.dequeue());
console.log(queue.peek());
queue.eneque(90, 200, 3000, 420, 510, 170);
console.log('SIZE: ', queue.size());
console.log(queue.dequeue());
console.log(queue.dequeue());
console.log(queue.dequeue());
console.log(queue.dequeue());
console.log(queue.dequeue());
console.log(queue.dequeue());
console.log('SIZE: ', queue.size());
console.log(queue.dequeue());
console.log(queue.dequeue());
console.log(queue.peek());
