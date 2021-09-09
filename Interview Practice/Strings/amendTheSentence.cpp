string amendTheSentence(string s) {
    string new_s = "";
    if(s[0]>64 && s[0]<91){
        new_s+=s[0]+32;
    }
    else{
        new_s+=s[0];
    }
    for(int i = 1;i < s.size();++i){
        if(s[i]>64 && s[i]<91){
            new_s += ' ';
            new_s += s[i]+32;
        }
        else{
            new_s += s[i];
        }
    }
    return new_s;
}