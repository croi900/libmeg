#include "../include/api.h"
#include "../include/memgraph.h"

void add_node(Memnode * n, Memgraph * graph){
    graph->nodes[graph->num_nodes++] = n;
}