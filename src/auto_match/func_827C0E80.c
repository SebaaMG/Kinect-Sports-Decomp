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
extern int fn_827C0B88();
extern int fn_827C0C68();
extern int fn_827C8EF8();
extern int fn_827C9040();


void fn_827C0E80(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar8 = 0;
  lVar6 = 0;
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
    if (*piVar2 == 0) {
      uVar8 = (longlong)piVar2[3] * (longlong)piVar2[2] + uVar8;
      lVar6 = (longlong)piVar2[1] * (longlong)piVar2[2] + lVar6;
    }
  }
  for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
    if (*piVar2 == 0) {
      uVar8 = ((longlong)piVar2[3] * (longlong)piVar2[2] & 0x1ffffffU) * 0x80 + uVar8;
      lVar6 = ((longlong)piVar2[1] * (longlong)piVar2[2] & 0x1ffffffU) * 0x80 + lVar6;
    }
  }
  if (0 < (int)uVar8) {
    uVar4 = fn_827C8EF8(param_1,uVar8,lVar6,*(undefined4 *)(iVar1 + 0x4c));
    if ((int)uVar4 < (int)lVar6) {
      iVar7 = (int)uVar4 / (int)uVar8;
      trapWord(6,uVar8,0);
      trapWord(5,uVar8 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (iVar7 < 1) {
        iVar7 = 1;
      }
    }
    else {
      iVar7 = 1000000000;
    }
    for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        iVar5 = piVar2[1];
        uVar3 = piVar2[3];
        trapWord(6,(ulonglong)uVar3,0);
        if (iVar7 < (int)((iVar5 - 1U) / uVar3 + 1)) {
          piVar2[4] = uVar3 * iVar7;
          fn_827C9040(param_1,piVar2 + 10,(longlong)piVar2[2] * (longlong)iVar5);
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        else {
          piVar2[4] = iVar5;
        }
        iVar5 = fn_827C0B88(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar5;
        piVar2[5] = *(int *)(iVar1 + 0x50);
        piVar2[6] = 0;
        piVar2[7] = 0;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
    for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        iVar5 = piVar2[1];
        uVar3 = piVar2[3];
        trapWord(6,(ulonglong)uVar3,0);
        if (iVar7 < (int)((iVar5 - 1U) / uVar3 + 1)) {
          piVar2[4] = uVar3 * iVar7;
          fn_827C9040(param_1,piVar2 + 10,
                            ((longlong)piVar2[2] * (longlong)iVar5 & 0x1ffffffU) << 7);
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        else {
          piVar2[4] = iVar5;
        }
        iVar5 = fn_827C0C68(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar5;
        piVar2[5] = *(int *)(iVar1 + 0x50);
        piVar2[6] = 0;
        piVar2[7] = 0;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
  }
  return;
}

