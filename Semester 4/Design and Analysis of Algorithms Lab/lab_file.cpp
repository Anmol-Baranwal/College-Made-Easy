// ========================================  1. QuickSort  ======================================================

// #include<bits/stdc++.h>
// #include<sys/time.h>
// using namespace std;

// void swap(int* a,int* b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

// void generate_number(int a[], int n) {
//     cout<<"The numbers are: \n";
//     for (int i = 0; i < n; i++){
//         a[i] = rand() % 1000;
//         cout<<a[i]<<"  ";
//     }
//     cout<<"\n";
// }

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int partition(int A[], int l, int h)
// {
//     int pivot=A[l]; // pivot element
//     int j=h+1,i=l;
//     do{
//         do{i++;}while(A[i]<=pivot);                  // finding greater element than pivot
//         do{j--;}while(A[j]>pivot);                   // finding smaller element than pivot

//         if(i<j){
//             swap(&A[i],&A[j]);                       
//             // cout<<"\n";
//             // for(int c=l;c<=h;c++){
//             //     cout<<A[c]<<" ";
//             // }
//             // cout<<endl;
//         }
//     }while(i<j);

//     swap(&A[l],&A[j]);
//     // cout<<endl;
//     // for(int c=l;c<=h;c++){
//     //     cout<<A[c]<<" ";
//     // }
//     // cout<<endl;

//     return j;
// }

// void Quicksort(int A[], int l, int h)
// {   
//     if(l<h){
//         int q=partition(A,l,h);
//         Quicksort(A,l,q);      // calling left subarray after partition
//         Quicksort(A,q+1,h);       // calling right subarray after partition
//     }
// }


// int main() {

//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int a[INT16_MAX], i, ch, n;

//     cout<<"Enter the number of the values to be generated\n";
//     cin>>i;
//     generate_number(a,i);
//     Quicksort(a, 0, i - 1);
//     cout<<"\nThe sorted array is: ";
//     for (n = 0; n < i; n++){
//         cout<<a[n]<<"  ";                    
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------------

// int main()
// {
//     cout<<"\n\n";
//     cout<<"Anmol Baranwal -- 2820208 ";
//     cout<<"\n\n";    
//     int n = sizeof(A) / sizeof(A[0]);
//     int A[]={50,70,60,90,40,80,10,20,30};
//     cout<<"\nArray passed: \n";
//     printArray(A, n);                              // call to print array
//     Quicksort(A, 0, n - 1);                        // calling Quicksort
//     cout << "\nArray after partition: \n";
//     printArray(A, n);
//     return 0;
// }



// ========================================  2. MergeSort  ======================================================

// #include<bits/stdc++.h>
// using namespace std;

// void Merge(int A[],int l,int mid,int h)
// {
//     int i=l,j=mid+1,k=l;
//     int B[100];

//     while(i<=mid && j<=h)
//     {
//         if(A[i]<A[j])
//             B[k++]=A[i++];
//         else
//             B[k++]=A[j++];
//     }
//     for(;i<=mid;i++)
//         B[k++]=A[i];
//     for(;j<=h;j++)
//         B[k++]=A[j];

//     for(i=l;i<=h;i++)
//         A[i]=B[i];    
// }


// void recursiveMergeSort(int A[], int l, int h)
// {   
//     int mid;
//     if(l<h){
//         mid=(l+h)/2;
//         recursiveMergeSort(A,l,mid);
//         recursiveMergeSort(A,mid+1,h);
//         Merge(A,l,mid,h);
//     }
// }

// void generate_number(int a[], int n) {

//     cout<<"The numbers are: \n";
//     for (int i = 0; i < n; i++){
//         a[i] = rand() % 1000;
//         cout<<a[i]<<"  ";
//     }
//     cout<<"\n";
// }

// int main() 
// {    
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int a[INT16_MAX], i, ch, n;
//     cout<<"Enter the number of the values to be generated\n";
//     cin>>i;
//     generate_number(a,i);
//     recursiveMergeSort(a, 0, i - 1);
//     cout<<"\nThe sorted array after recursive mergesort is: ";
//     for (n = 0; n < i; n++){
//         cout<<a[n]<<"  ";                    
//     }
//     cout<<"\n";
//     return 0;
// }



// ========================================  3.(a) Topological ordering  ======================================================

// #include<bits/stdc++.h>
// using namespace std;

