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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_120;
extern unsigned int *auStack_170;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a8;
extern unsigned int *auStack_1c4;
extern unsigned int *auStack_1cc;
extern unsigned int *auStack_1d0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82897B18();
extern int fn_828F0170();
extern int fn_828F0CE0();
extern int fn_828F9CB0();
extern int fn_828FA6F8();
extern int fn_828FCAC0();
extern int fn_82901DD0();
extern int fn_82901E10();
extern int fn_829037B8();
extern int fn_82903908();
extern int fn_82903A60();
extern int fn_82904258();
extern int fn_829042E8();
extern int fn_82913870();
extern int fn_829145D8();
extern int fn_829166B8();
extern int fn_82930138();
extern int fn_82930180();
extern int fn_829603E0();
extern int fn_82963920();
extern int fn_829640F0();
extern int fn_8297F260();
extern int fn_829929D8();
extern int fn_82992B68();
extern int fn_829969C8();
extern int fn_829A6298();
extern int fn_829A9A18();
extern int fn_82AA7300();
extern int fn_82BA02A8();
extern int fn_82F68780();
extern int fn_82F688E8();
extern int iRam00000000;
extern unsigned int iStack_1b0;
extern unsigned int iStack_1b4;
extern unsigned int lbl_82027638;
extern unsigned int lbl_82027648;
extern unsigned int lbl_820276CC;
extern unsigned int lbl_820276DC;
extern unsigned int stack0x0000002c;
extern unsigned int uStack_178;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1b8;


/* WARNING: Removing unreachable block (ram,0x829174ac) */
/* WARNING: Removing unreachable block (ram,0x8291755c) */
/* WARNING: Removing unreachable block (ram,0x829175a0) */
/* WARNING: Removing unreachable block (ram,0x82917760) */
/* WARNING: Removing unreachable block (ram,0x8291776c) */
/* WARNING: Removing unreachable block (ram,0x82917014) */
/* WARNING: Removing unreachable block (ram,0x82916fa0) */
/* WARNING: Removing unreachable block (ram,0x82916fbc) */
/* WARNING: Removing unreachable block (ram,0x82916fc8) */
/* WARNING: Removing unreachable block (ram,0x82917688) */
/* WARNING: Removing unreachable block (ram,0x8291769c) */
/* WARNING: Removing unreachable block (ram,0x829176d0) */
/* WARNING: Removing unreachable block (ram,0x829176c8) */
/* WARNING: Removing unreachable block (ram,0x829176d4) */
/* WARNING: Removing unreachable block (ram,0x829176e4) */
/* WARNING: Removing unreachable block (ram,0x829176fc) */
/* WARNING: Removing unreachable block (ram,0x82917708) */
/* WARNING: Removing unreachable block (ram,0x82917724) */
/* WARNING: Removing unreachable block (ram,0x8291772c) */
/* WARNING: Removing unreachable block (ram,0x82917730) */
/* WARNING: Removing unreachable block (ram,0x82917738) */
/* WARNING: Removing unreachable block (ram,0x82917754) */
/* WARNING: Removing unreachable block (ram,0x829171d4) */
/* WARNING: Removing unreachable block (ram,0x829171e0) */
/* WARNING: Removing unreachable block (ram,0x829171f4) */
/* WARNING: Removing unreachable block (ram,0x82917208) */
/* WARNING: Removing unreachable block (ram,0x82917214) */
/* WARNING: Removing unreachable block (ram,0x82917228) */
/* WARNING: Removing unreachable block (ram,0x82917628) */
/* WARNING: Removing unreachable block (ram,0x8291753c) */
/* WARNING: Removing unreachable block (ram,0x829172a0) */

