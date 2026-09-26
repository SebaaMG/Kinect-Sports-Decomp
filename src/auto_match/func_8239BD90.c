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
extern int fn_822ABA88();
extern int fn_82399BA0();
extern int fn_8239C118();
extern int fn_824BD858();
extern int fn_82508078();
extern int fn_8288B760();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_8239BD90(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar3;
  longlong lVar7;
  ulonglong uVar8;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  iVar4 = fn_82399BA0();
  iVar5 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x34))(*(int **)(param_1 + 0x2e0));
  iVar5 = fn_822AA770(*(undefined4 *)(iVar5 * 4 + **(int **)(param_1 + 8)));
  if (iVar5 == 0) {
LAB_8239be14:
    bVar2 = false;
  }
  else {
    if (*(int *)(iVar5 + 0x168) == 0) {
      uVar6 = *(uint *)(iVar5 + 0x16c);
    }
    else {
      uVar6 = fn_8288B760();
      uVar6 = uVar6 & 0xff;
    }
    bVar2 = true;
    if (uVar6 == 0) goto LAB_8239be14;
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x7c))(*(int **)(param_1 + 0x2e0),param_2);
  piVar1 = *(int **)(iVar5 * 4 + **(int **)(param_1 + 8));
  uVar3 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x80))(*(int **)(param_1 + 0x2e0));
  iVar5 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),uVar3);
  if ((iVar4 != 0) && (bVar2)) {
    fn_824BD858((double)*(float *)(param_1 + 0x364),(double)*(float *)(param_1 + 0x368));
  }
  if ((*(int *)(param_2 + 0x118) == 0) && (*(int *)(param_2 + 0x124) != 0)) {
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
    uVar3 = 0xffffffff821b4d48;
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x90))();
    if ((iVar4 == 2) || (iVar4 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x90))(), iVar4 == 5)) {
      if (*(int *)(param_1 + 0x178) != 0) {
        return;
      }
      uVar3 = 0xffffffff821b4d74;
    }
    else {
      if (!bVar2) {
        return;
      }
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0x178) != 0) {
          return;
        }
        uVar3 = 0xffffffff821b4c1c;
      }
      else if (*(int *)(param_2 + 0x188) == 0) {
        uVar6 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
        if (uVar6 < *(uint *)(param_1 + 0x2d4)) {
          uVar6 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
          if (uVar6 < *(uint *)(param_1 + 0x2d4) >> 1) {
            if (lbl_821CC160 < *(float *)(param_2 + 0x268)) {
              lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
              uVar8 = (ulonglong)(-1 < (int)(-lbl_83265A28 & ~lbl_83265A28)) ^ 1;
LAB_8239c098:
              fn_8239C118(param_1,uVar8 + 8);
              return;
            }
            lVar7 = (longlong)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
            lbl_83265A28 = (uint)lVar7;
            if (0 < lVar7) {
              if (*(int *)(param_1 + 0x178) != 0) {
                return;
              }
              uVar3 = 0xffffffff821b4c08;
              goto LAB_8239c100;
            }
            if (*(float *)(param_2 + 0x268) < lbl_821CC160) {
              uVar8 = (longlong)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
              lbl_83265A28 = (uint)uVar8;
              uVar8 = -(ulonglong)((-uVar8 & ~uVar8 & 0xffffffff) >> 0x1f != 0);
              uVar8 = uVar8 << 0x20 | uVar8 & 0xfffffffb;
              goto LAB_8239c098;
            }
            if (*(int *)(iVar5 + 0x248) != 0) {
              if (*(int *)(iVar5 + 0x244) == 0) {
                if (*(int *)(param_1 + 0x178) != 0) {
                  return;
                }
                uVar3 = 0xffffffff821b4c60;
              }
              else {
                if (*(int *)(param_1 + 0x178) != 0) {
                  return;
                }
                uVar3 = 0xffffffff821b4c30;
              }
              goto LAB_8239c100;
            }
          }
          if (*(int *)(param_1 + 0x178) != 0) {
            return;
          }
          uVar3 = 0xffffffff821b4cac;
        }
        else {
          if (*(int *)(param_1 + 0x178) != 0) {
            return;
          }
          uVar3 = 0xffffffff821b4c90;
        }
      }
      else {
        if (*(int *)(param_1 + 0x178) != 0) {
          return;
        }
        uVar3 = 0xffffffff821b4c78;
      }
    }
  }
LAB_8239c100:
  fn_82508078(*(undefined4 *)(param_1 + 0xa4),uVar3,0);
  return;
}

