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
extern unsigned int *auStack_60;
extern int fn_82C3CD20();
extern int fn_82E34D90();
extern unsigned int lbl_821AAD20;


undefined8 fn_82E34E58(int param_1,int *param_2,uint *param_3,ushort *param_4,undefined8 *param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 auStack_60;
  
  uVar14 = 0;
  if (param_5 == (undefined8 *)0x0) {
    uVar14 = fn_82E34D90(param_2,param_3,param_4,&auStack_60);
    if ((int)uVar14 < 0) {
      return uVar14;
    }
  }
  else {
    auStack_60 = *param_5;
  }
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (param_4 != (ushort *)0x0)) &&
     ((param_3 != (uint *)0x0 && (iVar12 = fn_82C3CD20(0,param_3), iVar12 != 0)))) {
    uVar1 = param_4[1];
    if ((param_3[1] == (uint)uVar1) &&
       ((param_3[2] == *(uint *)(param_4 + 8) && (uVar4 = *(uint *)(param_4 + 2), *param_3 == uVar4)
        ))) {
      uVar2 = *param_4;
      if ((uVar2 == 0x161) || (bVar7 = false, uVar2 == 0x165)) {
        bVar7 = true;
      }
      if (((uVar2 == 0x162) || (uVar2 == 0x166)) || (bVar8 = false, uVar2 == 0x164)) {
        bVar8 = true;
      }
      if ((uVar2 == 0x163) || (bVar9 = false, uVar2 == 0x167)) {
        bVar9 = true;
      }
      if (((bVar7) || (bVar8)) || (bVar9)) {
        iVar12 = param_2[1];
        if ((iVar12 == 0) || (bVar10 = true, *param_2 == 0)) {
          bVar10 = false;
        }
        if ((iVar12 == 0) || (bVar11 = true, *param_2 != 0)) {
          bVar11 = false;
        }
        uVar13 = param_3[4];
        if (((((((uVar13 == 2) || (uVar13 == 3)) || (uVar13 == 4)) &&
              ((iVar5 = *param_2, iVar5 == 0 || (lbl_821AAD20 <= ((uint)((ulonglong)(auStack_60) >> 32)))))) &&
             ((iVar6 = param_2[4], iVar6 == 0 ||
              ((iVar5 != 0 &&
               ((iVar6 == 0 ||
                ((!bVar10 &&
                 ((iVar6 == 0 ||
                  ((param_2[0xd] != 0 &&
                   ((iVar6 == 0 ||
                    ((ulonglong)param_4[6] << 3 <=
                     ((longlong)param_2[0xd] * (longlong)param_2[0xc] & 0xffffffffU) / 1000)))))))))
                ))))))) &&
            ((param_2[3] == 0 ||
             (((!bVar10 && (iVar5 != 0)) || ((uint)(*(int *)(param_4 + 4) << 3) < (uint)param_2[10])
              ))))) && (0x7f < (uint)(*(int *)(param_4 + 4) << 3))) {
          uVar3 = param_4[7];
          uVar13 = (uint)uVar3;
          if ((((uint)(*(int *)(param_4 + 4) << 3) <= uVar3 * uVar4 * (uint)uVar1) &&
              (param_4[6] != 0)) && (uVar1 != 0)) {
            if ((8 < uVar1) || ((bVar7 && ((2 < uVar1 || (0xf < *(uint *)(param_4 + 0x10))))))) {
              return 0xffffffff80040000;
            }
            if (*(int *)(param_4 + 0xe) != 0) {
              if (uVar4 < 8000) {
                return 0xffffffff80040000;
              }
              if (96000 < uVar4) {
                return 0xffffffff80040000;
              }
              if ((bVar7) && (uVar3 != 0x10)) {
                return 0xffffffff80040000;
              }
              if ((((bVar8) || (bVar9)) && (uVar13 != 0x10)) && (uVar13 != 0x18)) {
                return 0xffffffff80040000;
              }
              if (uVar2 < 0x161) {
                return 0xffffffff80040000;
              }
              if (0x167 < uVar2) {
                return 0xffffffff80040000;
              }
              if (((*(int *)(param_4 + 0xc) != 0) &&
                  (((iVar5 == 0 || (iVar12 != 0)) ||
                   (((uint)param_2[5] < 0x65 && (param_2[5] != 0)))))) &&
                 ((((!bVar8 && (!bVar9)) || ((param_4[10] & 1) == 0)) ||
                  (((((param_3[5] == 0 && (param_3[3] == uVar13)) && (bVar9)) &&
                    (((iVar5 == 0 || (iVar12 != 0)) || (param_2[5] == 100)))) &&
                   ((!bVar11 && (!bVar10)))))))) {
                if ((*(uint *)(param_4 + 0x10) <= *(uint *)(param_4 + 0x12)) &&
                   ((*(uint *)(param_4 + 0x10) != 0 && (*(uint *)(param_4 + 0x12) < 0x100)))) {
                  return uVar14;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffff80070057;
}

