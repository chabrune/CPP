class Test
{
    public:
    Test();
    Test(int n);
    ~Test();
    int n;
};


class Test2
{
    public:
    Test2();
    Test2(int n);
    ~Test2();
    Test2(Test2 const & copy);
    int n;
};