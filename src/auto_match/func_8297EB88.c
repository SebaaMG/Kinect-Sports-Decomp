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
extern int fn_82969030();
extern int fn_8296E0C0();
extern int fn_8296E438();
extern int fn_8296EB38();
extern int fn_8296EDE0();
extern int fn_8296F448();
extern int fn_8296F968();
extern int fn_8296FF60();
extern int fn_829708A8();
extern int fn_82971180();
extern int fn_82971580();
extern int fn_82971B58();
extern int fn_82975BB8();
extern int fn_82975C68();
extern int fn_82976198();
extern int fn_829768F0();
extern int fn_829787A0();
extern int fn_8297B810();


undefined8 fn_8297EB88(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  
  uVar5 = fn_82975C68();
  if (-1 < (int)uVar5) {
    uVar5 = fn_8296E438(param_1);
    if (((int)uVar5 == 0) || (-1 < (int)uVar5)) {
      uVar5 = fn_8296EB38(param_1);
      if (((int)uVar5 == 0) || (-1 < (int)uVar5)) {
        uVar5 = fn_82969030(param_1);
        if (((int)uVar5 == 0) || (-1 < (int)uVar5)) {
          uVar5 = fn_82971580(param_1);
          if (((int)uVar5 == 0) || (-1 < (int)uVar5)) {
            uVar14 = 0;
            if (*(int *)(param_1 + 0xc) != 0) {
              iVar15 = 0;
              do {
                puVar3 = *(uint **)(iVar15 + *(int *)(param_1 + 0x18));
                if ((*puVar3 & 0xfff00000) == 0x10200000) {
                  *puVar3 = puVar3[3] & 0xfffff | 0x10000000;
                }
                uVar14 = uVar14 + 1;
                iVar15 = iVar15 + 4;
              } while (uVar14 < *(uint *)(param_1 + 0xc));
            }
            if ((*(uint *)(param_1 + 0xcc) & 4) == 0) {
              uVar5 = fn_82971B58(param_1);
              if (((int)uVar5 != 0) && ((int)uVar5 < 0)) {
                return uVar5;
              }
              uVar5 = fn_8296E0C0(param_1);
              if (((int)uVar5 != 0) && ((int)uVar5 < 0)) {
                return uVar5;
              }
              uVar14 = 0;
              do {
                uVar5 = fn_8297B810(param_1);
                if ((int)uVar5 == 0) {
                  uVar5 = 0;
                }
                else if ((int)uVar5 < 0) {
                  return uVar5;
                }
                uVar6 = fn_8296E438(param_1);
                if ((int)uVar6 == 0) {
                  uVar6 = 0;
                }
                else if ((int)uVar6 < 0) {
                  return uVar6;
                }
                uVar7 = fn_8296EDE0(param_1);
                if ((int)uVar7 == 0) {
                  uVar7 = 0;
                }
                else if ((int)uVar7 < 0) {
                  return uVar7;
                }
                uVar8 = fn_8296F448(param_1,0);
                if ((int)uVar8 == 0) {
                  uVar8 = 0;
                }
                else if ((int)uVar8 < 0) {
                  return uVar8;
                }
                uVar9 = fn_8296F968(param_1);
                if ((int)uVar9 == 0) {
                  uVar9 = 0;
                }
                else if ((int)uVar9 < 0) {
                  return uVar9;
                }
                uVar10 = fn_829768F0(param_1);
                if ((int)uVar10 == 0) {
                  uVar10 = 0;
                }
                else if ((int)uVar10 < 0) {
                  return uVar10;
                }
                uVar11 = fn_829787A0(param_1);
                if ((int)uVar11 == 0) {
                  uVar11 = 0;
                }
                else if ((int)uVar11 < 0) {
                  return uVar11;
                }
                uVar12 = fn_8296FF60(param_1);
                if ((int)uVar12 == 0) {
                  uVar12 = 0;
                }
                else if ((int)uVar12 < 0) {
                  return uVar12;
                }
                uVar13 = fn_829708A8(param_1);
                if ((int)uVar13 == 0) {
                  uVar13 = 0;
                }
                else if ((int)uVar13 < 0) {
                  return uVar13;
                }
              } while (((int)uVar13 == 0 ||
                        ((int)uVar12 == 0 ||
                        ((int)uVar11 == 0 ||
                        ((int)uVar10 == 0 ||
                        ((int)uVar9 == 0 ||
                        ((int)uVar8 == 0 ||
                        ((int)uVar7 == 0 || ((int)uVar6 == 0 || (int)uVar5 == 0)))))))) &&
                      (uVar14 = uVar14 + 1, uVar14 < 0x100));
              if (uVar14 == 0x100) {
                fn_82975BB8(param_1,0,0,0xffffffff82038a6c);
              }
              uVar14 = 0;
              if (*(int *)(param_1 + 8) != 0) {
                iVar15 = 0;
                do {
                  iVar4 = *(int *)(iVar15 + *(int *)(param_1 + 0x14));
                  uVar1 = *(uint *)(*(int *)(*(int *)(iVar4 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4
                                   );
                  if ((((uVar1 & 0x100) != 0) && ((uVar1 & 0x400) == 0)) && ((uVar1 & 0x800) == 0))
                  {
                    uVar2 = *(undefined4 *)(param_1 + 0x78);
                    *(undefined4 *)(iVar4 + 0xc) = 0xffffffff;
                    *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
                    *(undefined4 *)(iVar4 + 4) = uVar2;
                  }
                  uVar14 = uVar14 + 1;
                  iVar15 = iVar15 + 4;
                } while (uVar14 < *(uint *)(param_1 + 8));
              }
              uVar5 = fn_82976198(param_1);
              if (((int)uVar5 != 0) && ((int)uVar5 < 0)) {
                return uVar5;
              }
              uVar5 = fn_82971180(param_1);
              if (((int)uVar5 != 0) && ((int)uVar5 < 0)) {
                return uVar5;
              }
              uVar5 = fn_8296EB38(param_1);
              if (((int)uVar5 != 0) && ((int)uVar5 < 0)) {
                return uVar5;
              }
              uVar5 = fn_82969030(param_1);
              if (((int)uVar5 != 0) && ((int)uVar5 < 0)) {
                return uVar5;
              }
              uVar5 = fn_82971580(param_1);
              if (((int)uVar5 != 0) && ((int)uVar5 < 0)) {
                return uVar5;
              }
              *(undefined4 *)(param_1 + 0xd8) = 1;
            }
            else {
              *(undefined4 *)(param_1 + 0xd8) = 1;
              uVar5 = fn_8296EB38(param_1);
              if (((int)uVar5 != 0) && ((int)uVar5 < 0)) {
                return uVar5;
              }
            }
            uVar5 = 0;
          }
        }
      }
    }
  }
  return uVar5;
}

