#include "Windows.h"

#define _UNICODE
#define UNICODE

unsigned int g_tid=0;

int g_func1;

void __stdcall detourFunc1();
void HookFuncs();

void f1(int fm,int bt)
{
	int fm1;
	int bt1;
	fm1=*(int*)*(int*)(fm);
	bt1=*(int*)(fm1+bt);
	__asm
	{
		xor edx,edx
			mov eax,dword ptr [bt1]
			mov ebx,dword ptr [g_func1]
			call ebx
	}
}

DWORD WINAPI ThreadProc(
    LPVOID lpParameter
)
{
	int v;

	
	int fm0;
	int fm0_bt0;
	int fm1;
	int fm1_bt0;
	int fm1_bt1;
	int fm1_bt2;
	int fm1_bt3;
	int fm1_bt4;
	int fm1_bt5;
	int fm1_bt6;
	
	int fm1_bt7;
	int fm1_bt8;
	int fm1_bt9;
	int fm1_bt10;
	int fm1_bt11;

	int fm2;
	int fm2_bt0;
	int fm2_bt1;
	int fm2_bt2;

	HANDLE tid;
	void* addr1;
	unsigned int old;
	
	int fm3;
	int fm3_bt0;
	int fm3_bt1;
	int fm3_bt2;
	int fm3_bt3;
	int fm3_bt4;
	int fm3_bt5;
	int fm3_bt6;
	int fm3_bt7;
	int fm3_bt8;
	int fm3_bt9;
	int fm3_lb;

	int fm4;
	int fm4_bt0;
	int fm4_bt1;
	int fm4_bt2;
	int fm4_bt3;
	int fm4_bt4;
	int fm4_bt5;
	int fm4_bt6;
	int fm4_bt7;
	int 	fm4_bt9;
	int 	fm4_bt8;
	int 	fm4_bt10;
	int fm2_bt3;
	int fm2_bt4;
	int fm4_bt11;
	int fm4_bt12;
	int fm4_bt13;
	int fm5;
	int fm5_bt0;
	int fm5_bt1;
	int fm5_bt2;
	char *bytes="\x32\xdb\x90\x90\x90";

	v=0;
	while (v==0)
	{
		v=*(unsigned int *)(0x172FB50);
	}

	fm0=0x1674C64;	//TFORMMENU
	fm0_bt0=0x3a8;
	f1(fm0,fm0_bt0);

	fm1=0x16747B0;	//tpfFormEasyPolling (form globe object addr )
	fm1_bt0=0x3fc;
	fm1_bt1=0x400;
	fm1_bt2=0x404;
	fm1_bt3=0x408;
	fm1_bt4=0x398;
	fm1_bt5=0x39c;
	fm1_bt6=0x3a4;
	fm1_bt7=0x3bc;
	fm1_bt8=0x3c0;
	fm1_bt9=0x3b8;

	fm1_bt10=0x3a0;
	fm1_bt11=0x38c;

	f1(fm1,fm1_bt0);
	f1(fm1,fm1_bt1);
	f1(fm1,fm1_bt2);
	f1(fm1,fm1_bt3);
	f1(fm1,fm1_bt4);

	f1(fm1,fm1_bt5);


	f1(fm1,fm1_bt6);
	f1(fm1,fm1_bt7);
	f1(fm1,fm1_bt8);
	f1(fm1,fm1_bt9);
	
	f1(fm1,fm1_bt10);
	//suspend maint thread 
	//nop 00FD86C3  5bytes
	tid=*(int*)*(int*)0x1674DC4;
	SuspendThread(tid);
	addr1=(void*)0xfd86c3;
	VirtualProtect(addr1,5,0x40,&old);
	memset(addr1,0x90,5);
	VirtualProtect(addr1,5,old,&old);
	ResumeThread(tid);
	f1(fm1,fm1_bt11);
	//f1(fm1,fm1_bt11);
	
	fm2=0x167400C;	//TFormCartateca 
	fm2_bt0=0x440;
	fm2_bt1=0x3c4;
	fm2_bt2=0x3c8;	//print button
	fm2_bt3=0x408;
	fm2_bt4=0x3d0;
 	f1(fm2,fm2_bt0);
 	f1(fm2,fm2_bt1);
	//f1(fm2,fm2_bt2);
	f1(fm2,fm2_bt3);
	
	SuspendThread(tid);
	addr1=(void*)0x15EC265;
	VirtualProtect(addr1,5,0x40,&old);
	memset(addr1,0x90,5);
	VirtualProtect(addr1,5,old,&old);
	ResumeThread(tid);
	f1(fm2,fm2_bt4);

	fm3=0x167473C;	//TpfFormPolling
	fm3_bt0=0x414;
	fm3_bt1=0x418;
	fm3_bt2=0x48c;
	fm3_bt3=0x420;
	fm3_bt4=0x458;
	fm3_bt5=0x490;
	fm3_bt6=0x494;

	fm3_bt7=0x3ac;
	fm3_bt8=0x3b0;
	fm3_bt9=0x3d4;
	fm3_lb=0x3dc;

	f1(fm3,fm3_bt0);
	f1(fm3,fm3_bt1);
	f1(fm3,fm3_bt2);
	f1(fm3,fm3_bt3);
	f1(fm3,fm3_bt4);
	f1(fm3,fm3_bt5);
	f1(fm3,fm3_bt6);

	f1(fm3,fm3_bt7);
	f1(fm3,fm3_bt8);
	f1(fm3,fm3_bt9);
	f1(fm3,fm3_lb);
	

	fm4=0x16741b8;	//TFormShowRetro
	fm4_bt0=0x400;
	fm4_bt1=0x3a8;
	fm4_bt2=0x3ac;
	fm4_bt3=0x3b0;
	fm4_bt4=0x3b4;
	fm4_bt5=0x3d8;
	fm4_bt6=0x3c8;
	fm4_bt7=0x3d4;
	fm4_bt9=0x3bc;
	fm4_bt8=0x3c0;
	fm4_bt10=0x3cc;
	fm4_bt11=0x3a0;
	fm4_bt12=0x3a4;
	fm4_bt13=0x3d0;
	
	SuspendThread(tid);
	addr1=(void*)0x10A15B5;
	VirtualProtect(addr1,5,0x40,&old);
	memmove(addr1,bytes,5);
	VirtualProtect(addr1,5,old,&old);
	ResumeThread(tid);

	f1(fm4,fm4_bt0);
	f1(fm4,fm4_bt1);
	f1(fm4,fm4_bt2);
	f1(fm4,fm4_bt3);
	f1(fm4,fm4_bt4);
	f1(fm4,fm4_bt5);
	f1(fm4,fm4_bt6);
	f1(fm4,fm4_bt7);
	f1(fm4,fm4_bt8);
	f1(fm4,fm4_bt9);
	f1(fm4,fm4_bt10);
	f1(fm4,fm4_bt11);
	f1(fm4,fm4_bt12);
	f1(fm4,fm4_bt13);

	//HookFuncs();		//modify codes for button clicking event
	
	//fm5=0x167495C;	//TFormPrintEconomy
	//fm5_bt0=0x3ac;
	//fm5_bt1=0x3a8;
	//fm5_bt2=0x3c0;
	//f1(fm5,fm5_bt0);
	//f1(fm5,fm5_bt1);
	//f1(fm5,fm5_bt2);

	return 1;
}

