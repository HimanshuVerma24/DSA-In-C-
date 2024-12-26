// Circular Queue

(1) Drawback Using Array :- Space Is Not Used Efficiently. 

(2) When The Front Is Move Forward Then The Space Will Be Free In The Array After The Dequeue.If We Want To Reuse That Space We Will Wait For Reset The Queue. 

(3) Circular Increment Will Be Done By The Modulus Opeartor. 

(4) Increment:- (i) i = i + 1;  <-- (Linear)
                (ii) i = (i+1)%size <-- (Circular) 

(5) In Circular Queue The Elements/Space Are Not Waste Better Memory Utilization.

(6) In Circular Queue Front Is Always Empty. 

(7) In Circular Queue Front Or Rare Will Be 0. -1 Will False The Condition Of IsFull. 