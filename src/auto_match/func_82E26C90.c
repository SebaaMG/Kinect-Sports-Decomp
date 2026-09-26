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
extern unsigned int lbl_83187510;
extern unsigned int lbl_83187518;


undefined8 fn_82E26C90(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar4;
  ulonglong uVar3;
  undefined4 uVar5;
  longlong lVar6;
  
  iVar2 = 0;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if ((((0x27 < param_2) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 4)) && (iVar1 != 5)) &&
     ((iVar1 != 2 && (iVar1 != 1)))) {
    if ((iVar1 != 0) && ((iVar1 != 3 && (iVar1 != 0x4d415243)))) {
      if (param_4 != (undefined4 *)0x0) {
        piVar4 = &lbl_83187510;
        lVar6 = 0x39;
        do {
          if (*piVar4 == *(int *)(param_1 + 0x10)) {
            *param_4 = 1;
          }
          piVar4 = piVar4 + 9;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x10);
LAB_82e26d34:
      *param_3 = uVar5;
      return 0;
    }
    uVar3 = 0;
    piVar4 = &lbl_83187518;
    do {
      if (((*piVar4 != -1) && (iVar1 == *piVar4)) &&
         (trapWord(6,(ulonglong)(uint)piVar4[3],0),
         (ulonglong)*(ushort *)(param_1 + 0xe) ==
         (ulonglong)(uint)piVar4[1] / (ulonglong)(uint)piVar4[3])) {
        if ((iVar1 == 3) && (param_2 < 0x34)) {
          return 0xffffffff80070057;
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 1;
        }
        uVar5 = (&lbl_83187510)[iVar2 * 9];
        goto LAB_82e26d34;
      }
      uVar3 = uVar3 + 0x24;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 9;
    } while ((uVar3 & 0xffffffff) != 0x804);
  }
  return 0xffffffff80070057;
}

