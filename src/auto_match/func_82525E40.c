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
extern int fn_82522ED8();
extern int fn_82A1F238();


void fn_82525E40(int param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (param_2 & 0x3fffffff) * 4;
  lVar3 = 0;
  do {
    iVar1 = (int)((lVar2 + lVar3 + 0x291U & 0xffffffff) << 2);
    if (*(int *)(iVar1 + param_1) != 0) {
      fn_82522ED8();
      *(undefined4 *)(iVar1 + param_1) = 0;
    }
    iVar1 = (int)((lVar2 + lVar3 + 0x2a1U & 0xffffffff) << 2);
    if (*(int *)(iVar1 + param_1) != 0) {
      fn_82A1F238();
      *(undefined4 *)(iVar1 + param_1) = 0;
    }
    iVar1 = (int)((lVar2 + 0x2c9 + lVar3 & 0xffffffffU) << 2);
    if (*(int *)(iVar1 + param_1) != 0) {
      fn_82A1F238();
      *(undefined4 *)(iVar1 + param_1) = 0;
    }
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < 4);
  param_1 = (int)param_2 * 0x10 + param_1;
  *(undefined4 *)(param_1 + 0xac4) = 0;
  *(undefined4 *)(param_1 + 0xac8) = 0;
  *(undefined4 *)(param_1 + 0xacc) = 0;
  *(undefined4 *)(param_1 + 0xad0) = 0;
  return;
}

