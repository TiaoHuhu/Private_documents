#include <stdio.h>
#include <stdlib.h>

// 定义二叉树节点结构体
typedef struct TreeNode {
    int data;               // 存储节点数据
    struct TreeNode *left, *right;  // 指向左右子节点的指针
} TreeNode, *BinaryTree;

// 创建新节点
TreeNode* CreateNode(int value) {
    TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));  // 分配内存
    newNode->data = value;  // 设置节点值
    newNode->left = newNode->right = NULL;  // 初始化左右子节点为空
    return newNode;  // 返回新创建的节点
}

// 建立二叉树（手动输入，非整形字符表示空节点）
BinaryTree BuildTree() {
    int value;
    printf("\t\t\t请输入节点值（输入'0'表示空节点）：");
    scanf(" %d", &value);  // 读取字符，注意前面的空格用于清除输入缓冲区

    if (value == 0) return NULL;  // 如果输入 'N'，返回 NULL，表示空节点

    TreeNode *root = CreateNode(value); // 创建新节点并将字符转换为整型
    printf("\t\t\t左子树：\n");
    root->left = BuildTree();  // 递归创建左子树
    printf("\t\t\t右子树：\n");
    root->right = BuildTree();  // 递归创建右子树
    return root;  // 返回创建的根节点
}

// 销毁二叉树（释放内存）
void DestroyTree(BinaryTree *root) {
    if (*root == NULL) return;  // 如果当前节点为空，直接返回
    DestroyTree(&(*root)->left);  // 递归销毁左子树
    DestroyTree(&(*root)->right);  // 递归销毁右子树
    free(*root);  // 释放当前节点的内存
    *root = NULL;  // 将节点指针设置为空
}

// 前序遍历（递归）
void PreorderTraversal(BinaryTree root) {
    if (root == NULL) return;  // 如果节点为空，返回
    printf("%d ", root->data);  // 访问当前节点
    PreorderTraversal(root->left);  // 遍历左子树
    PreorderTraversal(root->right);  // 遍历右子树
}

// 中序遍历（递归）
void InorderTraversal(BinaryTree root) {
    if (root == NULL) return;  // 如果节点为空，返回
    InorderTraversal(root->left);  // 遍历左子树
    printf("%d ", root->data);  // 访问当前节点
    InorderTraversal(root->right);  // 遍历右子树
}

// 后序遍历（递归）
void PostorderTraversal(BinaryTree root) {
    if (root == NULL) return;  // 如果节点为空，返回
    PostorderTraversal(root->left);  // 遍历左子树
    PostorderTraversal(root->right);  // 遍历右子树
    printf("%d ", root->data);  // 访问当前节点
}

// 层序遍历（使用队列）
void LevelOrderTraversal(BinaryTree root) {
    if (root == NULL) return;  // 如果节点为空，返回

    TreeNode *queue[100];  // 定义队列（数组）来保存节点
    int front = 0, rear = 0;  // 队列的前后指针
    queue[rear++] = root;  // 将根节点加入队列

    while (front != rear) {  // 队列不为空
        TreeNode *node = queue[front++];  // 取出队列头节点
        printf("%d ", node->data);  // 访问节点
        if (node->left) queue[rear++] = node->left;  // 如果有左子节点，加入队列
        if (node->right) queue[rear++] = node->right;  // 如果有右子节点，加入队列
    }
}

// 主菜单
int main() {
    BinaryTree tree = NULL;  // 初始化树为空
    int choice;  // 用户输入的选择

    while (1) {  // 无限循环，直到用户选择退出
        // 打印菜单
        printf("\n\t\t\t*=====计算机2337班第四组=====*\n");
        printf("\t\t\t*       1. 建立二叉树        *\n");
        printf("\t\t\t*       2. 销毁二叉树        *\n");     
        printf("\t\t\t*       3. 前序遍历          *\n");
        printf("\t\t\t*       4. 中序遍历          *\n");
        printf("\t\t\t*       5. 后序遍历          *\n");
        printf("\t\t\t*       6. 层序遍历          *\n");  
        printf("\t\t\t*       0.退出               *\n");  
        printf("\t\t\t*============================*\n\n");
        printf("\t\t\t请输入你的选择：");
        scanf("%d", &choice);  // 读取用户的操作选择

        switch (choice) {  // 根据用户选择执行相应的操作
            case 1:  // 建立二叉树
                printf("\t\t\t建立二叉树：\n");
                tree = BuildTree();  // 调用BuildTree函数建立树
                break;
            case 2:  // 销毁二叉树
                printf("\t\t\t销毁二叉树：\n");
                DestroyTree(&tree);  // 销毁二叉树
                break;
            case 3:  // 前序遍历
                printf("\t\t\t前序遍历：");
                PreorderTraversal(tree);  // 执行前序遍历
                printf("\n");
                break;
            case 4:  // 中序遍历
                printf("\t\t\t中序遍历：");
                InorderTraversal(tree);  // 执行中序遍历
                printf("\n");
                break;
            case 5:  // 后序遍历
                printf("\t\t\t后序遍历：");
                PostorderTraversal(tree);  // 执行后序遍历
                printf("\n");
                break;
            case 6:  // 层序遍历
                printf("\t\t\t层序遍历：");
                LevelOrderTraversal(tree);  // 执行层序遍历
                printf("\n");
                break;
            case 0:  // 退出程序
                printf("\t\t\t程序退出！\n");
                DestroyTree(&tree);  // 程序退出前销毁树
                exit(0);  // 退出程序
            default:  // 处理无效选择
                printf("\t\t\t无效的选择，请重新输入！\n");
        }
        system("pause");  // 暂停程序，等待用户按任意键
        system("cls");  // 清屏
    }
    return 0;
}