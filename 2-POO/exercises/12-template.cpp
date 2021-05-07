#include <iostream>
#include <string>

using namespace std;

// 1
template <typename M>
M maximum(const M &v1, const M &v2)
{
  if (less<M>()(v1, v2))
    return v2;
  if (less<M>()(v2, v1))
    return v1;
  return 0;
}

// 2
template <typename T>
class Pair
{
public:
  Pair(const T &t, const T &u) : first(t), second(u) {}

  T &get_first() { return first; }
  T &get_second() { return second; }

  const T &get_first() const { return first; }
  const T &get_second() const { return second; }

  void add_pairs() { cout << first + second << endl; }

private:
  T first;
  T second;
};

template <typename P>
void print_pair(const P &p)
{
  cout << '(' << p.get_first() << ", " << p.get_second() << ")\n";
}

int main()
{

  // 1)
  cout << maximum(25, 11) << endl;

  // 2)
  Pair<int> test1(1, 2);

  print_pair(test1);
  test1.add_pairs();

  string strA = "5";
  string strB = "400";

  Pair<string> test2(strA, strB);

  test2.add_pairs();
  print_pair(test2);
}