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
extern int fn_82BE8D50();
extern int fn_82BECA88();
extern int fn_82BED360();
extern int fn_82BED468();
extern int fn_82BEDE38();
extern int fn_82BF6B38();
extern int fn_82BF6BC0();
extern int fn_82BF7B48();
extern unsigned int lbl_83175468;


void fn_82BEE040(int *param_1)

{
  int iVar3;
  ulonglong uVar1;
  int *piVar4;
  int iVar5;
  longlong lVar2;
  undefined4 uVar6;
  
  if (param_1[0x14] != 0) {
    if (param_1[0x14] != 1) {
      return;
    }
    if ((param_1[0x14] != 2) && (param_1[0xd] != 0)) {
      piVar4 = *(int **)(param_1[0xd] + 0x10);
      if (piVar4 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar4 + 8))(piVar4);
        if (iVar5 == 0) {
          return;
        }
        (**(code **)(*piVar4 + 0xc))(piVar4);
        lVar2 = (**(code **)(*piVar4 + 0x14))(piVar4);
        if (lVar2 != 0) {
          fn_82BEDE38(param_1);
        }
      }
      fn_82BECA88(param_1);
    }
    return;
  }
  if ((param_1[0x14] != 2) && (param_1[0x14] == 0)) {
    iVar5 = param_1[0xd];
    if (iVar5 == 0) {
      uVar1 = thunk_FUN_82be5550(0x1c);
      if ((uVar1 & 0xffffffff) == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)fn_82BF7B48(uVar1,0,param_1[2],lbl_83175468,0,0);
      }
      if (piVar4 == (int *)0x0) {
        param_1[0x14] = 2;
      }
      else {
        iVar5 = fn_82BF6B38(param_1 + 0xb,piVar4);
        if ((iVar5 == 0) || (iVar5 = (**(code **)(*piVar4 + 4))(piVar4), iVar5 == 0)) {
          param_1[0x14] = 2;
        }
        fn_82BE8D50(piVar4);
      }
    }
    else {
      piVar4 = *(int **)(iVar5 + 0x10);
      if (piVar4 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
        if (iVar3 == 0) {
          return;
        }
        iVar3 = (**(code **)(*piVar4 + 0xc))(piVar4);
        if (iVar3 != 0) {
          if (piVar4[4] == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(piVar4[4] + 0x10);
          }
          iVar3 = fn_82BED468(param_1,uVar6);
          if (iVar3 != 0) {
            if (piVar4[4] == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(piVar4[4] + 0x10);
            }
            param_1[0x11] = *(int *)(iVar3 + 0xc);
            fn_82BF6BC0(param_1 + 0xb,iVar5);
            (**(code **)(*param_1 + 0x10))(param_1);
            return;
          }
        }
      }
      fn_82BED360(param_1);
    }
  }
  return;
}