// int a[10][10], n, indegre[10];
// void find_indegre() {
//     int j, i, sum;
//     for (j = 0; j < n; j++) {
//         sum = 0;
//         for (i = 0; i < n; i++)
//             sum += a[i][j];
//         indegre[j] = sum;
//     }
// }
// void topology() {
//     int i, u, v, t[10], s[10], top = -1, k = 0;
//     find_indegre();
//     for (i = 0; i < n; i++) {
//         if (indegre[i] == 0) s[++top] = i;
//     }
//     while (top != -1) {
//         u = s[top--];
//         t[k++] = u;
//         for (v = 0; v < n; v++) {
//             if (a[u][v] == 1) {
//                 indegre[v]--;
//                 if (indegre[v] == 0) s[++top] = v;
//             }
//         }
//     }
//     cout<<"\n\nThe topological Sequence is:\n";
//     for (i = 0; i < n; i++)
//         cout<<t[i]<<"  ";
// }
// int main() {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int i, j;
//     cout<<"Enter number of jobs:";
//     cin>>n;
//     cout<<"\nEnter the adjacency matrix:\n";
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++)
//             cin>>a[i][j];
//     }
//     topology();
//     cout<<"\n";

//     return 0;
// }



// ========================================  3.(b)  Warshall's algorithm  ======================================================

// #include<bits/stdc++.h>
// using namespace std;

// int a[10][10], n;
// void warshall() {
//     int i, j, k;
//     for (k = 1; k <= n; k++)
//         for (i = 1; i <= n; i++)
//             for (j = 1; j <= n; j++)
//                 if (a[i][j] != 1) {
//                     if (a[i][k] == 1 && a[k][j] == 1)
//                         a[i][j] = 1;
//                 }
// }

// int main() {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int i, j;
//     cout << "Enter no of nodes : ";
//     cin >> n;
//     cout << "Enter adjacency matrix : \n";
//     for (i = 1; i <= n; i++)
//         for (j = 1; j <= n; j++)
//             cin >> a[i][j];
//     warshall();
//     cout << "Transitive closure :\n";
//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n; j++)
//             cout << a[i][j] << "\t";
//         cout << endl;
//     }
//     return 0;
// }




// ========================================  4. 0/1 Knapsack problem using DP  ======================================================

// #include <bits/stdc++.h>
// using namespace std;

// int knapSackRec(int W, int wt[], int val[], int i, int** dp)
// {
// 	if (i < 0)
// 		return 0;
// 	if (dp[i][W] != -1)
// 		return dp[i][W];

// 	if (wt[i] > W) {
// 		dp[i][W] = knapSackRec(W, wt, val, i - 1, dp);
// 		return dp[i][W];
// 	}
// 	else {
// 		dp[i][W] = max(val[i] + knapSackRec(W - wt[i], wt, val, i-1, dp), 
// 				   knapSackRec(W, wt, val, i - 1, dp));
// 		return dp[i][W];
// 	}
// }

// int knapSack(int W, int wt[], int val[], int n)
// {
// 	int** dp;
// 	dp = new int*[n];

// 	for (int i = 0; i < n; i++)
// 		dp[i] = new int[W + 1];

// 	for (int i = 0; i < n; i++)
// 		for (int j = 0; j < W + 1; j++)
// 			dp[i][j] = -1;
// 	return knapSackRec(W, wt, val, n - 1, dp);
// }

// int main()
// {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int n, W;
//     cout<<"\nEnter no of items: \n";
//     cin>>n;
//     cout<<"\nEnter total weight of knapsack: \n";
//     cin>>W;
//     int val[n], wt[n];
//     for(int i=0;i<n;i++){
//         cout<<"\nEnter the value and weight of item "<<i<<" seperated by space: ";
//         cin>>val[i]>>wt[i];
//     }
// 	cout <<"\nFinal value of knapsack is:  "<< knapSack(W, wt, val, n);
// 	return 0;
// }


// ========================================  5. Dijkstra’s algorithm  ======================================================

// #include<bits/stdc++.h>
// using namespace std;
// const int inf = (int)1e9;

