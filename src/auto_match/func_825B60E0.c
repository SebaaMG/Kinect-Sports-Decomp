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
extern unsigned int *auStack_20;
extern int fn_82837A40();
extern int fn_82837AE0();


longlong fn_825B60E0(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar3;
  longlong lVar2;
  uint auStack_20 [2];
  
  iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
  puVar1 = *(undefined4 **)(*(int *)(iVar3 + 0x10) + 0x48);
  iVar3 = fn_82837AE0(*puVar1);
  if (iVar3 == 0) {
    lVar2 = 0;
  }
  else {
    fn_82837A40(*puVar1,auStack_20);
    lVar2 = param_2 * 0x34 + (ulonglong)auStack_20[0];
  }
  return lVar2;
}

