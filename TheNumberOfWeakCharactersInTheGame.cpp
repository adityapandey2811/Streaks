bool static sortLambda(vector<int>& a, vector<int>& b){
    if(a[0] == b[0]){
        return a[1] < b[1];
    }
    return a[0] > b[0];
}
int numberOfWeakCharacters(vector<vector<int>>& v) {
    int i, count = 0, def = INT_MIN;
    sort(v.begin(), v.end(), sortLambda);
    for(i=0;i<v.size();i++){
        if(v[i][1] < def)
            count++;
        def = max(def, v[i][1]);
    }
    return count;
}
