 #ifndef MONTY_H                                                                 
  2 #define MONTY_H                                                                 
  3                                                                                 
  4 /**                                                                             
  5  * struct stack_s - doubly linked list representation of a stack (or queue)     
  6  * @n: integer                                                                  
  7  * @prev: points to the previous element of the stack (or queue)                
  8  * @next: points to the next element of the stack (or queue)                    
  9  *                                                                              
 10  * Description: doubly linked list node structure                               
 11  * for stack, queues, LIFO, FIFO                                                
 12  */                                                                             
 13 typedef struct stack_s                                                          
 14 {                                                                               
 15         int n;                                                                  
 16         struct stack_s *prev;                                                   
 17         struct stack_s *next;                                                   
 18 } stack_t;                                                                      
 19                                                                                 
 20                                                                                 
 21 /**                                                                             
 22  * struct instruction_s - opcode and its function                               
 23  * @opcode: the opcode                                                          
 24  * @f: function to handle the opcode                                            
 25  *                                                                              
 26  * Description: opcode and its function                                         
 27  * for stack, queues, LIFO, FIFO                                                
 28  */                                                                             
 29 typedef struct instruction_s                                                    
 30 {                                                                               
 31         char *opcode;                                                           
 32         void (*f)(stack_t **stack, unsigned int line_number);                   
 33 } instruction_t;                                                                
 34                                                                                 
 35                                                                                 
 36                                                                                 
 37                                                                                 
 38 #endif                                                                          
~            
