/* Given an integer 'N', determine the maximum number of nodes present on 'Nth' level in a binary tree. */

int numberOfNodes(int N){
    return pow(2,N-1);
}