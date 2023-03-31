extern int myfunc(const char* format, ...);

int foo(int x) {
    myfunc("%d\n", x);
    return x;
}
