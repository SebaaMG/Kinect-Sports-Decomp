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
extern unsigned int *auStack_e0;
extern int fn_82930318();
extern int fn_82930430();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82930FC0();
extern int fn_82931F90();
extern int fn_82932548();
extern int fn_8297F4D8();
extern int fn_8297F6B8();
extern int fn_82980C18();
extern int fn_82981050();
extern int fn_829814B0();
extern int fn_82981668();
extern int fn_82981738();
extern int fn_829873C0();
extern int fn_82988378();
extern int iRam00000008;
extern unsigned int iStack_b0;
extern unsigned int uStack_a4;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


/* WARNING: Removing unreachable block (ram,0x8298dd58) */

int fn_8298D708(int param_1,ulonglong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar6;
  ulonglong uVar4;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar5;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int aiStack_ec [3];
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_a4;
  
  iVar9 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar9 = *(int *)(*(int *)(param_1 + 0x18) + 8);
  }
  fn_82932548(auStack_e0);
  if (iVar9 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  iVar15 = param_3 + 0x10;
  iVar12 = *(int *)(iVar9 + 0x18);
  if ((*(uint *)(iVar9 + 0x10) & 0x40) != 0) {
    fn_82980C18(param_1,iVar15,0xbe7,0xffffffff8204f610,*(undefined4 *)(param_3 + 0x18));
  }
  if ((*(uint *)(iVar9 + 0x10) & 1) != 0) {
    fn_82980C18(param_1,iVar15,0xbbe,0xffffffff8204f5e4,*(undefined4 *)(param_3 + 0x18));
  }
  iVar6 = fn_82981668(param_1,iVar12);
  if (iVar6 == 0) {
    fn_82980C18(param_1,iVar15,0xbde,0xffffffff8204f5b8,*(undefined4 *)(param_3 + 0x18));
  }
  bVar3 = false;
  for (iVar6 = param_4; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
    iVar7 = *(int *)(iVar6 + 8);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 4) == 6)) {
      iVar8 = *(int *)(iVar6 + 0xc);
      if ((iVar8 == 0) || (*(int *)(*(int *)(iVar8 + 8) + 4) != 0xc)) {
        if (bVar3) {
          fn_82980C18(param_1,iVar15,0xbe4,0xffffffff8204f588,*(undefined4 *)(param_3 + 0x18),
                        *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x18));
        }
      }
      else {
        bVar3 = true;
        iVar6 = iVar8;
      }
    }
  }
  uVar4 = fn_82930318(0x14);
  if ((uVar4 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_829304E0(uVar4,0,0,0xffffffff8202df2c);
  }
  if (iVar6 == 0) {
    return 0;
  }
  uVar4 = fn_82930318(0x34);
  if ((uVar4 & 0xffffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_82930FC0(uVar4,2,0,0,0,0);
  }
  if (iVar7 == 0) {
    return 0;
  }
  *(int *)(iVar6 + 8) = iVar7;
  iVar8 = fn_82930458(param_3);
  *(int *)(iVar7 + 0x14) = iVar8;
  if (iVar8 == 0) {
    return 0;
  }
  iVar8 = fn_82930318(0x50);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = fn_82931F90();
  }
  if (iVar8 == 0) {
    return 0;
  }
  *(int *)(iVar7 + 0x18) = iVar8;
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar9 + 0x10);
  if (*(int *)(iVar9 + 0x14) != 0) {
    iVar9 = fn_82930458();
    *(int *)(iVar8 + 0x24) = iVar9;
    if (iVar9 == 0) {
      return 0;
    }
  }
  if (iVar12 != 0) {
    iVar9 = fn_82930458(iVar12);
    *(int *)(iVar8 + 0x28) = iVar9;
    if (iVar9 == 0) {
      return 0;
    }
  }
  if ((param_2 & 0xffffffff) != 0) {
    iVar9 = fn_82930458(param_2);
    *(int *)(iVar8 + 0x44) = iVar9;
    if (iVar9 == 0) {
      return 0;
    }
  }
  fn_829814B0(param_1,*(undefined4 *)(iVar8 + 0x28),1);
  if (param_5 != 0) {
    if (*(int *)(iVar8 + 0x28) == 0) {
      fn_82980C18(param_1,iVar15,0xc04,0xffffffff8204f55c,*(undefined4 *)(param_3 + 0x18));
      param_5 = 0;
    }
    if (param_5 != 0) {
      iVar9 = fn_82930458(param_5);
      *(int *)(iVar8 + 0x3c) = iVar9;
      if (iVar9 == 0) {
        return 0;
      }
      do {
        if ((*(int *)(param_5 + 8) != 0) && (*(int *)(*(int *)(param_5 + 8) + 4) == 3)) {
          iVar9 = fn_82930458();
          *(int *)(iVar8 + 0x38) = iVar9;
          if (iVar9 == 0) {
            return 0;
          }
        }
        param_5 = *(int *)(param_5 + 0xc);
      } while (param_5 != 0);
    }
  }
  if ((param_4 != 0) && (*(int *)(param_4 + 8) != 0)) {
    iVar9 = fn_82930458(param_4);
    *(int *)(iVar8 + 0x2c) = iVar9;
    if (iVar9 == 0) {
      return 0;
    }
  }
  iVar9 = fn_829873C0(param_1,2,iVar15,*(undefined4 *)(iVar8 + 0x24),*(undefined4 *)(iVar8 + 0x2c)
                        ,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x20),10,aiStack_ec);
  if (iVar9 < 0) {
    uVar13 = 0xbbb;
    uVar14 = 0xffffffff8204dfb4;
LAB_8298dab8:
    fn_82980C18(param_1,iVar15,uVar13,uVar14,*(undefined4 *)(param_3 + 0x18));
  }
  else {
    if (iVar9 == 0) {
      iVar9 = fn_8297F6B8(param_1,*(undefined4 *)(iVar8 + 0x28),
                            *(undefined4 *)(aiStack_ec[0] + 0x28));
      if (iVar9 == 0) {
        uVar13 = 0xbfc;
        uVar14 = 0xffffffff8204f528;
        goto LAB_8298dab8;
      }
      iVar11 = 0;
      iVar16 = 0;
      *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(aiStack_ec[0] + 0x10);
      *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(aiStack_ec[0] + 0x14);
      *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iRam00000008 + 0x18);
      iVar12 = *(int *)(iVar8 + 0x2c);
      for (iVar9 = *(int *)(aiStack_ec[0] + 0x2c);
          (iVar9 != 0 && (piVar1 = *(int **)(iVar9 + 8), piVar1 != (int *)0x0));
          iVar9 = *(int *)(iVar9 + 0xc)) {
        if (piVar1[1] == 0xc) {
          if (((iVar12 == 0) || (*(int *)(iVar12 + 8) == 0)) ||
             (*(int *)(*(int *)(iVar12 + 8) + 4) != 0xc)) {
            lVar5 = (**(code **)(*piVar1 + 4))(piVar1);
            if (lVar5 == 0) {
              return 0;
            }
            uVar4 = fn_82930318(0x14);
            if ((uVar4 & 0xffffffff) == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = fn_829304E0(uVar4,lVar5,iVar12,*(undefined4 *)(iVar9 + 0x10));
            }
            if (iVar12 == 0) {
              return 0;
            }
            *(int *)(iVar16 + 0xc) = iVar12;
          }
          iVar10 = fn_82930430(*(undefined4 *)(piVar1[5] + 0x24),
                                *(undefined4 *)(*(int *)(*(int *)(iVar12 + 8) + 0x14) + 0x24));
          if (iVar10 == 0) {
            fn_82980C18(param_1,iVar15,0xbfc,0xffffffff8204f4e8,*(undefined4 *)(param_3 + 0x18),
                          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 8) + 0x14) + 0x18));
            return 0;
          }
        }
        if (iVar12 == 0) {
          return 0;
        }
        iVar10 = *(int *)(iVar12 + 8);
        if (iVar10 == 0) {
          return 0;
        }
        if (*(int *)(iVar10 + 4) == 0xc) {
          *(undefined4 *)
           (*(int *)(*(int *)(*(int *)(*(int *)(iVar10 + 0x14) + 0x20) + 0x20) + 8) + 0x18) =
               *(undefined4 *)(*(int *)(*(int *)(iVar11 + 8) + 0x18) + 0x10);
          if (*(int *)(*(int *)(iVar9 + 8) + 4) != 0xc) {
            iVar9 = iVar11;
          }
        }
        else {
          iVar11 = fn_8297F4D8(param_1,*(int *)(iVar10 + 0x14) + 0x10,
                                 *(undefined4 *)(param_1 + 0x14));
          if (iVar11 == 0) {
            return 0;
          }
          if (*(int *)(iVar11 + 8) == 0) {
            return 0;
          }
          iVar16 = *(int *)(iVar10 + 0x18);
          iVar11 = *(int *)(*(int *)(iVar11 + 8) + 0x18);
          iVar10 = *(int *)(*(int *)(iVar9 + 8) + 0x18);
          uVar2 = *(undefined4 *)(iVar10 + 0x10);
          *(undefined4 *)(iVar16 + 0x10) = uVar2;
          *(undefined4 *)(iVar11 + 0x10) = uVar2;
          uVar2 = *(undefined4 *)(iVar10 + 0x18);
          *(undefined4 *)(iVar16 + 0x18) = uVar2;
          *(undefined4 *)(iVar11 + 0x18) = uVar2;
          uVar2 = *(undefined4 *)(iVar10 + 0x1c);
          *(undefined4 *)(iVar16 + 0x1c) = uVar2;
          *(undefined4 *)(iVar11 + 0x1c) = uVar2;
          iVar11 = iVar9;
          iVar16 = iVar12;
        }
        iVar12 = *(int *)(iVar12 + 0xc);
      }
      for (; (iVar12 != 0 && (*(int *)(iVar12 + 8) != 0)); iVar12 = *(int *)(iVar12 + 0xc)) {
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar12 + 8) + 0x14) + 0x20) + 0x20) + 8) +
         0x18) = *(undefined4 *)(*(int *)(*(int *)(iVar11 + 8) + 0x18) + 0x10);
      }
    }
    else {
      *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(param_1 + 0x68);
      iVar9 = fn_82981738(param_1,*(undefined4 *)(iVar8 + 0x28));
      *(int *)(iVar8 + 0x14) = iVar9;
      *(int *)(param_1 + 0x68) = iVar9 + *(int *)(param_1 + 0x68);
    }
    uStack_d0 = *(undefined4 *)(iVar8 + 0x10);
    uStack_cc = *(undefined4 *)(iVar8 + 0x14);
    uStack_b8 = 3;
    uStack_b4 = 0;
    iStack_b0 = fn_82930458(*(undefined4 *)(iVar8 + 0x28));
    uStack_a4 = fn_82930458(0);
    if ((*(int *)(iVar8 + 0x28) == 0) || (iStack_b0 != 0)) {
      fn_829814B0(param_1,iStack_b0,0);
      iVar9 = fn_82988378(param_1,param_3,auStack_e0);
      *(int *)(iVar8 + 0x34) = iVar9;
      if (iVar9 != 0) {
        if (aiStack_ec[0] == 0) {
          iVar9 = *(int *)(param_1 + 0x14);
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar9 + 0x20);
          iVar12 = fn_82981050(param_1,iVar7,0);
          *(int *)(param_1 + 0x14) = iVar9;
          if (iVar12 < 0) {
            return 0;
          }
          *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14) = *(undefined4 *)(param_3 + 0x18);
        *(int *)(param_1 + 0x20) = iVar8;
        return iVar6;
      }
    }
  }
  return 0;
}

