// got from function params
nb = 42;


int root = 1;
int root_found = 0;

while ((root <= (nb / 2)) && (!(root_found == 1))) {
    output = root * root;
    if (output == nb){
        root_found = 1;
    }
    root++;
}
if (output){
    return (output);
}
else {
    return 0
}
