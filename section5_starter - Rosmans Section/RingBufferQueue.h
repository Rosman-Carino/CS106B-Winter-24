#pragma once

class RingBufferQueue {
public:
    /* Creates a new, empty, RingBufferQueue. */
    RingBufferQueue();

    /* Cleans up all memory used by the RingBufferQueue. */
    ~RingBufferQueue();

    /* Enqueues an item. If there is no space left, this function calls
     * error().
     */
    void enqueue(int value);

    /* Looks at, but does not remove, the first element of the queue.
     * If the queue is empty, calls error().
     */
    int peek() const;

    /* Removes and returns the first element of the queue. If the queue
     * is empty, calls error().
     */
    int dequeue();

    /* Returns how many elements are in the queue. */
    int size() const;

    /* Returns whether the queue is empty. */
    bool isEmpty() const;

private:
};
