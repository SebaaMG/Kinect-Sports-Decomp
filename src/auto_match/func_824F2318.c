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
extern int fn_82545950();
extern int fn_82545A90();
extern int fn_8262FEC8();
extern int fn_8263A1B8();
extern int fn_82645838();
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C1E18;
extern unsigned int lbl_8320A898;


void fn_824F2318(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  longlong lVar8;
  
  *param_1 = &lbl_821C1E18;
  piVar2 = (int *)param_1[3];
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))(piVar3,1);
      *piVar2 = 0;
    }
    piVar3 = (int *)piVar2[1];
    fn_82522ED8(piVar2);
    piVar2 = piVar3;
  }
  param_1[3] = 0;
  piVar2 = (int *)param_1[4];
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))(piVar3,1);
      *piVar2 = 0;
    }
    piVar3 = (int *)piVar2[1];
    fn_82522ED8(piVar2);
    piVar2 = piVar3;
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    fn_82545950(param_1 + 5);
  }
  if (param_1[6] != 0) {
    fn_82545A90(param_1 + 6);
  }
  if (param_1[7] != 0) {
    fn_82545950(param_1 + 7);
  }
  if (param_1[8] != 0) {
    fn_82545A90(param_1 + 8);
  }
  if (param_1[9] != 0) {
    fn_82545950(param_1 + 9);
  }
  if (param_1[10] != 0) {
    fn_82545A90(param_1 + 10);
  }
  if (param_1[0xb] != 0) {
    fn_82545950(param_1 + 0xb);
  }
  if (param_1[0xc] != 0) {
    fn_82545A90(param_1 + 0xc);
  }
  if (param_1[0xd] != 0) {
    fn_82545A90(param_1 + 0xd);
  }
  puVar4 = (uint *)param_1[0xe];
  if (puVar4 == (uint *)0x0) goto LAB_824f259c;
  bVar1 = false;
  uVar5 = *puVar4 & 0xf;
  if (uVar5 - 1 < 9) {
    if (uVar5 == 2) {
      if (*(uint **)(lbl_8320A898 + 0x3144) == puVar4) goto LAB_824f257c;
    }
    else {
      if (uVar5 == 3) {
        puVar6 = (undefined4 *)(lbl_8320A898 + 0x31b0);
        lVar8 = 0x1a;
        do {
          if ((uint *)*puVar6 == puVar4) {
            bVar1 = true;
          }
          puVar6 = puVar6 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      else if (uVar5 == 4) {
        bVar1 = *(uint **)(lbl_8320A898 + 0x3148) == puVar4;
        if (*(uint **)(lbl_8320A898 + 0x3158) == puVar4) {
          bVar1 = true;
        }
      }
      else {
        if (uVar5 == 5) {
          puVar7 = *(uint **)(lbl_8320A898 + 0x2ed8);
        }
        else if (uVar5 == 6) {
          puVar7 = *(uint **)(lbl_8320A898 + 0x3248);
        }
        else {
          if (uVar5 != 7) {
            if ((uVar5 == 8) || (uVar5 != 1)) {
              bVar1 = false;
            }
            else {
              puVar6 = (undefined4 *)(lbl_8320A898 + 0x315c);
              lVar8 = 0x10;
              do {
                if ((uint *)*puVar6 == puVar4) {
                  bVar1 = true;
                }
                puVar6 = puVar6 + 1;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
            goto LAB_824f2574;
          }
          puVar7 = *(uint **)(lbl_8320A898 + 0x3244);
        }
        bVar1 = puVar4 == puVar7;
      }
LAB_824f2574:
      if (bVar1) {
LAB_824f257c:
        fn_8263A1B8(lbl_8320A898,0,0);
      }
    }
  }
  fn_82645838(param_1[0xe]);
  fn_8262FEC8(param_1[0xe]);
  param_1[0xe] = 0;
LAB_824f259c:
  if (param_1[0xf] != 0) {
    fn_8251FA58();
    param_1[0xf] = 0;
  }
  if (param_1[0x10] != 0) {
    fn_8251FA58();
    param_1[0x10] = 0;
  }
  if (param_1[0x11] != 0) {
    fn_8251FA58();
    param_1[0x11] = 0;
  }
  if (param_1[0x12] != 0) {
    fn_8251FA58();
    param_1[0x12] = 0;
  }
  if (param_1[0x13] != 0) {
    fn_8251FA58();
    param_1[0x13] = 0;
  }
  *param_1 = &lbl_821C1424;
  return;
}

