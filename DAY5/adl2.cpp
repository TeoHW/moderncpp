// ADL : Argument Dependent Name
//       함수 찾을때 인자가 포함된 namespace 는 자동으로 검색된다는 문법
//       연산자 재정의 때문에 만든 문법
namespace Graphic
{
	struct Card {};
	void init(Card& c) {}
	void operator+(Card c1, Card c2) {}
}

int main()
{
//	Card c; // error
	Graphic::Card c; // ok
	init(c); // 왜??? 에러가 아닐까요?? - ADL 때문에

	Graphic::Card c1, c2;
	c1 + c2; // operator+(c1, c2) 찾아야 합니다. ADL 이 없으면 못찾음
//	Graphics::operator+(c1, c2); // 이렇게 사용했어야 합니다.
}