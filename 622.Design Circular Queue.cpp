class MyCircularQueue {
    int rear, front;
    int size;
    int *arr;
public:
    MyCircularQueue(int k) {
        front = rear = -1;
        size = k;
        arr = new int[k];
    }
    
    bool enQueue(int value) {
        if ((front == 0 && rear == size-1) ||(rear == (front-1)%(size)))
        {
            return false;
        }
    
        else if (front == -1) 
        {
            front = rear = 0;
            arr[rear] = value;
        }
    
        else if (rear == size-1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
    
        else
        {
            rear++;
            arr[rear] = value;
        }

        return true;
        
    }
    
    bool deQueue() {
        if (front == -1)
        {
            return false;
        }
    
        int data = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size-1)
            front = 0;
        else
            front++;
    
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        else
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        else
        return arr[rear];
    }
  
    bool isEmpty() {
        if (front == -1)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if ((front == 0 && rear == size-1) ||(rear == (front-1)%(size)))
        {
            return true;
        }
        return false;
    }
};