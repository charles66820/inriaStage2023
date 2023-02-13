int toto() {
  return 0;
}

#if __INTELLISENSE__
#pragma diag_suppress 1094
#endif

__attribute__((constructor(1))) static void test() {}

typedef int (*myFun)();

int main(int argc, char const *argv[])
{
  myFun fun = toto;

  int oui = fun() ?: 8;
  return oui;
}
