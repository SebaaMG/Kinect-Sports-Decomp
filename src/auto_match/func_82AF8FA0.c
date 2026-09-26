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
extern unsigned int *auStack_c0;
extern int fn_82ABF768();
extern int fn_82AF4E80();
extern int fn_82B86C90();
extern int fn_82B8C058();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;


undefined8
fn_82AF8FA0(undefined8 param_1,int param_2,uint *param_3,uint *param_4,undefined8 param_5,
             longlong param_6)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar9;
  uint uVar7;
  longlong lVar6;
  int iVar8;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  undefined8 uVar19;
  double dVar20;
  undefined1 auStack_c0 [16];
  double adStack_b0 [22];
  
  uVar1 = param_3[3];
  uVar18 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  if (((uVar18 != 0) && (uVar18 < 3)) && ((*(uint *)(param_2 + 8) & 1) == 0)) {
    dVar20 = (double)lbl_821AAD20;
    uVar19 = lbl_82005710;
    if ((uVar18 == 2) && (cVar9 = fn_82ABF768(lbl_82005710,param_3), cVar9 == '\0')) {
      dVar20 = (double)lbl_82002AE0;
    }
    uVar18 = 0;
    piVar17 = (int *)(param_2 + 0x2c);
    piVar16 = (int *)(param_2 + 0x30);
    do {
      puVar2 = (uint *)*piVar17;
      uVar15 = puVar2[3];
      if ((((*param_3 ^ *puVar2) & 0x1f) == 0) &&
         (((uVar15 == uVar1 ||
           (((*(uint *)(param_2 + 8) & 0x3f80) == 0x100 &&
            (cVar9 = fn_82ABF768(uVar19,param_3), cVar9 != '\0')))) &&
          (puVar3 = (uint *)*piVar16, (*puVar3 & 0x1f) == 0)))) {
        uVar4 = puVar3[3];
        uVar7 = fn_82B86C90(uVar4,adStack_b0,auStack_c0);
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar11 = 0;
          uVar13 = *puVar2 >> 0x19 & 7;
          if (uVar13 != 0) {
            uVar14 = 0;
            do {
              uVar5 = (*puVar3 >> 5 & 0xff) >> (uVar14 & 0x3f) & 3;
              if (((1 << uVar5 & uVar7) != 0) && (dVar20 == adStack_b0[uVar5])) {
                uVar10 = (uint)(1 << ((*puVar2 >> 5 & 0xff) >> (uVar14 & 0x3f) & 3)) | uVar10;
              }
              uVar11 = uVar11 + 1;
              uVar14 = uVar14 + 2;
            } while (uVar11 < uVar13);
          }
        }
        if (uVar15 == uVar1) {
          uVar12 = 0;
          uVar7 = 0;
          uVar15 = *param_3 >> 0x19 & 7;
          if (uVar15 != 0) {
            uVar13 = 0;
            do {
              uVar7 = uVar7 + 1;
              uVar11 = uVar13 & 0x3f;
              uVar13 = uVar13 + 2;
              uVar12 = (uint)(1 << ((*param_3 >> 5 & 0xff) >> uVar11 & 3)) | uVar12;
            } while (uVar7 < uVar15);
          }
          uVar12 = uVar12 & ~uVar10;
          uVar10 = ((0x8da691691448U >> (uVar12 & 0x7f)) >> (uVar12 & 0x7f)) >> (uVar12 & 0x7f) &
                   0xffffffff;
        }
        else {
          uVar10 = (ulonglong)(*param_3 >> 0x19);
        }
        uVar10 = uVar10 & 7;
        if (uVar10 == 0) {
LAB_82af9214:
          uVar15 = (uint)(uVar10 << 0x15) & 0x600000 | *param_4 & 0xff9fffff;
          *param_4 = uVar15;
          if ((*(uint *)(uVar4 + 8) & 0x3f80) == 16000) {
LAB_82af9278:
            *param_4 = (uVar18 & 1) << 0x14 | uVar15 & 0xffefffff;
            return 1;
          }
          iVar8 = fn_82B8C058(dVar20,param_1,uVar4);
          if (iVar8 != 4) {
            uVar15 = *param_4;
            goto LAB_82af9278;
          }
        }
        else if (((ulonglong)(*puVar2 >> 0x19) & 7) + uVar10 < 5) {
          for (puVar2 = *(uint **)(param_2 + 4); puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2])
          {
            uVar15 = puVar2[4];
            if (((uVar15 != 0) && ((*(uint *)(uVar15 + 8) & 0x3f80) == 0x3700)) &&
               ((*puVar2 & 0xe000000) != 0)) goto LAB_82af91e8;
          }
          uVar15 = 0;
LAB_82af91e8:
          if ((uVar15 == 0) ||
             (lVar6 = fn_82AF4E80(param_1,uVar15,param_2,0,0),
             (lVar6 + (uVar10 - param_6) & 0xffffffff) < 5)) goto LAB_82af9214;
        }
      }
      uVar18 = uVar18 + 1;
      piVar17 = piVar17 + 1;
      piVar16 = piVar16 + -1;
    } while (uVar18 < 2);
  }
  return 0;
}

