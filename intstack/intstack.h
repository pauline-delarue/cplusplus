class IntStack {
    public:
    IntStack (int len);
    IntStack(const IntStack& rst);
    ~IntStack();
    void push (int token);
    int pop ();
    bool is_full ();
    bool is_empty ();
    void print ();
    private:
    int *tab;
    int taille;
    int top;
};