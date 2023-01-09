CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
RM=rm -rf
SRC=binary_tree_print.c
BETTY=betty


TARGET0=0-node
SRC0=	0-main.c \
	0-binary_tree_node.c

TARGET1=1-left
SRC1=	1-main.c \
	1-binary_tree_insert_left.c \
	0-binary_tree_node.c

TARGET2=2-right
SRC2=	2-main.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c

TARGET3=3-del
SRC3=	3-main.c \
	3-binary_tree_delete.c \
	0-binary_tree_node.c \
	2-binary_tree_insert_right.c

TARGET4=4-leaf
SRC4=	4-main.c \
	4-binary_tree_is_leaf.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c

TARGET5=5-root
SRC5=	5-main.c \
	5-binary_tree_is_root.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c

TARGET6=6-pre
SRC6=	6-main.c \
	6-binary_tree_preorder.c \
	0-binary_tree_node.c

TARGET7=7-in
SRC7=	7-main.c \
	7-binary_tree_inorder.c \
	0-binary_tree_node.c

TARGET8=8-post
SRC8=	8-main.c \
	8-binary_tree_postorder.c \
	0-binary_tree_node.c

TARGET9=9-height
SRC9=	9-main.c \
	9-binary_tree_height.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c

TARGET10=10-depth
SRC10=	10-main.c \
	10-binary_tree_depth.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c

TARGET11=11-size
SRC11=	11-main.c \
	11-binary_tree_size.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c

TARGET12=12-leaves
SRC12=	12-main.c \
	12-binary_tree_leaves.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c

TARGET13=13-nodes
SRC13=	13-main.c \
	13-binary_tree_nodes.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c

TARGET14=14-balance
SRC14=	14-binary_tree_balance.c \
	14-main.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c \
	1-binary_tree_insert_left.c

TARGET15=15-full
SRC15=	15-binary_tree_is_full.c \
	15-main.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c

TARGET16=16-perfect
SRC16=	16-main.c \
	16-binary_tree_is_perfect.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c

TARGET17=17-sibling
SRC17=	17-main.c \
	17-binary_tree_sibling.c \
	0-binary_tree_node.c

TARGET18=18-uncle
SRC18=	18-main.c \
	18-binary_tree_uncle.c \
	0-binary_tree_node.c

all:	0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18

clean:
	$(RM) *~ \#*\# \.\#* \
		$(TARGET0) $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) \
		$(TARGET5) $(TARGET6) $(TARGET7) $(TARGET8) $(TARGET9) \
		$(TARGET10) $(TARGET11) $(TARGET12) $(TARGET13) $(TARGET14) \
		$(TARGET15) $(TARGET16) $(TARGET17) $(TARGET18)
re:	clean all

0:
	betty 0-binary_tree_node.c
	$(CC) $(CFLAGS) $(SRC) $(SRC0) -o $(TARGET0)

1:
	betty 1-binary_tree_insert_left.c
	$(CC) $(CFLAGS) $(SRC) $(SRC1) -o $(TARGET1)

2:
	betty 2-binary_tree_insert_right.c
	$(CC) $(CFLAGS) $(SRC) $(SRC2) -o $(TARGET2)

3:
	betty 3-binary_tree_delete.c
	$(CC) $(CFLAGS) $(SRC) $(SRC3) -o $(TARGET3)

4:
	betty 4-binary_tree_is_leaf.c
	$(CC) $(CFLAGS) $(SRC) $(SRC4) -o $(TARGET4)

5:
	betty 5-binary_tree_is_root.c
	$(CC) $(CFLAGS) $(SRC) $(SRC5) -o $(TARGET5)

6:
	betty 6-binary_tree_preorder.c
	$(CC) $(CFLAGS) $(SRC) $(SRC6) -o $(TARGET6)

7:
	betty 7-binary_tree_inorder.c
	$(CC) $(CFLAGS) $(SRC) $(SRC7) -o $(TARGET7)

8:
	betty 8-binary_tree_postorder.c
	$(CC) $(CFLAGS) $(SRC) $(SRC8) -o $(TARGET8)

9:
	betty 9-binary_tree_height.c
	$(CC) $(CFLAGS) $(SRC) $(SRC9) -o $(TARGET9)

10:
	betty 10-binary_tree_depth.c
	$(CC) $(CFLAGS) $(SRC) $(SRC10) -o $(TARGET10)

11:
	betty 11-binary_tree_size.c
	$(CC) $(CFLAGS) $(SRC) $(SRC11) -o $(TARGET11)

12:
	betty 12-binary_tree_leaves.c
	$(CC) $(CFLAGS) $(SRC) $(SRC12) -o $(TARGET12)

13:
	betty 13-binary_tree_nodes.c
	$(CC) $(CFLAGS) $(SRC) $(SRC13) -o $(TARGET13)

14:
	betty 14-binary_tree_balance.c
	$(CC) $(CFLAGS) $(SRC) $(SRC14) -o $(TARGET14)

15:
	betty 15-binary_tree_is_full.c
	$(CC) $(CFLAGS) $(SRC) $(SRC15) -o $(TARGET15)

16:
	betty 16-binary_tree_is_perfect.c
	$(CC) $(CFLAGS) $(SRC) $(SRC16) -o $(TARGET16)

17:
	betty 17-binary_tree_sibling.c
	$(CC) $(CFLAGS) $(SRC) $(SRC17) -o $(TARGET17)

18:
	betty 18-binary_tree_uncle.c
	$(CC) $(CFLAGS) $(SRC) $(SRC18) -o $(TARGET18)
