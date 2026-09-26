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
extern unsigned int *auStack_240;
extern unsigned int fStack_244;
extern int fn_8265C940();
extern int fn_8291C6F8();
extern int fn_82F67F88();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202E478;
extern unsigned int lbl_8202E47B;
extern unsigned int lbl_8202E47C;
extern unsigned int lbl_8202E47F;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_260;


undefined8 fn_8291CB98(undefined4 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint uStack_260;
  int aiStack_25c [6];
  float fStack_244;
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [320];
  
  if (3 < param_3) {
    pbVar8 = &lbl_8202E47C;
    pbVar7 = param_2;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != &lbl_8202E47F);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      iVar11 = 0;
    }
    else {
      pbVar8 = &lbl_8202E478;
      pbVar7 = param_2;
      do {
        bVar1 = *pbVar8;
        bVar2 = *pbVar7;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar8 = pbVar8 + 1;
        pbVar7 = pbVar7 + 1;
      } while (pbVar8 != &lbl_8202E47B);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        return 0xffffffff80004005;
      }
      iVar11 = 1;
    }
    param_3 = param_3 - 3;
    param_2 = param_2 + 3;
    uVar12 = 0x100;
    if (param_3 < 0x101) {
      uVar12 = param_3;
    }
    uVar13 = 0;
    if (uVar12 != 0) {
      do {
        if (param_2[uVar13] == 10) goto LAB_8291cc70;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar12);
    }
    uVar13 = 0;
LAB_8291cc70:
    if (uVar13 != 0) {
      fn_8291C6F8(auStack_240,uVar13 + 1,param_2);
      iVar3 = fn_82F67F88(auStack_240,0xffffffff8202e470,aiStack_25c,&uStack_260,auStack_140);
      if (iVar3 == 2) {
        uVar12 = (param_3 - uVar13) - 1;
        param_2 = param_2 + uVar13 + 1;
        if (uVar12 != 0) {
          uVar13 = 0x100;
          if (uVar12 < 0x101) {
            uVar13 = uVar12;
          }
          uVar9 = 0;
          if (uVar13 != 0) {
            do {
              if (param_2[uVar9] == 10) goto LAB_8291ccf8;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar13);
          }
          uVar9 = 0;
LAB_8291ccf8:
          if (uVar9 != 0) {
            fn_8291C6F8(auStack_240,uVar9 + 1,param_2);
            iVar3 = fn_82F67F88(auStack_240,0xffffffff8202e468,&fStack_244,auStack_140);
            if ((iVar3 == 1) &&
               (bVar14 = fStack_244 < lbl_821AAD20,
               (((uint)LZCOUNT(iVar11) >> 4 & 2) + 1) * aiStack_25c[0] * uStack_260 * 4 <=
               (uVar12 - uVar9) - 1)) {
              param_1[3] = aiStack_25c[0];
              param_1[4] = uStack_260;
              param_1[5] = 1;
              param_1[0xc] = aiStack_25c[0] << 4;
              *param_1 = 0x1a22aaa6;
              param_1[0xd] = 0;
              param_1[0xe] = 1;
              iVar4 = fn_8265C940((longlong)(aiStack_25c[0] << 4) * (longlong)(int)uStack_260,
                                        0x24810000);
              param_1[1] = iVar4;
              iVar3 = lbl_82002AE0;
              if (iVar4 != 0) {
                lVar5 = (ulonglong)uStack_260 - 1;
                if (-1 < lVar5) {
                  param_2 = param_2 + (uVar9 - 3);
                  do {
                    piVar10 = (int *)((int)lVar5 * aiStack_25c[0] * 0x10 + param_1[1]);
                    piVar6 = piVar10 + aiStack_25c[0] * 4;
                    if (iVar11 == 0) {
                      if (bVar14) {
                        for (; piVar10 != piVar6; piVar10 = piVar10 + 4) {
                          *piVar10 = *(int *)(param_2 + 4);
                          piVar10[1] = *(int *)(param_2 + 8);
                          param_2 = param_2 + 0xc;
                          piVar10[2] = *(int *)param_2;
                          piVar10[3] = iVar3;
                        }
                      }
                      else {
                        for (; piVar10 != piVar6; piVar10 = piVar10 + 4) {
                          uVar12 = *(uint *)(param_2 + 4);
                          *piVar10 = (uVar12 * 0x10000 + (uVar12 & 0xff00)) * 0x100 +
                                     (uVar12 >> 8 & 0xff00) + (uVar12 >> 0x18);
                          uVar12 = *(uint *)(param_2 + 8);
                          piVar10[1] = (uVar12 * 0x10000 + (uVar12 & 0xff00)) * 0x100 +
                                       (uVar12 >> 8 & 0xff00) + (uVar12 >> 0x18);
                          uVar12 = *(uint *)(param_2 + 0xc);
                          piVar10[3] = iVar3;
                          param_2 = param_2 + 0xc;
                          piVar10[2] = (uVar12 * 0x10000 + (uVar12 & 0xff00)) * 0x100 +
                                       (uVar12 >> 8 & 0xff00) + (uVar12 >> 0x18);
                        }
                      }
                    }
                    else if (bVar14) {
                      for (; piVar10 != piVar6; piVar10 = piVar10 + 4) {
                        iVar4 = *(int *)(param_2 + 4);
                        param_2 = param_2 + 4;
                        piVar10[2] = iVar4;
                        piVar10[1] = iVar4;
                        *piVar10 = iVar4;
                        piVar10[3] = iVar3;
                      }
                    }
                    else {
                      for (; piVar10 != piVar6; piVar10 = piVar10 + 4) {
                        uVar12 = *(uint *)(param_2 + 4);
                        param_2 = param_2 + 4;
                        piVar10[3] = iVar3;
                        iVar4 = (uVar12 * 0x10000 + (uVar12 & 0xff00)) * 0x100 +
                                (uVar12 >> 8 & 0xff00) + (uVar12 >> 0x18);
                        piVar10[2] = iVar4;
                        piVar10[1] = iVar4;
                        *piVar10 = iVar4;
                      }
                    }
                    lVar5 = lVar5 + -1;
                  } while (-1 < lVar5);
                }
                return 0;
              }
              return 0xffffffff8007000e;
            }
          }
        }
      }
    }
  }
  return 0xffffffff80004005;
}

