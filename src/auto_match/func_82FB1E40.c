typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82FA5060();
extern int fn_82FB1DC0();
extern int fn_82FFF750();
extern unsigned int lbl_831BC768;


int * fn_82FB1E40(undefined8 param_1)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  
  RtlEnterCriticalSection(0xffffffff8326434c);
  uVar1 = fn_82FA5060(lbl_831BC768,0xd4);
  if ((uVar1 & 0xffffffff) != 0) {
    piVar2 = (int *)fn_82FB1DC0(uVar1,param_1);
    if ((piVar2 == (int *)0x0) || (iVar3 = fn_82FFF750(), iVar3 == 1)) goto LAB_82fb1eb8;
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)0x0;
LAB_82fb1eb8:
  RtlLeaveCriticalSection(0xffffffff8326434c);
  return piVar2;
}

