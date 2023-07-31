CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
DEBUG = -g
HEADER = binary_trees.h
PRINT = binary_tree_print.c

all: t0 t1 t2 t3 t4 t5 t6 t7 t8 t9 t10 t11 t12 t13 t14 t15 t16 t17 t18

betty_all:
	betty $(HEADER) $(ls *.c | grep -v main.c)

t0:
	$(CC) $(CFLAGS) $(PRINT) 0-main.c 0-binary_tree_node.c -o 0-node $(DEBUG)
t1:
	$(CC) $(CFLAGS) $(PRINT) 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left $(DEBUG)
t2:
	$(CC) $(CFLAGS) $(PRINT) 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right $(DEBUG)
t3:
	$(CC) $(CFLAGS) $(PRINT) 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del $(DEBUG)
t4:
	$(CC) $(CFLAGS) $(PRINT) 4-main.c 4-binary_tree_is_leaf.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf $(DEBUG)
t5:
	$(CC) $(CFLAGS) $(PRINT) 5-main.c 5-binary_tree_is_root.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root $(DEBUG)
t6:
	$(CC) $(CGLAGS) $(PRINT) 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre $(DEBUG)
t7:
	$(CC) $(CFLAGS) $(PRINT) 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in $(DEBUG)
t8:
	$(CC) $(CFLAGS) $(PRINT) 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post $(DEBUG)
t9:
	$(CC) $(CFLAGS) $(PRINT) 9-main.c 9-binary_tree_height.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height $(DEBUG)
t10:
	$(CC) $(CFLAGS) $(PRINT) 10-main.c 10-binary_tree_depth.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth $(DEBUG)
t11:
	$(CC) $(CFLAGS) $(PRINT) 11-main.c 11-binary_tree_size.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size $(DEBUG)
t12:
	$(CC) $(CFLAGS) $(PRINT) 12-main.c 12-binary_tree_leaves.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves $(DEBUG)
t13:
	$(CC) $(CFLAGS) $(PRINT) 13-main.c 13-binary_tree_nodes.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes $(DEBUG)
t14:
	$(CC) $(CFLAGS) $(PRINT) 14-main.c 14-binary_tree_balance.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance $(DEBUG)
t15:
	$(CC) $(CFLAGS) $(PRINT) 15-main.c 15-binary_tree_is_full.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full $(DEBUG)
t16:
	$(CC) $(CFLAGS) $(PRINT) 16-main.c 16-binary_tree_is_perfect.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect $(DEBUG)
t17:
	$(CC) $(CFLAGS) $(PRINT) 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling $(DEBUG)
t18:
	$(CC) $(CFLAGS) $(PRINT) 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle $(DEBUG)
