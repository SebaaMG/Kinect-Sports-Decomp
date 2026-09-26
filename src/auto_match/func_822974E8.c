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
extern int fn_82F68CC0();


void fn_822974E8(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (param_3 & 0x7fffffff) * 2;
  if ((int)param_1 == (int)param_2) {
    return;
  }
  if ((int)param_2 <= (int)param_1) {
    lVar2 = uVar5 + 1;
    uVar4 = param_2 + uVar5;
    for (uVar3 = param_1 + uVar5; lVar2 = lVar2 + -1, lVar2 != 0 && (uVar3 & 3) != 0;
        uVar3 = uVar3 - 1) {
      uVar5 = uVar5 - 1;
      iVar1 = (int)uVar4;
      uVar4 = uVar4 - 1;
      *(undefined1 *)((int)uVar3 + -1) = *(undefined1 *)(iVar1 + -1);
    }
    uVar6 = (uVar5 & 0xffffffff) >> 2;
    if (uVar6 != 0) {
      if ((uVar4 & 3) == 0) {
        do {
          iVar1 = (int)uVar4;
          uVar4 = uVar4 - 4;
          *(undefined4 *)((int)uVar3 + -4) = *(undefined4 *)(iVar1 + -4);
          uVar3 = uVar3 - 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      else {
        do {
          iVar1 = (int)uVar4;
          uVar3 = uVar3 - 4;
          uVar4 = uVar4 - 4;
          *(undefined4 *)uVar3 = *(undefined4 *)(iVar1 + -4);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    uVar5 = uVar5 & 3;
    if (uVar5 != 0) {
      do {
        iVar1 = (int)uVar4;
        uVar4 = uVar4 - 1;
        *(undefined1 *)((int)uVar3 + -1) = *(undefined1 *)(iVar1 + -1);
        uVar3 = uVar3 - 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
    return;
  }
  fn_82F68CC0();
  return;
}

