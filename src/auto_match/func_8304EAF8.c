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
extern int fn_82FA5060();
extern unsigned int lbl_831BC770;


void fn_8304EAF8(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                  char param_7,uint *param_8)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  if ((*(int *)(param_1 + 8) != 0) && ((*(uint *)(param_2 + 8) & 4) != 0)) {
    if (param_8 == (uint *)0x0) {
      uVar7 = (uint)*(ushort *)(param_3 + 0xe);
    }
    else {
      uVar7 = *param_8;
    }
    *(undefined4 *)(param_3 + 0x14) = 0;
    *(undefined2 *)(param_3 + 0x10) = 0;
    if (param_7 == '\0') {
      uVar4 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar5 = 0;
        do {
          uVar1 = *(uint *)(iVar5 + *(int *)(param_1 + 8) + 4);
          if ((param_4 <= uVar1) && (uVar1 < uVar7 + param_4)) {
            *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 0xc;
        } while (uVar4 < *(uint *)(param_1 + 4));
      }
    }
    else {
      uVar4 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar5 = 0;
        do {
          uVar1 = *(uint *)(iVar5 + *(int *)(param_1 + 8) + 4);
          if (((param_4 <= uVar1) && (uVar1 < param_6)) ||
             ((param_5 <= uVar1 && (uVar1 < (uVar7 - param_6) + param_4 + param_5)))) {
            *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 0xc;
        } while (uVar4 < *(uint *)(param_1 + 4));
      }
    }
    if ((ulonglong)*(ushort *)(param_3 + 0x10) != 0) {
      piVar2 = (int *)fn_82FA5060(lbl_831BC770,(ulonglong)*(ushort *)(param_3 + 0x10) * 0x14);
      *(int **)(param_3 + 0x14) = piVar2;
      if (piVar2 == (int *)0x0) {
        *(undefined2 *)(param_3 + 0x10) = 0;
      }
      else {
        uVar4 = 0;
        if (param_7 == '\0') {
          if (*(int *)(param_1 + 4) != 0) {
            piVar6 = piVar2 + 2;
            iVar5 = 0;
            piVar2 = piVar2 + -5;
            do {
              uVar1 = *(uint *)(iVar5 + *(int *)(param_1 + 8) + 4);
              if ((param_4 <= uVar1) && (uVar1 < uVar7 + param_4)) {
                piVar2 = piVar2 + 5;
                *piVar2 = param_2;
                piVar6[-1] = *(int *)(iVar5 + *(int *)(param_1 + 8) + 4) - param_4;
                iVar3 = iVar5 + *(int *)(param_1 + 8);
                *piVar6 = *(int *)(iVar5 + *(int *)(param_1 + 8));
                piVar6[1] = *(int *)(iVar3 + 4);
                piVar6[2] = *(int *)(iVar3 + 8);
                piVar6 = piVar6 + 5;
              }
              uVar4 = uVar4 + 1;
              iVar5 = iVar5 + 0xc;
            } while (uVar4 < *(uint *)(param_1 + 4));
          }
        }
        else if (*(int *)(param_1 + 4) != 0) {
          iVar5 = 0;
          do {
            uVar1 = *(uint *)(iVar5 + *(int *)(param_1 + 8) + 4);
            if (((param_4 <= uVar1) && (uVar1 < param_6)) ||
               ((param_5 <= uVar1 && (uVar1 < (uVar7 - param_6) + param_4 + param_5)))) {
              *piVar2 = param_2;
              uVar1 = *(uint *)(iVar5 + *(int *)(param_1 + 8) + 4);
              iVar3 = uVar1 - param_4;
              if (uVar1 < param_4) {
                piVar2[1] = (iVar3 - param_5) + param_6;
              }
              else {
                piVar2[1] = iVar3;
              }
              iVar3 = iVar5 + *(int *)(param_1 + 8);
              piVar2[2] = *(int *)(iVar5 + *(int *)(param_1 + 8));
              piVar2[3] = *(int *)(iVar3 + 4);
              piVar2[4] = *(int *)(iVar3 + 8);
              piVar2 = piVar2 + 5;
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0xc;
          } while (uVar4 < *(uint *)(param_1 + 4));
        }
      }
    }
  }
  return;
}

