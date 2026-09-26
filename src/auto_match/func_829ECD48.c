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


longlong fn_829ECD48(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x14);
  lVar3 = 0;
  iVar6 = 0;
  if (uVar1 != 0) {
    iVar5 = 0;
    do {
      uVar2 = *(ushort *)(iVar5 + *(int *)(param_1 + 0x2c));
      uVar4 = (ulonglong)uVar2;
      if (uVar2 == 0) {
        return -1;
      }
      if ((iVar6 == uVar1 - 1) && (uVar2 == 1)) {
        uVar4 = 2;
      }
      iVar6 = iVar6 + 1;
      lVar3 = uVar4 + lVar3;
      iVar5 = iVar5 + 2;
    } while (iVar6 < (int)(uint)uVar1);
    if (0 < (int)lVar3) {
      return lVar3;
    }
  }
  return -1;
}

