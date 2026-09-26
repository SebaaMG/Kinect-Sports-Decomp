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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82552B50();
extern int fn_82627DB0();


void fn_825FBB80(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar4 = *(int **)(param_2 * 4 + *(int *)(param_1 + 4));
  iVar1 = piVar4[0x5c];
  if (iVar1 == 0) {
    iVar5 = 0;
    iVar1 = *(int *)(*piVar4 + 0x1c);
    if (0 < *(short *)((int)piVar4 + 6)) {
      piVar6 = piVar4 + 0xa8;
      do {
        if (*(short *)((int)piVar6 + 0xa2) == -2) {
          fn_82627DB0(piVar4,piVar6);
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 0x74;
      } while (iVar5 < *(short *)((int)piVar4 + 6));
    }
    fn_82552B50(piVar4 + 0xa1,1);
    if ((int *)piVar4[0x9d] != (int *)0x0) {
      (**(code **)(*(int *)piVar4[0x9d] + 8))();
      puVar2 = (undefined4 *)piVar4[0x9d];
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      piVar4[0x9d] = 0;
    }
    if (piVar4[0xa5] != 0) {
      fn_8251FA58();
    }
    iVar1 = *(int *)(iVar1 + 0x93c);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0xa0), iVar1 != 0)) {
      for (piVar6 = *(int **)(iVar1 + 8); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
        iVar1 = *piVar6;
        if ((iVar1 != 0) && (*(int **)(iVar1 + 0x18) == piVar4)) {
          *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0x18) = 0;
          *(undefined4 *)(*(int *)(iVar1 + 4) + 400) = 0;
          break;
        }
      }
    }
    if ((piVar4[0x88] != 0) && (piVar4[0x92] != 0)) {
      fn_8251FA58();
    }
    if ((piVar4[0x93] == 0) && (piVar4[0x97] != 0)) {
      fn_8251FA58();
    }
    if ((piVar4[0x94] == 0) && (piVar4[0x98] != 0)) {
      fn_8251FA58();
    }
    if (piVar4[0x8a] != 0) {
      fn_8251FA58();
    }
    if (piVar4[0x8b] != 0) {
      fn_8251FA58();
    }
    if (piVar4[0x8c] != 0) {
      fn_8251FA58();
    }
    if (piVar4[0x8d] != 0) {
      fn_8251FA58();
    }
    piVar6 = (int *)piVar4[0x91];
    if (piVar6 != (int *)0x0) {
      uVar3 = piVar6[0x8e];
      piVar6[0x90] = piVar6[0x90] + -1;
      if ((uVar3 != 0xffffffff) &&
         (*(int **)(*(int *)(*(int *)(((int)uVar3 >> 8 & 0xffU) * 4 + *piVar6) + 4) +
                   (uVar3 & 0xff) * 4) == piVar4)) {
        piVar6[0x8e] = -1;
      }
    }
    fn_82522ED8(piVar4);
  }
  else {
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 1;
    piVar4[0x5c] = 0;
  }
  *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4)) = 0;
  return;
}