ulonglong fn_82916830(uint *param_1,uint param_2,uint param_3,char *param_4,undefined8 param_5,
                       ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_r0;
  ulonglong uVar6;
  uint uVar10;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  undefined8 uVar9;
  undefined8 *puVar14;
  undefined *puVar15;
  byte bVar16;
  ulonglong uVar17;
  char *pcVar18;
  bool bVar19;
  longlong lVar20;
  uint *puStack00000014;
  char *pcStack0000002c;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  int *in_stack_00000064;
  undefined4 *in_stack_0000006c;
  uint *in_stack_00000074;
  undefined1 auStack_1d0 [4];
  undefined1 auStack_1cc [8];
  undefined1 auStack_1c4 [4];
  int *piStack_1c0;
  int *piStack_1bc;
  uint uStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  undefined1 auStack_1a8 [4];
  uint uStack_1a4;
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  uint auStack_170 [20];
  undefined1 auStack_120 [288];
  
  puStack00000014 = param_1;
  pcStack0000002c = param_4;
  fn_82930138(auStack_190,0x100000,0x10000);
  uVar17 = 0;
  piStack_1c0 = (int *)0x0;
  piStack_1bc = (int *)0x0;
  bVar19 = false;
  iStack_1b4 = 0;
  bVar1 = false;
  uStack_1b8 = fn_82F68780(0,0);
  fn_82F68780(0xffffffffffffffff,0x8001f);
  fn_82F68780(0,0x30000);
  if (in_stack_00000074 == (uint *)0x0) {
    lVar20 = 8;
    puVar5 = &uStack_178;
    do {
      puVar14 = puVar5;
      puVar5 = puVar14 + 1;
      *puVar5 = 0;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    in_stack_00000074 = auStack_170;
    *(undefined4 *)(puVar14 + 2) = 0;
  }
  else {
    in_stack_00000074[7] = 0;
  }
  if (((in_stack_0000005c & 0xfca1e000) == 0) &&
     (((param_3 == 0 || ((in_stack_0000005c & 0x18) == 0)) && (in_stack_00000064 != (int *)0x0)))) {
    puVar3 = (undefined4 *)param_1[2];
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    fn_8265C990(param_1[6],0x24810000);
    puVar12 = param_1 + 1;
    *param_1 = param_2;
    param_1[0x22] = (uint)param_8;
    bVar4 = false;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[3] = in_stack_00000054;
    param_1[5] = in_stack_0000005c;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x12] = 0xffffffff;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    if ((param_6 & 0xffffffff) != 0) {
      param_1[4] = 0x46580200;
      uVar6 = fn_8265C940(0x200,0x24810000);
      if ((uVar6 & 0xffffffff) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = fn_829A9A18(uVar6,param_1[0x23]);
      }
      bVar4 = true;
      param_1[5] = param_1[5] | 0x100;
      goto LAB_82916da0;
    }
    if ((in_stack_0000005c & 0xc0) == 0) goto LAB_82916ae8;
    iVar13 = fn_828F0170(in_stack_00000054,2,auStack_1a8);
    if (-1 < iVar13) {
      if ((uStack_1a4 & 0xffff0000) == 0xfffe0000) {
        if ((in_stack_0000005c & 0x40) != 0) {
          if ((uStack_1a4 & 0xff00) == 0x300) {
            puVar15 = &lbl_82027638;
          }
          else {
            puVar15 = &lbl_82027648;
          }
          goto LAB_82916ae4;
        }
      }
      else if (((uStack_1a4 & 0xffff0000) == 0xffff0000) && ((in_stack_0000005c & 0x80) != 0)) {
        if ((uStack_1a4 & 0xff00) == 0x300) {
          puVar15 = &lbl_820276CC;
        }
        else {
          puVar15 = &lbl_820276DC;
        }
LAB_82916ae4:
        in_stack_0000005c = in_stack_0000005c | 5;
        param_1[3] = (uint)puVar15;
      }
LAB_82916ae8:
      iVar13 = fn_828F0170(param_1[3],2,auStack_1a8);
      if (-1 < iVar13) {
        param_1[5] = in_stack_0000005c;
        bVar19 = uStack_1a4 == 0xfffe0100;
        param_1[4] = uStack_1a4;
        if (bVar19) {
          param_1[4] = 0xfffe0101;
        }
        bVar1 = param_1[4] == 0xffff0100;
        if (bVar1) {
          param_1[4] = 0xffff0101;
        }
        uVar6 = (ulonglong)param_1[4];
        if (uVar6 < 0xffff0265) {
          if (uVar6 == 0xffff0264) goto LAB_82916d2c;
          if (uVar6 < 0xfffe0301) {
            if (uVar6 == 0xfffe0300) goto LAB_82916d78;
            if (uVar6 == 0x54580100) {
              param_1[5] = in_stack_0000005c | 0x100;
              uVar6 = fn_8265C940(0x200,0x24810000);
              if ((uVar6 & 0xffffffff) == 0) goto LAB_82916d9c;
              uVar10 = fn_829A9A18(uVar6,param_1[0x23]);
            }
            else {
              uVar6 = uVar6 + 0x1feff;
              if (((uVar6 != 0) && ((uVar6 & 0xffffffff) != 0xff)) &&
                 (((uVar6 & 0xffffffff) != 0x101 && ((uVar6 & 0xffffffff) != 0x1fe))))
              goto LAB_82916d70;
              uVar6 = fn_8265C940(0x1fc,0x24810000);
              if ((uVar6 & 0xffffffff) == 0) goto LAB_82916d9c;
              uVar10 = fn_829A6298(uVar6,param_8,param_1[0x23]);
            }
            goto LAB_82916da0;
          }
          if (uVar6 < 0xffff0105) {
            if (0xffff0100 < uVar6) {
              param_1[5] = in_stack_0000005c & 0xfffffffb;
              uVar6 = fn_8265C940(0x488,0x24810000);
              if ((uVar6 & 0xffffffff) == 0) goto LAB_82916d9c;
              uVar10 = fn_829969C8(uVar6,param_1[0x23]);
              goto LAB_82916da0;
            }
            if (uVar6 < 0xfffe03fd) goto LAB_82916d70;
            if (0xfffe03fe < uVar6) {
              bVar2 = uVar6 == 0xfffe03ff;
              goto LAB_82916d6c;
            }
            if ((uStack_1a4 & 0xffff0000) == 0xfffe03fd) {
              trapWord(0x1f,in_r0,0x16);
            }
            pcVar18 = (char *)in_stack_00000074[6];
            if ((pcVar18 == (char *)0x0) || (*pcVar18 == '\0')) {
              pcVar18 = param_4;
            }
            if ((*in_stack_00000074 & 1) != 0) {
              uVar6 = fn_8265C940(0x720,0x24810000);
              if ((uVar6 & 0xffffffff) != 0) {
                uVar10 = fn_82901E10(uVar6,param_8,param_1[0x23],pcVar18);
                goto LAB_82916da0;
              }
              goto LAB_82916d9c;
            }
            uVar6 = fn_8265C940(0x720,0x24810000);
            if ((uVar6 & 0xffffffff) == 0) goto LAB_82916d9c;
            uVar10 = fn_82901DD0(uVar6,param_8,param_1[0x23],pcVar18);
            goto LAB_82916da0;
          }
          if ((uVar6 == 0xffff0200) || ((0xffff0201 < uVar6 && (uVar6 < 0xffff0204))))
          goto LAB_82916d2c;
LAB_82916d70:
          param_1[2] = 0;
        }
        else {
          uVar6 = uVar6 + 0xfd01;
          if (uVar6 != 0) {
            if ((uVar6 & 0xffffffff) != 1) {
              bVar2 = (uVar6 & 0xffffffff) == 0x100;
LAB_82916d6c:
              if (!bVar2) goto LAB_82916d70;
            }
LAB_82916d78:
            uVar6 = fn_8265C940(0x1fc,0x24810000);
            if ((uVar6 & 0xffffffff) == 0) goto LAB_82916d9c;
            uVar10 = fn_829603E0(uVar6,param_8,param_1[0x23]);
            goto LAB_82916da0;
          }
LAB_82916d2c:
          uVar6 = fn_8265C940(0x230,0x24810000);
          if ((uVar6 & 0xffffffff) == 0) {
LAB_82916d9c:
            uVar10 = 0;
          }
          else {
            uVar10 = fn_82992B68(uVar6,param_8,param_1[0x23]);
          }
LAB_82916da0:
          param_1[2] = uVar10;
        }
        if (param_1[2] == 0) {
          uVar6 = 0xffffffff8007000e;
          goto LAB_82917238;
        }
        if (param_3 == 0) {
          uVar10 = param_1[5];
          uVar11 = *param_1;
          uVar7 = fn_8297F260(auStack_120);
          uVar6 = fn_829929D8(uVar7,uVar11,uVar10 | 0x80000000,puVar12,in_stack_00000074);
          fn_82BA02A8(auStack_120);
          if ((uVar6 & 0xffffffff) >> 0x1f != 0) goto LAB_82917238;
        }
        else {
          *puVar12 = param_3;
        }
        if (bVar19) {
          fn_829042E8(param_1,0,0xdb1,0xffffffff8202d4f8);
        }
        if (bVar1) {
          fn_829042E8(param_1,0,0xdb1,0xffffffff8202d4cc);
        }
        if ((param_6 & 0xffffffff) == 0) {
          if (param_4 != (char *)0x0) {
            uVar8 = fn_829037B8(param_1,param_4);
            uVar10 = 0;
            goto LAB_82916eb4;
          }
          uVar8 = fn_82903908(param_1,param_5,&stack0x0000002c);
          if (uVar8 != 0) {
            param_4 = pcStack0000002c;
            uVar10 = 1;
            goto LAB_82916eb4;
          }
          fn_82904258(param_1,0,0xdad,0xffffffff8202e32c);
LAB_829173d0:
          uVar6 = 0xffffffff80004005;
        }
        else {
          uVar8 = (ulonglong)uStack_1b8;
          uVar10 = uStack_1b8;
LAB_82916eb4:
          uVar11 = param_1[5];
          if (((uVar11 & 0x2000000) != 0) || (bVar16 = 0, (uVar11 & 0x400000) != 0)) {
            bVar16 = 1;
          }
          if (in_stack_00000074[4] != 0) {
            bVar16 = in_stack_00000074[4] == 0x20 & bVar16;
          }
          if ((in_stack_00000074[9] != 0) || (in_stack_00000074[0xb] != 0)) {
            bVar16 = 0;
          }
          bVar19 = (bool)((*in_stack_00000074 & 0x12) == 0 & bVar16);
          if (((uVar11 & 0x100000) == 0) && ((uint)param_8 == 0)) {
            if ((param_6 & 0xffffffff) == 0) {
              if ((uVar11 & 0x2000000) == 0) {
                uVar17 = fn_82AA7300(param_1[4],uVar11,uVar10,*puVar12,param_4,uVar8,param_7,
                                         auStack_1cc);
                iStack_1b4 = (int)uVar17;
                if (((iStack_1b4 < 0) && (in_stack_00000074[7] == 0)) && (bVar19)) {
                  if (iStack_1b4 == -0x7fffbffc) {
                    bVar19 = false;
                  }
                  else {
                    if (piStack_1c0 != (int *)0x0) {
                      (**(code **)(*piStack_1c0 + 8))();
                      piStack_1c0 = (int *)0x0;
                    }
                    param_1[0x13] = 0;
                    fn_828F9CB0((ulonglong)*param_1 + 0x18,&piStack_1bc);
                    fn_828FA6F8((ulonglong)*param_1 + 0x18);
                  }
                }
              }
              else {
                uVar17 = 1;
                iStack_1b4 = 1;
              }
              goto LAB_82917068;
            }
          }
          else {
LAB_82917068:
            if (((param_6 & 0xffffffff) == 0) && ((uVar8 & 0xffffffff) == 0)) {
              if (-1 < (int)uVar17) {
                fn_82904258(param_1,0,0xdad,0xffffffff8202e310,param_4);
              }
              goto LAB_829173d0;
            }
          }
          uVar11 = param_1[5];
          if ((uVar11 & 0x2000000) == 0) {
            uVar11 = param_1[5];
            bVar1 = false;
            if ((uVar11 & 0x400000) != 0) goto LAB_829170d8;
          }
          else {
LAB_829170d8:
            bVar1 = true;
          }
          if ((bVar1) && (!(bool)(in_stack_00000074[7] == 0 & bVar19))) {
            bVar1 = false;
            if ((uVar11 & 0x1000000) == 0) {
              if ((in_stack_00000074[4] == 0) || (in_stack_00000074[4] == 0x20)) {
                if ((in_stack_00000074[9] == 0) && (in_stack_00000074[0xb] == 0)) {
                  if (in_stack_00000074[7] == 0) {
                    if ((*in_stack_00000074 & 2) == 0) {
                      if ((*in_stack_00000074 & 0x10) == 0) goto LAB_8291719c;
                      uVar7 = 0xffffffff8202e21c;
                    }
                    else {
                      uVar7 = 0xffffffff8202e248;
                    }
                  }
                  else {
                    uVar7 = 0xffffffff8202e274;
                  }
                }
                else {
                  uVar7 = 0xffffffff8202e1e8;
                }
              }
              else {
                uVar7 = 0xffffffff8202e2ac;
              }
            }
            else {
              uVar7 = 0xffffffff8202e2e0;
            }
            fn_829042E8(param_1,0,0xbe2,uVar7);
          }
LAB_8291719c:
          iVar13 = (int)uVar17;
          if ((bVar1) || (-1 < iVar13)) {
            if (!bVar4) {
              fn_829042E8(param_1,0,0xdb1,0xffffffff8202e1a0);
            }
            if (param_1[0x24] == 0) {
              param_1[0x25] = 0x1000;
              uVar11 = fn_8265C940(0x4000,0x24810000);
              param_1[0x24] = uVar11;
              if (uVar11 == 0) {
                fn_82930180(auStack_190);
                return 0xffffffff8007000e;
              }
            }
            fn_829640F0(auStack_190);
            fn_82963920(auStack_190);
            uVar6 = fn_829145D8(param_1);
            if ((longlong)uVar6 < 0) goto LAB_82917238;
            if ((param_6 & 0xffffffff) == 0) {
              uVar6 = fn_82913870(param_1,param_4,uVar8,param_7,0,1,uVar10);
            }
            else {
              uVar6 = fn_829166B8(param_1,param_6);
            }
            if ((longlong)uVar6 < 0) goto LAB_82917238;
            if (param_1[0x13] != 0) goto LAB_829173d0;
            uVar6 = fn_82903A60(param_1);
            if ((longlong)uVar6 < 0) goto LAB_82917238;
            uVar6 = (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2],auStack_1d0);
            iStack_1b0 = (int)uVar6;
            if (iStack_1b0 < 0) goto LAB_82917238;
            if (in_stack_0000006c != (undefined4 *)0x0) {
              uVar7 = (**(code **)(iRam00000000 + 0xc))();
              uVar6 = fn_828F0CE0(uVar7,auStack_1c4);
              if ((longlong)uVar6 < 0) goto LAB_82917238;
            }
            puVar12 = (uint *)(**(code **)(iRam00000000 + 0xc))();
            if (((((param_1[5] & 0x100000) == 0) && ((*puVar12 & 0xffff0000) != 0x46580000)) &&
                ((*puVar12 & 0xffff0000) != 0x54580000)) &&
               ((param_1[4] != 0xfffe03fe && (param_1[4] != 0xfffe03fd)))) {
              if (!bVar1) {
                uVar6 = uVar17;
                if (iVar13 < 0) goto LAB_82917238;
                goto LAB_829173d0;
              }
              iVar13 = fn_82897B18((ulonglong)*param_1 + 0x18);
              if (iVar13 != 0) goto LAB_82917238;
              uVar7 = (**(code **)(iRam00000000 + 0x10))();
              uVar9 = (**(code **)(iRam00000000 + 0xc))(0);
              uVar6 = fn_828FCAC0(CONCAT44(param_1[5],param_1[5]) & 0xfffffffffdffffff,uVar9,uVar7
                                    ,in_stack_00000064,param_1,0xffffffff82904240,in_stack_00000074)
              ;
              if ((longlong)uVar6 < 0) goto LAB_82917238;
            }
            else {
              if ((int *)*in_stack_00000064 != (int *)0x0) {
                (**(code **)(*(int *)*in_stack_00000064 + 8))();
                *in_stack_00000064 = 0;
              }
              *in_stack_00000064 = 0;
            }
            if (in_stack_0000006c != (undefined4 *)0x0) {
              *in_stack_0000006c = 0;
            }
          }
          else {
            uVar6 = uVar17;
            if (iVar13 < 0) goto LAB_82917238;
          }
          uVar6 = 0;
        }
        goto LAB_82917238;
      }
    }
    fn_82904258(param_1,0,0xdb2,0xffffffff8202e34c,param_1[3]);
  }
  uVar6 = 0xffffffff8876086c;
LAB_82917238:
  fn_82F688E8();
  fn_82F68780(uStack_1b8,0xb001f);
  puVar3 = (undefined4 *)param_1[2];
  param_1[1] = 0;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  param_1[2] = 0;
  fn_8265C990(param_1[6],0x24810000);
  param_1[6] = 0;
  fn_829640F0(0);
  fn_82963920(0);
  if (piStack_1c0 != (int *)0x0) {
    (**(code **)(*piStack_1c0 + 8))();
    piStack_1c0 = (int *)0x0;
  }
  if (piStack_1bc != (int *)0x0) {
    (**(code **)(*piStack_1bc + 8))();
    piStack_1bc = (int *)0x0;
  }
  fn_82930180(auStack_190);
  return uVar6;
}

