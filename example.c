int toto() {
  return 0;
}

#if __INTELLISENSE__
#pragma diag_suppress 1094
#endif

__attribute__((constructor(1))) static void test() {}

int main(int argc, char const *argv[])
{
  int oui = 0 ? : 8;
  return oui;
}
