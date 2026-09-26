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
extern int fn_82810530();


void fn_8305D8F0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  fn_82810530(param_1 + 0x34);
  uVar1 = *(uint *)(param_1 + 0x30);
  lVar5 = 0;
  if (0 < (longlong)((longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0)))
  {
    iVar6 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x2c);
      uVar3 = *(undefined4 *)(iVar6 + iVar2);
      *(undefined4 *)(iVar6 + iVar2) =
           *(undefined4 *)
            ((int)((((ulonglong)*(uint *)(param_1 + 0x30) - lVar5) - 1 & 0xffffffff) << 2) + iVar2);
      iVar6 = iVar6 + 4;
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x30) - lVar5;
      lVar5 = lVar5 + 1;
      *(undefined4 *)((int)((lVar4 - 1U & 0xffffffff) << 2) + *(int *)(param_1 + 0x2c)) = uVar3;
      uVar1 = *(uint *)(param_1 + 0x30);
    } while ((int)lVar5 < (int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
  }
  return;
}

