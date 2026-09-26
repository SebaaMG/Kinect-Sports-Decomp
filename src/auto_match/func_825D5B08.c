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
extern int fn_82522ED8();
extern int fn_8262FEC8();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82645838();
extern unsigned int lbl_8320A898;


void fn_825D5B08(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  longlong lVar8;
  
  puVar2 = (uint *)*param_1;
  if (puVar2 != (uint *)0x0) {
    bVar1 = false;
    uVar4 = *puVar2 & 0xf;
    if (uVar4 - 1 < 9) {
      if (uVar4 == 2) {
        if (*(uint **)(lbl_8320A898 + 0x3144) == puVar2) goto LAB_825d5c24;
      }
      else {
        if (uVar4 == 3) {
          puVar5 = (undefined4 *)(lbl_8320A898 + 0x31b0);
          lVar8 = 0x1a;
          do {
            if ((uint *)*puVar5 == puVar2) {
              bVar1 = true;
            }
            puVar5 = puVar5 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        else if (uVar4 == 4) {
          bVar1 = *(uint **)(lbl_8320A898 + 0x3148) == puVar2;
          if (*(uint **)(lbl_8320A898 + 0x3158) == puVar2) {
            bVar1 = true;
          }
        }
        else {
          if (uVar4 == 5) {
            puVar6 = *(uint **)(lbl_8320A898 + 0x2ed8);
          }
          else if (uVar4 == 6) {
            puVar6 = *(uint **)(lbl_8320A898 + 0x3248);
          }
          else {
            if (uVar4 != 7) {
              if ((uVar4 == 8) || (uVar4 != 1)) {
                bVar1 = false;
              }
              else {
                puVar5 = (undefined4 *)(lbl_8320A898 + 0x315c);
                lVar8 = 0x10;
                do {
                  if ((uint *)*puVar5 == puVar2) {
                    bVar1 = true;
                  }
                  puVar5 = puVar5 + 1;
                  lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
              }
              goto LAB_825d5c1c;
            }
            puVar6 = *(uint **)(lbl_8320A898 + 0x3244);
          }
          bVar1 = puVar2 == puVar6;
        }
LAB_825d5c1c:
        if (bVar1) {
LAB_825d5c24:
          fn_82631920(lbl_8320A898,0);
        }
      }
    }
    fn_82645838(*param_1);
    fn_8262FEC8(*param_1);
    *param_1 = 0;
  }
  puVar2 = (uint *)param_1[1];
  if (puVar2 == (uint *)0x0) goto LAB_825d5d5c;
  bVar1 = false;
  uVar4 = *puVar2 & 0xf;
  if (uVar4 - 1 < 9) {
    if (uVar4 == 2) {
      if (*(uint **)(lbl_8320A898 + 0x3144) == puVar2) goto LAB_825d5d44;
    }
    else {
      if (uVar4 == 3) {
        puVar5 = (undefined4 *)(lbl_8320A898 + 0x31b0);
        lVar8 = 0x1a;
        do {
          if ((uint *)*puVar5 == puVar2) {
            bVar1 = true;
          }
          puVar5 = puVar5 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      else if (uVar4 == 4) {
        bVar1 = *(uint **)(lbl_8320A898 + 0x3148) == puVar2;
        if (*(uint **)(lbl_8320A898 + 0x3158) == puVar2) {
          bVar1 = true;
        }
      }
      else {
        if (uVar4 == 5) {
          puVar6 = *(uint **)(lbl_8320A898 + 0x2ed8);
        }
        else if (uVar4 == 6) {
          puVar6 = *(uint **)(lbl_8320A898 + 0x3248);
        }
        else {
          if (uVar4 != 7) {
            if ((uVar4 == 8) || (uVar4 != 1)) {
              bVar1 = false;
            }
            else {
              puVar5 = (undefined4 *)(lbl_8320A898 + 0x315c);
              lVar8 = 0x10;
              do {
                if ((uint *)*puVar5 == puVar2) {
                  bVar1 = true;
                }
                puVar5 = puVar5 + 1;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
            goto LAB_825d5d3c;
          }
          puVar6 = *(uint **)(lbl_8320A898 + 0x3244);
        }
        bVar1 = puVar2 == puVar6;
      }
LAB_825d5d3c:
      if (bVar1) {
LAB_825d5d44:
                    /* WARNING: Subroutine does not return */
        fn_82631578();
      }
    }
  }
  fn_82645838(param_1[1]);
  fn_8262FEC8(param_1[1]);
  param_1[1] = 0;
LAB_825d5d5c:
  piVar7 = param_1 + 0x1a;
  lVar8 = 2;
  do {
    if ((int *)*piVar7 != (int *)0x0) {
      (**(code **)(*(int *)*piVar7 + 8))();
      puVar5 = (undefined4 *)*piVar7;
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      *piVar7 = 0;
    }
    lVar8 = lVar8 + -1;
    piVar7 = piVar7 + 1;
  } while (lVar8 != 0);
  piVar7 = (int *)param_1[0x1d];
  while (piVar7 != (int *)0x0) {
    piVar3 = (int *)piVar7[3];
    if (piVar7[1] != 0) {
      (**(code **)(*(int *)*piVar7 + 0x54))();
      piVar7[1] = 0;
    }
    if ((int *)*piVar7 != (int *)0x0) {
      (**(code **)(*(int *)*piVar7 + 8))();
      puVar5 = (undefined4 *)*piVar7;
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      *piVar7 = 0;
    }
    puVar5 = (undefined4 *)piVar7[2];
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    fn_82522ED8(piVar7);
    piVar7 = piVar3;
  }
  fn_82522ED8(param_1);
  return;
}

