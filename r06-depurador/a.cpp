int suma(const int v[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
    s += v[i];
    return s;
}

int main(){
    int v[] = {10, 20, 30, 40, 50};
    return suma(v,5);
}