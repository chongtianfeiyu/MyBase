#ifndef __TEST_UNITTEST_H__
#define __TEST_UNITTEST_H__
#include "Common.h"

class MyThreadClass : public IThread
{
public:
	MyThreadClass();
	~MyThreadClass();

private:
    UINT         m_nCount;
	virtual UINT Run();
};

extern void Test_PlatFormInfo();

extern void Test_Macro();

extern void Test_GlobalFun();

extern void Test_Interlocked();

extern int Test_Thread();

extern void Test_File();

extern void Test_Pointer();

extern void Test_Buffer();

extern void Test_Net();

#endif
