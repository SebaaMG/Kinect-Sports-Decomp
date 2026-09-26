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


void fn_82625080(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_2 == 0) && (iVar1 = param_1[0x5c], iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 1;
    param_1[0x5c] = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0x1c);
    iVar4 = 0;
    if (0 < *(short *)((int)param_1 + 6)) {
      piVar5 = param_1 + 0xa8;
      do {
        if (*(short *)((int)piVar5 + 0xa2) == -2) {
          fn_82627DB0(param_1,piVar5);
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x74;
      } while (iVar4 < *(short *)((int)param_1 + 6));
    }
    fn_82552B50(param_1 + 0xa1,1);
    if ((int *)param_1[0x9d] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x9d] + 8))();
      puVar2 = (undefined4 *)param_1[0x9d];
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      param_1[0x9d] = 0;
    }
    if (param_1[0xa5] != 0) {
      fn_8251FA58();
    }
    iVar1 = *(int *)(iVar1 + 0x93c);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0xa0), iVar1 != 0)) {
      for (piVar5 = *(int **)(iVar1 + 8); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
        iVar1 = *piVar5;
        if ((iVar1 != 0) && (*(int **)(iVar1 + 0x18) == param_1)) {
          *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0x18) = 0;
          *(undefined4 *)(*(int *)(iVar1 + 4) + 400) = 0;
          break;
        }
      }
    }
    if ((param_1[0x88] != 0) && (param_1[0x92] != 0)) {
      fn_8251FA58();
    }
    if ((param_1[0x93] == 0) && (param_1[0x97] != 0)) {
      fn_8251FA58();
    }
    if ((param_1[0x94] == 0) && (param_1[0x98] != 0)) {
      fn_8251FA58();
    }
    if (param_1[0x8a] != 0) {
      fn_8251FA58();
    }
    if (param_1[0x8b] != 0) {
      fn_8251FA58();
    }
    if (param_1[0x8c] != 0) {
      fn_8251FA58();
    }
    if (param_1[0x8d] != 0) {
      fn_8251FA58();
    }
    piVar5 = (int *)param_1[0x91];
    if (piVar5 != (int *)0x0) {
      uVar3 = piVar5[0x8e];
      piVar5[0x90] = piVar5[0x90] + -1;
      if ((uVar3 != 0xffffffff) &&
         (*(int **)(*(int *)(*(int *)(((int)uVar3 >> 8 & 0xffU) * 4 + *piVar5) + 4) +
                   (uVar3 & 0xff) * 4) == param_1)) {
        piVar5[0x8e] = -1;
      }
    }
    fn_82522ED8(param_1);
  }
  return;
}