// void dijkstra(int n, int source, int cost[10][10], int distance[]) {
//     int i, v, u, visited[10], min, count = 2;
//     for (i = 1; i <= n; i++)
//         visited[i] = 0, distance[i] = cost[source][i];
//     while (count <= n) {
//         min = inf;
//         for (u = 1; u <= n; u++)
//             if (distance[u] < min && !visited[u])
//                 min = distance[u], v = u;
//         visited[v] = 1;
//         count++;
//         for (u = 1; u <= n; u++)
//             if ((distance[v] + cost[v][u] < distance[u]) && !visited[u])
//                 distance[u] = distance[v] + cost[v][u];
//     }
// }
// int main() {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int n, source, i, j, cost[10][10], distance[10];
//     cout << "Enter the number of nodes : ";
//     cin >> n;
//     cout << "Enter the cost matrix :\n";
//     for (i = 1; i <= n; i++)
//         for (j = 1; j <= n; j++) {
//             cin >> cost[i][j];
//             if (cost[i][j] == 0) cost[i][j] = inf;
//         }
//     cout << "Enter the source : ";
//     cin >> source;
//     dijkstra(n, source, cost, distance);
//     cout << "Shortest path from given source are :\n";
//     for (i = 1; i <= n; i++)
//         if (i != source)
//             cout << source << " --> " << i << " : cost = " << distance[i] << endl;
//     return 0;
// }


// ===================================  6. Minimum Spamming Tree using Kruskal algorithm  =========================================

// #include<bits/stdc++.h>
// using namespace std;
// void kruskal(int cost[10][10], int n) {
//     int parent[10], i, j, a, b, u, v, min, count = 1, sum = 0;
//     for (i = 1; i <= n; i++)
//         parent[i] = 0;
//     while (count != n) {
//         min = 9999;
//         for (i = 1; i <= n; i++)
//             for (j = 1; j <= n; j++)
//                 if (cost[i][j] < min) {
//                     min = cost[i][j];
//                     u = a = i;
//                     v = b = j;
//                 }
//         while (parent[u] != 0)
//             u = parent[u];
//         while (parent[v] != 0)
//             v = parent[v];
//         if (u != v) {
//             count++;
//             sum = sum + cost[a][b];
//             cout << "\nEdge (" << a << "," << b << ") : " << cost[a][b];
//             parent[v] = u;
//         }
//         cost[a][b] = cost[b][a] = 9999;
//     }
//     cout << "\n\nWeight of minimum spanning tree = " << sum << "\n\n";
// }
// int main() {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int cost[10][10], i, j, n;
//     cout << "\nEnter the number of vertices : ";
//     cin >> n;
//     cout << "\nEnter the cost matrix : \n";
//     for (i = 1; i <= n; i++)
//         for (j = 1; j <= n; j++)
//             cin >> cost[i][j];
//     kruskal(cost, n);
//     return 0;
// }


// ===================================================  7.(a) BFS  ======================================================

// #include<bits/stdc++.h>
// using namespace std;
// int visited[10];
// void bfs(int n, int a[10][10], int source) {
//     int i, q[10], u, front = 1, rear = 1;
//     visited[source] = 1;
//     q[rear] = source;
//     while (front <= rear) {
//         u = q[front];
//         front++;
//         for (i = 1; i <= n; i++)
//             if (a[u][i] == 1 && visited[i] == 0) {
//                 rear++;
//                 q[rear] = i;
//                 visited[i] = 1;
//             }
//     }
// }
// int main() {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int n, a[10][10], i, j, source;
//     cout << "Enter the number of nodes : ";
//     cin >> n;
//     cout << "\nEnter the adjacency matrix :\n";
//     for (i = 1; i <= n; i++)
//         for (j = 1; j <= n; j++)
//             cin >> a[i][j];
//     cout << "\nEnter the source : ";
//     cin >> source;
//     cout<<endl;
//     for (i = 1; i <= n; i++)
//         visited[i] = 0;
//     bfs(n, a, source);
//     for (i = 1; i <= n; i++) {
//         if (visited[i] == 0)
//             cout << "\nThe node " << i << " is NOT reachable.\n";
//         else
//             cout << "The node " << i << " is reachable.\n";
//     }
//     return 0;
// }


// ========================================  7.(b) DFS  ======================================================

// #include<bits/stdc++.h>
// using namespace std;

// int a[20][20], reach[20], n;
// void dfs(int v) {
//     int i;
//     reach[v] = 1;
//     for (i = 1; i <= n; i++)
//         if (a[v][i] && !reach[i]) {
//             cout<<"\n"<<v<<"->"<<i;
//             dfs(i);
//         }
// }
// int main() {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int i, j, count = 0;
//     cout<<"\nEnter number of vertices:";
//     scanf("%d", & n);
//     for (i = 1; i <= n; i++) {
//         reach[i] = 0;
//         for (j = 1; j <= n; j++)
//             a[i][j] = 0;
//     }
//     cout<<"\n Enter the adjacency matrix:\n";
//     for (i = 1; i <= n; i++)                               
//         for (j = 1; j <= n; j++)
//             scanf("%d", & a[i][j]);
//     dfs(1);
//     printf("\n");
//     for (i = 1; i <= n; i++) {
//         if (reach[i])
//             count++;
//     }
//     if (count == n)
//         cout<<"\n Graph is connected\n";
//     else
//         cout<<"\n Graph is not connected\n";

