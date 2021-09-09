vector<vector<int>> rotateImage(vector<vector<int>> a) {
    if(a.size() <= 1){
        return a;
    }
    vector<vector<int>> b = a;
    int k = 0;
    for(int i = 0;i<a.size();++i){
        for(int j = a.size()-1;j>=0;--j){
            b[i][k] = a[j][i];
            ++k;
        }
        k = 0;
    }
    return b;
}