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
extern int fn_8278FDC8();


ulonglong fn_827A2BA0(int param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar3;
  longlong lVar2;
  
  if (*(uint *)(param_1 + 0x14) != 0) {
    iVar3 = fn_8278FDC8((ulonglong)*(uint *)(param_1 + 0x14) + 0x14);
    bVar1 = true;
    if (iVar3 != 0) goto LAB_827a2be0;
  }
  bVar1 = false;
LAB_827a2be0:
  if ((bVar1) && ((ulonglong)*(uint *)(*(int *)(param_1 + 0x14) + 0x30) < (param_2 & 0xffffffff))) {
    lVar2 = fn_8278FDC8(*(int *)(param_1 + 0x14) + 0x14);
    param_2 = lVar2 + param_2;
  }
  return param_2;
}

