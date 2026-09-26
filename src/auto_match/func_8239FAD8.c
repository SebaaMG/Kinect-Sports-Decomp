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
extern int fn_822AA770();
extern int fn_82399BA0();
extern int fn_82399CB8();
extern int fn_8239FC88();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D2B38;
extern unsigned int lbl_831D2B80;


void fn_8239FAD8(double param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  *(float *)(param_2 + 0x290) = (float)(param_1 + (double)*(float *)(param_2 + 0x290));
  iVar2 = *(int *)(*(int *)(param_2 + 0x240) + 0x54);
  if (iVar2 == 3) {
    if (*(int *)(param_2 + 0x28c) == 4) {
      return;
    }
    *(undefined4 *)(param_2 + 0x28c) = 4;
    *(undefined4 *)(param_2 + 0x290) = lbl_821CC160;
    uVar5 = -((int)*(uint *)(param_2 + 0x288) >> 0x1f) - 1U & *(uint *)(param_2 + 0x288);
    goto LAB_8239fc6c;
  }
  if (iVar2 != 6) {
    if (iVar2 == 7) {
      if (*(int *)(param_2 + 0x28c) == 1) {
        return;
      }
      if (*(int *)(param_2 + 0x28c) == 2) {
        return;
      }
      iVar2 = fn_82399CB8();
      iVar2 = fn_822AA770(*(undefined4 *)
                                 (**(int **)(*(int *)(param_2 + 0x240) + 8) + iVar2 * 4));
      uVar3 = 1;
      if (iVar2 == 0) {
        uVar3 = 2;
      }
      fn_8239FC88(param_2,uVar3,1);
      return;
    }
    if (iVar2 == 0x10) {
      return;
    }
    iVar2 = fn_82399BA0();
    if (iVar2 != 0) {
      return;
    }
    if (*(int *)(param_2 + 0x28c) == 0) {
      return;
    }
    uVar4 = -(uint)(*(int *)(param_2 + 0x28c) != 4) & 1;
    *(undefined4 *)(param_2 + 0x290) = lbl_821CC160;
    *(undefined4 *)(param_2 + 0x28c) = 0;
    uVar5 = *(uint *)(param_2 + 0x288);
    if ((int)*(uint *)(param_2 + 0x288) < (int)uVar4) {
      uVar5 = uVar4;
    }
    goto LAB_8239fc6c;
  }
  if (*(int *)(*(int *)(param_2 + 0x240) + 0x860) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x28c) == 3) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x298);
  if (iVar2 == 0) {
    puVar1 = &lbl_831D2B38;
LAB_8239fc08:
    *(undefined **)(param_2 + 0x280) = puVar1;
  }
  else if (iVar2 == 1) {
    puVar1 = &lbl_831D2B80;
    goto LAB_8239fc08;
  }
  uVar5 = *(uint *)(param_2 + 0x288);
  *(int *)(param_2 + 0x298) = 1 - iVar2;
  *(undefined4 *)(param_2 + 0x28c) = 3;
  *(undefined4 *)(param_2 + 0x290) = lbl_821CC160;
  if ((int)uVar5 < 1) {
    uVar5 = 1;
  }
LAB_8239fc6c:
  *(uint *)(param_2 + 0x288) = uVar5;
  return;
}

