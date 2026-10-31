struct node {
    vector<int> chi;
    int par;
};

vector<vector<int>> ad_v;
vector<node> tree;

void make_tree(int i) {
    rep(j,ad_v[i].size()) {
        if(tree[i].par != ad_v[i][j]) {
            tree[i].chi.push_back(ad_v[i][j]);
            tree[ad_v[i][j]].par = i;
            make_tree(ad_v[i][j]);
        }
    }
}

