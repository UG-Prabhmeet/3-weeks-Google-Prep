class UnionFind {
    int * parent;
    int * rank;
    
    public:
    UnionFind(int n) {
        parent = new int[n];
        rank = new int[n];
        
        for(int i = 0; i < n; i++) {
            parent[i]=i;
            rank[i]=1;
        }
    }
    
    int find(int ele) {
        if(parent[ele] == ele) {
            return ele;
        } else return parent[ele] = find(parent[ele]);
    }
    
    void _union(int ele1, int ele2) {
        ele1 = find(ele1);
        ele2 = find(ele2);
        if(ele1 == ele2) return ;
        // in union by ranks --> ranks of parents aren't increased
        // as ranks are like the upper bounds of tree's height
        // whereas in union by size --> then ranks are increased

        // this is union by size 
        if(rank[ele1] > rank[ele2]) {
            parent[ele2] = ele1;
            rank[ele1] += rank[ele2];
        } else {
            parent[ele1] = ele2;
            rank[ele2] += rank[ele1];
        }

        // this is union by ranks 
        if (rank[u] < rank[v]) {
                parent[u] = v;
            }
            else if (rank[v] < rank[u]) {
                parent[v] = u;
            }
            else {
                parent[v] = u;
                rank[u]++;    // only here, to reflect increased height
            }
            
        }
};