//     return 0;
// }


// ============================================  8. Solution of the subset  ======================================================

// #include<bits/stdc++.h>
// using namespace std;
// #define MAX 20

// int stk1[MAX];
// int set1[MAX];
// int size;
// int top = -1;
// int c = 1;
// void push(int x) {
//     if (top == MAX - 1) {
//         cout << "No more place";
//         exit(0);
//     } else
//         stk1[++top] = x;
// }
// void pop() {
//     if (top < 0) {
//         cout << "No elements";
//         exit(0);
//     } else
//         top--;
// }
// void display() {
//     cout << "Solution " << c << ":";
//     c++;
//     for (int i = 0; i <= top; i++)
//         cout << stk1[i] << " ";
//     cout << endl;
// }
// int subset(int pos, int sum) {
//     int i;
//     static int foundSoln = 0;
//     if (sum > 0) {
//         for (i = pos; i <= size; i++) {
//             push(set1[i]);
//             subset(i + 1, sum - set1[i]);
//             pop();
//         }
//     }
//     if (sum == 0) {
//         display();
//         foundSoln = 1;
//     }
//     return foundSoln;
// }
// int main() {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int i, sum;
//     cout << "Enter the maximum number of elements:";
//     cin >> size;
//     cout << "Enter the elements:\n";
//     for (i = 1; i <= size; i++)
//         cin >> set1[i];
//     cout << "Enter the required sum:";
//     cin >> sum;
//     cout << "\n";
//     if (!subset(1, sum))
//         cout << "No solution";
//     return 0;
// }


// ============================================  9. Traveling salesman problem  ======================================================

// #include<bits/stdc++.h>
// using namespace std;

// int a[10][10], n, visit[10];
// int cost_opt = 0, cost_apr = 0;
// int least_apr(int c);
// int least_opt(int c);

// void mincost_opt(int city) {
//     int i, ncity;
//     visit[city] = 1;
//     cout<<city<<"-->";
//     ncity = least_opt(city);
//     if (ncity == 999) {
//         ncity = 1;
//         cout<<ncity;
//         cost_opt += a[city][ncity];
//         return;
//     }
//     mincost_opt(ncity);
// }
// void mincost_apr(int city) {
//     int i, ncity;
//     visit[city] = 1;
//     cout<<city<<"-->";
//     ncity = least_apr(city);
//     if (ncity == 999) {
//         ncity = 1;
//         cout<<ncity;
//         cost_apr += a[city][ncity];
//         return;
//     }
//     mincost_apr(ncity);
// }

// int least_opt(int c) {
//     int i, nc = 999;
//     int min = 999, kmin = 999;
//     for (i = 1; i <= n; i++) {
//         if ((a[c][i] != 0) && (visit[i] == 0))
//             if (a[c][i] < min) {
//                 min = a[i][1] + a[c][i];
//                 kmin = a[c][i];
//                 nc = i;
//             }
//     }
//     if (min != 999)
//         cost_opt += kmin;
//     return nc;
// }

// int least_apr(int c) {
//     int i, nc = 999;
//     int min = 999, kmin = 999;
//     for (i = 1; i <= n; i++) {
//         if ((a[c][i] != 0) && (visit[i] == 0))
//             if (a[c][i] < kmin) {
//                 min = a[i][1] + a[c][i];
//                 kmin = a[c][i];
//                 nc = i;
//             }
//     }
//     if (min != 999)
//         cost_apr += kmin;
//     return nc;
// }
// int main() {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int i, j;
//     cout<<"Enter No. of cities:\n";
//     cin>>n;

//     cout<<"Enter the cost matrix\n";
//     for (i = 1; i <= n; i++) {
//         cout<<"Enter elements of row: "<<i<<"\n";
//         for (j = 1; j <= n; j++)
//             cin>>a[i][j];
//         visit[i] = 0;
//     }
//     cout<<"The cost list is \n";
//     for (i = 1; i <= n; i++) {
//         cout<<"\n\n";
//         for (j = 1; j <= n; j++)
//             cout<<"\t"<<a[i][j];
//     }
//     cout<<"\n\n Optimal Solution :\n";
//     cout<<"\n The path is :\n";
//     mincost_opt(1);
//     cout<<"\n Minimum cost:";
//     cout<<cost_opt;

