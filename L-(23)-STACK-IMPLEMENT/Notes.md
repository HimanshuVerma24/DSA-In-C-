// Implementation Using Stack (Array)

(1) Stack Is a Collection Of Elements Following LIFO. Items Can Be Inserted Or Removed Only From One End. 

(2) Fixed Size Array Creation. 

(3) Top Element. 

(4) Rough Idea
    struct stack{
        int size;
        int top;
        int *arr;
    };
    struct stack *s = (struct struct*)malloc(sizeof(struct stack));

    s.size = 80;
    s.top = -1;
    s.arr = (int*)malloc(s.size * sizeof(int));

(5) Most Of Operation Will Complete O(1). 

(6) Top Will Change Its Value Like :- -1 --> 0 --> 1 --> 2 --> 3. 











