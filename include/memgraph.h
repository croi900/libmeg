#pragma once

#include <stdint.h>

#define MAX_NEURONS 1<<10

#define NOT_LINKED 1<<0
#define LNK_STR_1 1<<1
#define LNK_STR_2 1<<2
#define LNK_STR_3 1<<3
#define LNK_STR_4 1<<4
#define LNK_STR_5 1<<5
#define LNK_STR_6 1<<6
//9 unusued flags
struct Memnode_s{
    uint16_t links[MAX_NEURONS];
};

typedef struct Memnode_s Memnode;

struct Memgraph_s{
    Memnode* nodes[MAX_NEURONS];
    uint64_t num_nodes;
};

typedef struct Memgraph_s Memgraph;