/*
call [xxxxxxx]
*/
void __declspec(naked) __stdcall stub()
{
	//int f;
	//f=func;
	__asm
	{
		//push args
		//call [f]
		mov eax,dword ptr [esp+4]
		pushad
		call eax
		popad
		ret
	}
}

void HookFuncs()
{
	unsigned int addr1;
	int f1;
	int offset=0;
	UINT old;
	addr1=0x015ED31B;
	f1=(int)detourFunc1;
	VirtualProtect(addr1,20,0x40,&old);
	*(char*)(addr1+offset)=0x68;
	offset+=1;
	*(int*)(addr1+offset)=(int)detourFunc1;
	offset+=4;
	*(char*)(addr1+offset)=0xb8;
	offset+=1;
	*(int*)(addr1+offset)=(int)stub;
	offset+=4;
	*(short*)(addr1+offset)=0xd0ff;
	offset+=2;
	*(int*)(addr1+offset)=0xc35de58b;
	VirtualProtect(addr1,20,old,&old);
}

void __stdcall detourFunc1()
{
	MessageBox(0,"test","test",MB_OK);
}

BOOL WINAPI DllMain(
					  HINSTANCE hinstDLL,
					  DWORD fdwReason,
					  LPVOID lpvReserved
					)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		g_func1=0x0050D524;
		g_tid=CreateThread(0,0,ThreadProc,0,0,0);
		return 1;
	}
	return 0;

}

__declspec (dllexport) void Checksysrun()
{
	return;
}
