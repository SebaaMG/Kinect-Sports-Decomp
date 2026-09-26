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
extern unsigned int *auStack_1020;
extern int fn_826E6CF8();
extern int fn_826E6F60();


ulonglong fn_826E7110(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_1020 [4104];
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = (int)param_2;
  if (iVar2 < iVar1) {
    if (iVar1 - *(int *)(param_1 + 0x54) <= iVar2) {
      *(int *)(param_1 + 0x4c) = iVar2;
      return param_2;
    }
    fn_826E6CF8(param_1);
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x4c) = iVar1;
  }
  do {
    if (iVar2 <= *(int *)(param_1 + 0x4c)) break;
    lVar3 = param_2 - *(uint *)(param_1 + 0x4c);
    if (0xfff < (int)lVar3) {
      lVar3 = 0x1000;
    }
    iVar1 = fn_826E6F60(param_1,auStack_1020,lVar3);
  } while (iVar1 != 0);
  return (ulonglong)*(uint *)(param_1 + 0x4c);
}

