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
extern int fn_82CEAE80();
extern int fn_82CFBBF0();


ulonglong fn_82CEAFA8(int param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  iVar1 = fn_82CEAE80();
  if (0 < iVar1) {
    do {
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x1c);
      for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        uVar2 = *(uint *)(iVar1 + 0x1c) + uVar2;
      }
      uVar2 = lVar3 - uVar2;
      iVar1 = param_1;
      do {
        uVar2 = *(uint *)(iVar1 + 0x1c) + uVar2;
        if (-1 < (longlong)uVar2) {
          uVar2 = (uVar2 + (uVar2 & 0x7fffffff) * 2 & 0x1fffffff) * 8 +
                  (ulonglong)*(uint *)(iVar1 + 0x18);
          goto LAB_82ceb014;
        }
        iVar1 = *(int *)(iVar1 + 4);
      } while (iVar1 != 0);
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x18);
LAB_82ceb014:
      iVar1 = fn_82CFBBF0(*(undefined4 *)uVar2,param_2);
      if (iVar1 == 0) {
        return uVar2;
      }
      lVar3 = lVar3 + 1;
      iVar1 = fn_82CEAE80(param_1);
    } while ((int)lVar3 < iVar1);
  }
  return 0;
}

