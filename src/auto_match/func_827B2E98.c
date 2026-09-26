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
extern int fn_827B1238();
extern int fn_827B26B0();


void fn_827B2E98(int param_1,ulonglong param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined2 auStack_20 [4];
  
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x4c)) {
    iVar2 = param_1 + 0x48;
    *(undefined2 *)
     (*(int *)(((uint)((param_2 & 0xffffffff) >> 4) & 0xffffffc) + *(int *)(param_1 + 0x58)) +
     ((uint)((param_2 & 0xffffffff) << 3) & 0x1f8)) = param_3;
    auStack_20[0] = param_3;
    iVar1 = fn_827B26B0(iVar2,auStack_20);
    if (iVar1 == 0) {
      lVar3 = 2;
      do {
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      auStack_20[0] = param_3;
      fn_827B1238(iVar2,iVar2,auStack_20);
    }
  }
  return;
}