//     cout<<"\n\n Approximated Solution :\n";
//     for (i = 1; i <= n; i++)
//         visit[i] = 0;
//     cout<<"\n  The path is :\n";
//     mincost_apr(1);
//     cout<<"\nMinimum cost:";
//     cout<<cost_apr;
//     cout<<"\n\nError in approximation is approximated solution/optimal solution= "<<(float) cost_apr / cost_opt;

//     return 0;
// }


// -------------------
// above approach is used
// -------------------


// #include<bits/stdc++.h>
// using namespace std;
// #include <iostream>
// #include<iomanip>
// #define MAX 10
// using namespace std;
// int path[MAX];
// static int k=0;
// int count=0;
// int perm[120][7];
// int tourcost[120];
// void swap(int *x,int *y)
// {
//  int temp;
//  temp=*x;
//  *x=*y;
//  *y=temp;
// }
// void DFS(int c,int v[MAX],int g[MAX][MAX],int n)
// {
//  int i;
//  v[c]=1;
//  path[k++]=c;
//  for(i=0;i<n;i++)
//  {
//  if(g[c][i] && !v[i])
//  {
//  DFS(i,v,g,n);
//  }
//  }
// }
// void permute(int a[],int i,int n)
// {
//  int j,k;
//  if(i==n)
//  {
//  for(k=0;k<=n;k++)
//  perm[count][k+1]=a[k];
//  count++;
//  }
//  else
//  {
//  for(j=i;j<=n;j++)
//  {
//  swap((a+i),(a+j));
//  permute(a,i+1,n);
//  swap((a+i),(a+j));
//  }
//  }
// }
// int apptsp(int n,int cost[MAX][MAX])
// {
//  int i,j,u,v,min,excost=0;
//  int sum,k,t[MAX][2],p[MAX],d[MAX],s[MAX],tree[MAX][MAX];
//  int source,count;
//  int visited[MAX]={0};
//  min=999;
//  source=0;
//  for(i=0;i<n;i++)
//  {
//  for(j=0;j<n;j++)
//  {
//  if(cost[i][j]!=0&&cost[i][j]<=min)
//  {
//  min=cost[i][j];
//  source=i;
//  }
//  }
//  }
//  for(i=0;i<n;i++)
//  {
//  d[i]=cost[source][i];
//  s[i]=0;
//  p[i]=source;
//  }
//  s[source]=1;
//  sum=0;
//  k=0;
//  count=0;
//  while(count!=n-1)
//  {
//  min=999;
//  u=-1;
//  for(j=0;j<n;j++)
//  {
//  if(s[j]==0)
//  {
//  if(d[j]<=min)
//  {
//  min=d[j];
//  u=j;
//  }
//  }
//  }
//  t[k][0]=u;
//  t[k][1]=p[u];
//  k++;
//  count++;
//  sum+=cost[u][p[u]];
//  s[u]=1;
//  for(v=0;v<n;v++)
//  {
//  if(s[v]==0&&cost[u][v]<d[v])
//  {
//  d[v]=cost[u][v];
//  p[v]=u;
//  }
//  }
//  }
//  for(i=0;i<n;i++)
//  {
//  for(j=0;j<n;j++)
//  {
//  tree[i][j]=0;
//  }
//  }
//  if(sum>=999)
//  cout<<"\nNo min cost span tree\n";
//  else
//  {
//  for(i=0;i<k;i++)
//  {
//  tree[t[i][0]][t[i][1]]=tree[t[i][1]][t[i][0]]=1;
//  }
//  }
//  DFS(0,visited,tree,n);
//  cout<<"\n\nApproximate cost tour is"<<endl;
//  for(i=0;i<=k;i++)
//  {
//  cout<<path[i]<<" -> ";
//  excost+=cost[path[i]][path[i+1]];
//  }
//  cout<<path[0];
//  excost+=cost[path[i]][path[0]];
//  cout<<"\nCost(Approx):"<<excost;
//  return excost;
// }
// int main(void)
// {
//  int a[MAX][MAX],city[10],fact=1;
// int n;
// cout<<"Enter number of cities:\n";
// cin>>n;
// cout<<"Enter an adjacency matrix:\n";
// for(int i=0;i<n;i++)
// {
// for(int j=0;j<n;j++)
// {
// cin>>a[i][j];
// }
// }
//  int numofcities=n;
//  int intercities=n-1,i,j;
//  int mct=999,mctindex,appmct;
// for(i=0;i<n;i++)
//  city[i]=i+1;
//  permute(city,0,intercities-1);
// for(i=n-1;i>=1;i--)
// fact=fact*i;
//  for(i=0;i<fact;i++)
//  {
//  for(j=0;j<n;j++)
//  {
//  tourcost[i]+=a[perm[i][j]][perm[i][j+1]];
//  }
//  if(mct>tourcost[i])
//  {
//  mct=tourcost[i];
//  mctindex=i;
//  }
//  }
//  cout<<"The exact cost tour is:\n";
//  for(i=0;i<numofcities;i++)
//  cout<<perm[mctindex][i]<<" -> ";
//  cout<<perm[mctindex][i];
//  cout<<"\nCost(Exact): "<<mct;
//  appmct=apptsp(numofcities,a);
//  cout<<"\n\nError: "<<appmct-mct;
//  cout<<"\nAccuracy ratio: "<<(float)appmct/mct;
//  cout<<"\nApproximate tour is ";
//  cout<<(((float)appmct/mct)-1)*100<<"% longer than optimal tour\n";
//  return 0;
// }



