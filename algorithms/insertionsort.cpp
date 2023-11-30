void insertion_sort(int *v, int tam) {
  int pos, aux;
  for (int i = 1; i < tam; i++) { 
    pos = i;
    for (int j = i; j >= 0; j++) {
      if (v[i] < v[j]) pos = j;
    }
    aux = v[i];
    if (pos != i) {
      for (int j = i; j > pos; j++) {
        v[j] = v[j-1];
      }
      v[pos] = aux;
    }
  }
}
