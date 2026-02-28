#pragma once

struct Foo {
	int x;
#ifdef SOME_DEFINE
	int y;
#endif
};
