namespace Graphic
{
	struct Card {};

	void init(Card& c) {}
}

int main()
{
//	Card c; // error

	Graphic::Card c; // ok

	init(c); // 왜??? 에러가 아닐까요??
}