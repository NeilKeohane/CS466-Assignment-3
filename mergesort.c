/*
This function uses the mergesort algorithm to sort the first num_elem 
elements of the array arr. If arr is NULL, the function should just return. 
Be aware that the merge step needs to create a deep copy of the array 
before merging them back into the original location.
*/
void mergesort(int *arr, int num_elem){
    return;
}

/*
This function splits the array arr into chunks of chunk_size integers 
(via pointers, not copying) and places them on the task list (see below). 
It then starts thread_ct worker threads (whose opera- tion is described below). 
The main thread waits for the workers to terminate (using pthread_join()). 
It does not do any of the actual sorting (i.e., there are thread_ct + 1 
total threads: thread_ct worker threads and one main thread).
*/
void mt_mergesort(int *arr, int num_elem, int chunk_size, int thread_ct){
    return;
}