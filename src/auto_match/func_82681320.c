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
extern unsigned int *auStack_140;
extern unsigned int *auStack_1a0;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826800F0();
extern int fn_826806B8();
extern int fn_8273D528();
extern unsigned int lbl_82002BE8;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;


undefined4 * fn_82681320(int *param_1,ulonglong param_2)

{
  ushort *puVar1;
  bool bVar2;
  char cVar9;
  longlong lVar3;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar4;
  int iVar8;
  ushort *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint auStack_1a0 [4];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined1 auStack_140 [320];
  
  if (param_1 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  cVar9 = (**(code **)(*param_1 + 8))();
  if (cVar9 == '\0') {
    return (undefined4 *)0x0;
  }
  iVar13 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  auStack_1a0[0] = 0;
  (**(code **)(*param_1 + 0x28))(param_1,auStack_1a0,4);
  if ((((ulonglong)(auStack_1a0[0] >> 0x10) | (ulonglong)auStack_1a0[0] & 0xffffffffffff0000) >> 8 &
       0xffff | ((((ulonglong)auStack_1a0[0] & 0xffff) << 0x10 |
                 (ulonglong)auStack_1a0[0] & 0xffffffff0000ffff) & 0xffff00) << 8) == 0x20534444) {
    auStack_1a0[0] = 0;
    (**(code **)(*param_1 + 0x28))(param_1,auStack_1a0,4);
    if (((((ulonglong)(auStack_1a0[0] >> 0x10) | (ulonglong)auStack_1a0[0] & 0xffffffffffff0000) >>
          8 & 0xffff |
         ((((ulonglong)auStack_1a0[0] & 0xffff) << 0x10 |
          (ulonglong)auStack_1a0[0] & 0xffffffff0000ffff) & 0xffff00) << 8) == 0x7c) &&
       (iVar6 = (**(code **)(*param_1 + 0x28))(param_1,auStack_140,0x78), iVar6 == 0x78)) {
      uStack_190 = 0;
      uStack_184 = 0;
      uStack_188 = 0;
      uStack_18c = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_178 = 1;
      fn_8273D528(&uStack_174,0);
      uStack_150 = 0;
      uStack_154 = 0;
      uStack_158 = 0;
      uStack_15c = 0;
      uStack_160 = 0;
      uStack_14c = 0;
      cVar9 = fn_826800F0(&uStack_190,auStack_140,0,&uStack_160);
      uVar5 = uStack_174;
      if (cVar9 != '\0') {
        puVar7 = (undefined4 *)fn_8267B890(lbl_831E7E64,0x30,0);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7[1] = 1;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          *puVar7 = &lbl_82002BE8;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[3] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 1;
        }
        uVar5 = uStack_174;
        if (puVar7 != (undefined4 *)0x0) {
          puVar7[4] = uStack_188;
          puVar7[3] = uStack_18c;
          puVar7[5] = uStack_184;
          puVar7[8] = uStack_178;
          puVar7[2] = uStack_190;
          if ((param_2 & 0xffffffff) == 0) {
            param_2 = (ulonglong)lbl_831E7E64;
          }
          lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
          uVar11 = lVar3 - lVar4;
          iVar6 = fn_8267B890(param_2,uVar11,0);
          if (iVar6 != 0) {
            iVar8 = (**(code **)(*param_1 + 0x28))(param_1,iVar6,uVar11);
            iVar12 = (int)uVar11;
            if (iVar8 != iVar12) {
              fn_8267C498(puVar7);
              fn_8267BE38(iVar6);
              uVar5 = uStack_174;
              goto LAB_826813d0;
            }
            if (((int)puVar7[2] < 10) || (bVar2 = true, 0xc < (int)puVar7[2])) {
              bVar2 = false;
            }
            if ((bVar2) &&
               (lVar3 = (longlong)(iVar12 >> 1) + (ulonglong)(iVar12 < 0 && (uVar11 & 1) != 0),
               0 < lVar3)) {
              puVar10 = (ushort *)(iVar6 + -2);
              do {
                puVar1 = puVar10 + 1;
                iVar13 = iVar13 + 1;
                puVar10 = puVar10 + 1;
                *puVar10 = *puVar1 << 8 | *puVar1 >> 8;
              } while (iVar13 < (int)lVar3);
            }
            puVar7[6] = iVar6;
            puVar7[7] = iVar12;
            cVar9 = fn_826806B8(puVar7,&uStack_160);
            if (cVar9 != '\0') {
              fn_8267BE38(uStack_174);
              return puVar7;
            }
          }
          fn_8267C498(puVar7);
          uVar5 = uStack_174;
        }
      }
      goto LAB_826813d0;
    }
  }
  uVar5 = 0;
LAB_826813d0:
  fn_8267BE38(uVar5);
  return (undefined4 *)0x0;
}

