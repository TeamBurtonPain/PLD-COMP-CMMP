int64_t b = 3, c = 0;
void main(){
    b = c = b = 1+2;
    c = b+++- --b+1;//fonctionne
//    c = b+++---b+1;//ne fonctionne pas

}
