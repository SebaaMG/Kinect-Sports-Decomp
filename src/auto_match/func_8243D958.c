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
extern int fn_82512FD8();
extern int fn_82F622A8();


/* WARNING: Removing unreachable block (ram,0x8243d9a4) */

void fn_8243D958(int *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar6;
  longlong lVar5;
  undefined4 *puVar7;
  
  iVar2 = *param_1;
  uVar1 = (param_1[1] - iVar2) / 0xc;
  if (uVar1 < 9) {
    if (uVar1 < 8) {
      lVar5 = 8 - (longlong)(int)uVar1;
      if ((0x15555555U - lVar5 & 0xffffffff) < (ulonglong)uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar4 = lVar5 + (int)uVar1;
      uVar1 = (param_1[2] - iVar2) / 0xc;
      if ((ulonglong)uVar1 < (uVar4 & 0xffffffff)) {
        uVar3 = 0;
        if ((ulonglong)uVar1 <= (0x15555555 - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar3 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
          uVar3 = uVar4;
        }
        fn_82512FD8(param_1,uVar3);
      }
      puVar7 = (undefined4 *)param_1[1];
      uVar4 = 8 - (longlong)(((int)puVar7 - *param_1) / 0xc);
      uVar3 = uVar4 & 0xffffffff;
      while (uVar3 != 0) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0xffffffff;
        }
        puVar7 = puVar7 + 3;
        uVar4 = uVar4 - 1;
        uVar3 = uVar4;
      }
      param_1[1] = (8 - (param_1[1] - *param_1) / 0xc) * 0xc + param_1[1];
    }
  }
  else if (iVar2 + 0x60 != param_1[1]) {
    for (iVar6 = iVar2 + 0x60; iVar6 != param_1[1]; iVar6 = iVar6 + 0xc) {
    }
    param_1[1] = iVar2 + 0x60;
  }
  return;
}