// ============================================  10. MST using prim's algorithm  ======================================================


// #include<bits/stdc++.h>
// using namespace std;
// int c[10][10], n;
// void prims() {
//     int visited[10], i, j, u, v, min, count = 1, sum = 0;
//     for (i = 1; i <= n; i++)
//         visited[i] = 0;
//     visited[1] = 1;
//     while (count != n) {
//         min = 9999;
//         for (i = 1; i <= n; i++)
//             for (j = 1; j <= n; j++)
//                 if (visited[i] == 1)
//                     if (c[i][j] < min) {
//                         min = c[i][j];
//                         u = i;
//                         v = j;
//                     }
//         if (visited[v] != 1) {
//             cout << "\nWeight of Edge (" << u << "," << v << ") : " << min;
//             visited[v] = 1;
//             count++;
//             sum = sum + min;
//         }
//         c[u][v] = c[v][u] = 9999;
//     }
//     cout << "\nWeight of minimum spanning tree using prim's algorithm = " << sum << endl;
// }
// int main() {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";    
//     int i, j;
//     cout << "Enter number of vertices : ";
//     cin >> n;
//     cout << "Enter cost matrix : \n";
//     for (i = 1; i <= n; i++)
//         for (j = 1; j <= n; j++)
//             cin >> c[i][j];
//     prims();
// }



// ============================================  11. Floyd's Algorithm  ======================================================

// #include<bits/stdc++.h>
// using namespace std;

// #include <stdio.h>
// #include <stdlib.h>
// #include <sys/time.h>
// #include <omp.h>

