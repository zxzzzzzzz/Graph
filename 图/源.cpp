#include <iostream>
#include <ctime>
#include <vector>
#include "SparseGraph.h"
#include "DenseGraph.h"
#include "ReadGraph.h"
#include"Component.h"
#include"Path.h"
#include"ShortestPath.h"

using namespace std;


//int main() {
//
//	int N = 20;
//	int M = 100;
//
//	srand(time(NULL));
//
//	// Sparse Graph-稀疏图
//	SparseGraph g1(N, false);
//	for (int i = 0; i < M; i++) {
//		int a = rand() % N;
//		int b = rand() % N;
//		g1.addEdge(a, b);
//	}
//
//	// O(E)
//	for (int v = 0; v < N; v++) {
//		cout << v << " : ";
//		SparseGraph::adjIterator adj(g1, v);
//		for (int w = adj.begin(); !adj.end(); w = adj.next())
//			cout << w << " ";
//		cout << endl;
//	}
//
//	cout << endl;
//
//
//	// Dense Graph-稠密图
//	DenseGraph g2(N, false);
//	for (int i = 0; i < M; i++) {
//		int a = rand() % N;
//		int b = rand() % N;
//		g2.addEdge(a, b);
//	}
//
//	// O(V^2)
//	for (int v = 0; v < N; v++) {
//		cout << v << " : ";
//		DenseGraph::adjIterator adj(g2, v);
//		for (int w = adj.begin(); !adj.end(); w = adj.next())
//			cout << w << " ";
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main()//读取文件中存储的图
//{
//	string filename = "testG1.txt";
//
//	SparseGraph g1(13, false);
//	ReadGraph<SparseGraph> readGraph1(g1, filename);
//	g1.show();//邻接表
//
//	cout << endl;
//
//	DenseGraph g2(13, false);
//	ReadGraph<DenseGraph> readGraph2(g2, filename);
//	g2.show();//邻接矩阵
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	// TestG1.txt
//	string filename1 = "testG1.txt";
//	SparseGraph g1 = SparseGraph(13, false);
//	ReadGraph<SparseGraph> readGraph1(g1, filename1);
//	Component<SparseGraph> component1(g1);
//	cout << "TestG1.txt, Component Count: " << component1.count() << endl;
//
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	string filename = "testG2.txt";
//	SparseGraph g = SparseGraph(7, false);
//	ReadGraph<SparseGraph> readGraph(g, filename);
//	g.show();
//	cout << endl;
//
//	Path<SparseGraph> dfs(g, 0);
//	cout << "DFS : ";
//	dfs.showPath(6);
//
//	system("pause");
//	return 0;
//}

int main() {

	string filename = "testG2.txt";
	SparseGraph g = SparseGraph(7, false);
	ReadGraph<SparseGraph> readGraph(g, filename);
	g.show();
	cout << endl;

	Path<SparseGraph> dfs(g, 0);
	cout << "DFS : ";
	dfs.showPath(6);

	ShortestPath<SparseGraph> bfs(g, 0);
	cout << "BFS : ";
	bfs.showPath(6);

	system("pause");
	return 0;
}