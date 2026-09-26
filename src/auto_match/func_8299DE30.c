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
extern int fn_82975B00();


undefined8
fn_8299DE30(int param_1,uint param_2,int *param_3,uint param_4,int *param_5,uint param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  
  uVar5 = 0;
  piVar4 = param_3;
  if (param_4 != 0) {
    do {
      puVar1 = (uint *)*piVar4;
      if ((puVar1 != (uint *)0x0) && (uVar6 = *puVar1, uVar6 != 0)) {
        uVar8 = uVar6 & 0xfff00000;
        uVar6 = uVar6 & 0xfffff;
        if ((uVar8 == 0x60000000) ||
           ((((uVar8 == 0x60500000 || (uVar8 == 0x60a00000)) || (uVar8 == 0x60f00000)) ||
            ((uVar8 == 0x72e00000 || (uVar8 == 0x60700000)))))) {
          if (uVar8 == 0x72100000) goto LAB_8299df70;
        }
        else {
          if (uVar8 != 0x72100000) {
            uVar6 = 0;
            if (param_6 != 0) {
              piVar9 = param_5;
              do {
                uVar8 = 0;
                if (puVar1[1] != 0) {
                  iVar3 = 0;
                  do {
                    if (((*(int *)(iVar3 + puVar1[2]) == *piVar9) ||
                        (*(int *)(*(int *)(*(int *)(iVar3 + puVar1[2]) * 4 +
                                          *(int *)(param_1 + 0x14)) + 0x38) == *piVar9)) &&
                       (((uint *)param_3[param_2] != (uint *)0x0 &&
                        (((param_2 < uVar5 && (uVar7 = *(uint *)param_3[param_2], uVar7 != 0)) &&
                         ((uVar7 & 0xfff00000) != 0x11000000)))))) {
                      return 1;
                    }
                    uVar8 = uVar8 + 1;
                    iVar3 = iVar3 + 4;
                  } while (uVar8 < puVar1[1]);
                }
                uVar6 = uVar6 + 1;
                piVar9 = piVar9 + 1;
              } while (uVar6 < param_6);
            }
            goto LAB_8299e01c;
          }
LAB_8299df70:
          uVar6 = 0;
        }
        uVar8 = 0;
        if (param_6 != 0) {
          piVar9 = param_5;
          do {
            if (uVar6 < puVar1[1]) {
              iVar3 = uVar6 << 2;
              uVar7 = uVar6;
              do {
                if (((*(int *)(iVar3 + puVar1[2]) == *piVar9) &&
                    ((int *)param_3[param_2] != (int *)0x0)) &&
                   ((param_2 < uVar5 && (*(int *)param_3[param_2] != 0)))) {
                  return 1;
                }
                iVar2 = *(int *)(*(int *)(iVar3 + puVar1[2]) * 4 + *(int *)(param_1 + 0x14));
                if (((*(uint *)(iVar2 + 0x3c) & 0x1f0000) != 0) || (*(int *)(iVar2 + 0x38) != -1)) {
                  fn_82975B00(param_1,0,0x12c6,0xffffffff82051458);
                  return 0xffffffff80004005;
                }
                uVar7 = uVar7 + 1;
                iVar3 = iVar3 + 4;
              } while (uVar7 < puVar1[1]);
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar8 < param_6);
        }
      }
LAB_8299e01c:
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < param_4);
  }
  return 0;
}