// double SerialFloyd(int graph[10][10], int ver, double dstart, double dend) {
//     int i, j, k, iaFloyd[ver][ver];
//     struct timeval tv;
//     gettimeofday( & tv, NULL);
//     dstart = tv.tv_sec + (tv.tv_usec / 1000000.0);
//     for (i = 0; i < ver; i++) {
//         for (j = 0; j < ver; j++) {
//             iaFloyd[i][j] = graph[i][j];
//         }
//     }
//     for (k = 1; k <= ver; k++) {
//         for (i = 0; i < ver; i++) {
//             for (j = 0; j < ver; j++) {
//                 iaFloyd[i][j] = (iaFloyd[i][j] < (iaFloyd[i][k] + iaFloyd[k][j])) ? (iaFloyd[i][j]) :
//                     (iaFloyd[i][k] + iaFloyd[k][j]);
//             }
//         }
//     }
//     gettimeofday( & tv, NULL);
//     dend = tv.tv_sec + (tv.tv_usec / 1000000.0);
//     return dend - dstart;
// }
// double ParallelFloyd(int graph[10][10], int ver, double dstart, double dend) {
//     int i, j, k, iaFloyd[ver][ver];
//     struct timeval tv;
//     gettimeofday( & tv, NULL);
//     dstart = tv.tv_sec + (tv.tv_usec / 1000000.0);
//     for (i = 0; i < ver; i++) {
//         for (j = 0; j < ver; j++) {
//             iaFloyd[i][j] = graph[i][j];
//         }
//     }
//     omp_set_num_threads(20);#
//     pragma omp parallel
//     for private(k) shared(iaFloyd, ver)
//     for (k = 1; k <= ver; k++) {
//         for (i = 0; i < ver; i++) {
//             for (j = 0; j < ver; j++) {
//                 iaFloyd[i][j] = (iaFloyd[i][j] < (iaFloyd[i][k] + iaFloyd[k][j])) ? (iaFloyd[i][j]) :
//                     (iaFloyd[i][k] + iaFloyd[k][j]);
//             }
//         }
//     }
//     gettimeofday( & tv, NULL);
//     dend = tv.tv_sec + (tv.tv_usec / 1000000.0);
//     return dend - dstart;
// }
// int main(void) {
//     int graph[10][10], ver, i, j;
//     double dstart, dend, TimeS, TimeP, Factor;
//     printf("Enter the number of vertices\n");
//     scanf("%d", & ver);
//     printf("Enter the adjacency matrix\n");
//     for (i = 0; i < ver; i++) {
//         for (j = 0; j < ver; j++) {
//             scanf("%d", & graph[i][j]);
//         }
//     }
//     TimeS = SerialFloyd(graph, ver, dstart, dend);
//     TimeP = ParallelFloyd(graph, ver, dstart, dend);
//     printf("Time Taken By Serial Floyd = %f\n", TimeS);
//     printf("Time Taken By Parallel Floyd = %f\n", TimeP);
//     Factor = (TimeP / TimeS) * 100;
//     printf("Parallel Floyd is %f percent times faster than Serial Floyd\n", Factor);
//     return 0;
// }

// ============================================  12. N Queen's problem using Backtracking  =======================================

// #include <bits/stdc++.h>

// # define N 4
// using namespace std;

// void printSolution(int board[N][N]) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++)
//             cout << " " << board[i][j] << " ";
//         printf("\n");
//     }
// }

// bool isSafe(int board[N][N], int row, int col) {
//     int i, j;

//     for (i = 0; i < col; i++)
//         if (board[row][i])
//             return false;

//     for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
//         if (board[i][j])
//             return false;

//     for (i = row, j = col; j >= 0 && i < N; i++, j--)
//         if (board[i][j])
//             return false;

//     return true;
// }

// bool solveNQUtil(int board[N][N], int col) {
//     if (col >= N)
//         return true;

//     for (int i = 0; i < N; i++) {
//         if (isSafe(board, i, col)) {
//             board[i][col] = 1;

//             if (solveNQUtil(board, col + 1))
//                 return true;

//             board[i][col] = 0; // BACKTRACK
//         }
//     }

//     return false;
// }

// bool solveNQ() {
//     int board[N][N] = {
//         {
//             0,
//             0,
//             0,
//             0
//         },
//         {
//             0,
//             0,
//             0,
//             0
//         },
//         {
//             0,
//             0,
//             0,
//             0
//         },
//         {
//             0,
//             0,
//             0,
//             0
//         }
//     };

//     if (solveNQUtil(board, 0) == false) {
//         cout << "Solution does not exist";
//         return false;
//     }

//     printSolution(board);
//     return true;
// }

// int main() {
//     cout << "\n\nAnmol Baranwal -- 2820208 \n\n\n";
//     cout << "The values 1 indicate pacement of queens: \n\n";
//     solveNQ();

//     return 0;
// }

// ======================================  13. Recursive binary search (Divide & Conquer)  =====================================
// #include<bits/stdc++.h>
// using namespace std;
// int binarySearch(int arr[], int start, int end, int key)
//    
//         while(start<=end){
//             int mid = start + (end-start)/2;
//             if(arr[mid]==key){
//                 return mi
//             } else if(arr[mid]>key){
//                 return binarySearch(arr, start, mid - 1, key);
//             } else{
//                 return binarySearch(arr, mid + 1, end, key);
//             }
//         }
//         return -1;
//    
//     int main()
//     {
//         cout<<"\n\nAnmol Baranwal -- 2820208 \n\n\n";
//         int n, arr[50];
//         cout<<"Enter size of array: \n";
//         cin>>n;
//         cout<<"\nEnter elements of array seperated by space:\n";
//         for(int i=0;i<n;i++){
//             cin>> arr[i];
//        
//         int key;
//         cout<<"Enter element to search:\n";
//         cin>>key; 
//         int result= binarySearch(arr, 0, n-1, key
//         if(result==-1){
//             cout<<"\nanswer is not found in array:";
//         } else {
//             cout<<"answer is found at: "<<result+1<<" position";
//        
//         cout<<"\n\n
//         return 0;
//    
// ======================================== longest common subsequence ===================================================
// int LCS(char A[], char B[], int i, int j
//     int m = strlen(A);
//     int n = strlen(B
//     if(i==m || j==n)
//         return 0;
//     else if(A[i]==B[j])
//         return 1+LCS(A, B, i+1,j+1);
//     else    
//         return max(LCS(A, B, i+1, j), LCS(A, B, i, j+1));
//
// int main()
// {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n\n";
//     char X[] = "AGGTAB";
//     char Y[] = "GXTXAYB
//     int i=0,j=0;
//     cout<<"\nThe first string is: ";
//     for(int i=0;X[i]!='\0';i++){
//         cout<<X[i];
//     }
//     cout<<endl;
//     cout<<"\nThe second string is: ";
//     for(int i=0;Y[i]!='\0';i++){
//         cout<<Y[i];
//     }
//     cout<<endl;
//     cout<<"Length of LCS is "<< LCS( X, Y, i, j 
//     return 0;
//
// ===================================  matrix chain multiplication using memoization =============================================
// #include <bits/stdc++.h>
// using namespace std;
// int dp[100][100
// int matrixChainMemoised(int* p, int i, int j)
// {
// 	if (i == j)
// 	{
// 		return 0;
// 	}
// 	if (dp[i][j] != -1)
// 	{
// 		return dp[i][j];
// 	}
// 	dp[i][j] = INT_MAX;
// 	for (int k = i; k < j; k++)
// 	{
// 		dp[i][j] = min(
// 			dp[i][j], matrixChainMemoised(p, i, k)
// 					+ matrixChainMemoised(p, k + 1, j)
// 					+ p[i - 1] * p[k] * p[j]);
// 	}
// 	return dp[i][j];
// }
// int MatrixChainOrder(int* p, int n)
// {
// 	int i = 1, j = n - 1;
// 	return matrixChainMemoised(p, i, j);
//
// int main()
// {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n";
//     int arr[] = { 1, 2, 3, 4 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
//     cout<<"\nThe array passed: \n";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n\n";
// 	memset(dp, -1, sizeof dp
// 	cout << "Minimum number of multiplications is "
// 		<< MatrixChainOrder(arr, n);
//     cout<<"\n\n
//     return 0;   
// }
//     int n, arr[20];
//     cout<<"\n\n";
//     cout<<"Enter size of array: \n";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Enter start tim "<<i<<endl;
//         cin>> arr[20];
//     }
//     matrixChainOrder(1,arr,n-1
// ======================================== linear search ===================================================
// void displayArray(int arr[], int n)
// {   
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//
// int main()
// {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n\n";
//     int n, arr[50];
//     cout<<"\n\n";
//     cout<<"Enter size of array: \n";
//     cin>>n;
//     cout<<"\nEnter elements of array seperated by space:\n";
//     for(int i=0;i<n;i++){
//         cin>> arr[i];
//    
//     int key;
//     cout<<"Enter element to search:\n";
//     cin>>key;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             key = i;
//             break;
//         }
//     }
//     cout<<"\nElements entered are:\n";
//     displayArray(arr,n);
//     cout<<"\nThe element was found at "<< key <<" index
//     return 0;
//
// ======================================== binary search ===================================================
// int binarySearch(int arr[], int start, int end, int key)
//
//     while(start<=end){
//         int mid = start + (end-start)/2;
//         if(arr[mid]==key){
//             return mi
//         } else if(arr[mid]>key){
//             end=mid-1;
//         } else{
//             start=mid+1;
//         }
//     }
//     return -1;
//
// int main()
// {
//     cout<<"\n\nAnmol Baranwal -- 2820208 \n\n\n";
//     int n, arr[50];
//     cout<<"\n\n";
//     cout<<"Enter size of array: \n";
//     cin>>n;
//     cout<<"\nEnter elements of array seperated by space:\n";
//     for(int i=0;i<n;i++){
//         cin>> arr[i];
//    
//     int key;
//     cout<<"Enter element to search:\n";
//     cin>>key; 
//     int result= binarySearch(arr, 0, n-1, key
//     if(result==-1){
//         cout<<"\nanswer is not found in array:";
//     } else {
//         cout<<"answer is found at: "<<result+1;
//    
//     cout<<"\n\n
//     return 0;
// }