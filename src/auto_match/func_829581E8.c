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
extern unsigned int *auStack_160;
extern unsigned int *auStack_e0;
extern int fn_829519E0();
extern int fn_82951C60();
extern int fn_82952740();
extern int fn_82963FA8();
extern int fn_829640A0();
extern int fn_82964628();
extern int fn_82971580();
extern unsigned int lbl_82005710;
extern unsigned int uStack_170;


uint fn_829581E8(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  undefined4 uStack_170;
  int aiStack_16c [3];
  undefined1 auStack_160 [128];
  undefined1 auStack_e0 [224];
  
  uStack_170 = 0;
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar8 = 0;
    do {
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*(int *)(iVar8 + *(int *)(param_1 + 0x14)) + 0x30) = 0xffffffff;
      piVar2 = (int *)(iVar8 + *(int *)(param_1 + 0x14));
      iVar8 = iVar8 + 4;
      *(undefined4 *)(*piVar2 + 0x34) = 0xffffffff;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  uVar11 = (ulonglong)*(uint *)(param_1 + 0xc);
  uVar4 = fn_82952740(param_1,0xffffffffffffffff,1,&uStack_170,0,0,0,uVar11);
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar8 = 0;
    do {
      iVar5 = *(int *)(iVar8 + *(int *)(param_1 + 0x14));
      if ((*(int *)(iVar5 + 0x30) != -1) || (*(int *)(iVar5 + 0x34) != -1)) {
        iVar5 = *(int *)(iVar8 + *(int *)(param_1 + 0x14));
        *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar5 + 0x30);
        iVar5 = *(int *)(iVar8 + *(int *)(param_1 + 0x14));
        *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x34);
      }
      uVar6 = uVar6 + 1;
      *(undefined4 *)(*(int *)(iVar8 + *(int *)(param_1 + 0x14)) + 0x30) = 0xffffffff;
      piVar2 = (int *)(iVar8 + *(int *)(param_1 + 0x14));
      iVar8 = iVar8 + 4;
      *(undefined4 *)(*piVar2 + 0x34) = 0xffffffff;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  if (uVar11 != 0) {
    iVar8 = 0;
    do {
      puVar3 = (undefined4 *)(iVar8 + *(int *)(param_1 + 0x18));
      iVar8 = iVar8 + 4;
      *(undefined4 *)*puVar3 = 0;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (-1 < (int)uVar4) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    fn_829519E0(param_1,auStack_e0,auStack_160,0,0);
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar8 = 0;
      dVar12 = lbl_82005710;
      do {
        puVar1 = *(uint **)(iVar8 + *(int *)(param_1 + 0x18));
        uVar6 = *puVar1 & 0xfff00000;
        if ((*puVar1 & 0xfffff) == 1) {
          uStack_170 = 0xffffffff;
          aiStack_16c[0] = -1;
          if ((((uVar6 == 0x73000000) || (uVar6 == 0x73200000)) || (uVar6 == 0x73100000)) ||
             (uVar6 == 0x73300000)) {
            iVar5 = *(int *)(*(int *)puVar1[2] * 4 + *(int *)(param_1 + 0x14));
            uVar6 = *(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
            if (((uVar6 & 0x200) != 0) && ((uVar6 & 0x2000) == 0)) {
              uVar6 = fn_82951C60(param_1,0xffffffff8200bef0,0x2000,iVar5,&uStack_170);
              if ((int)uVar6 < 0) {
                return uVar6;
              }
              *(undefined4 *)puVar1[2] = uStack_170;
            }
          }
          else if (uVar6 == 0x73b00000) {
            iVar5 = *(int *)(*(int *)(puVar1[2] + 4) * 4 + *(int *)(param_1 + 0x14));
            if ((((*(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                  0x100) != 0) && (*(int *)(iVar5 + 8) == -1)) &&
               (*(double *)(iVar5 + 0x20) == dVar12)) {
              iVar5 = fn_82964628(dVar12,param_1,0,0,0);
              if (iVar5 == -1) {
                return 0x8007000e;
              }
              iVar10 = *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x14));
              uVar7 = *(undefined4 *)(*(int *)puVar1[2] * 4 + *(int *)(param_1 + 0x14));
              uVar6 = fn_82963FA8(iVar10,uVar7);
              if ((int)uVar6 < 0) {
                return uVar6;
              }
              uVar6 = fn_829640A0(iVar10,uVar7);
              if ((int)uVar6 < 0) {
                return uVar6;
              }
              *(uint *)(iVar10 + 0x3c) = *(uint *)(iVar10 + 0x3c) ^ 0x80000;
              *(undefined4 *)(iVar10 + 0x38) = *(undefined4 *)puVar1[2];
              *(int *)(puVar1[2] + 4) = iVar5;
            }
          }
          else if ((uVar6 == 0x74200000) || (uVar6 == 0x74100000)) {
            iVar5 = *(int *)(*(int *)puVar1[2] * 4 + *(int *)(param_1 + 0x14));
            uVar6 = *(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
            if (((uVar6 & 0x200) != 0) && ((uVar6 & 0x40000) == 0)) {
              uVar6 = fn_82951C60(param_1,0xffffffff82029a34,0x40000,iVar5,aiStack_16c);
              if ((int)uVar6 < 0) {
                return uVar6;
              }
              uVar11 = 1;
              *(int *)puVar1[2] = aiStack_16c[0];
              iVar5 = *(int *)(aiStack_16c[0] * 4 + *(int *)(param_1 + 0x14));
              if (1 < puVar1[1]) {
                iVar10 = 4;
                do {
                  iVar9 = iVar5;
                  if (*(int *)(iVar10 + puVar1[2]) != -1) {
                    iVar9 = *(int *)(*(int *)(iVar10 + puVar1[2]) * 4 + *(int *)(param_1 + 0x14));
                  }
                  uVar7 = fn_82964628(*(undefined8 *)(iVar9 + 0x20),param_1,
                                            *(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 0xc),
                                            uVar11);
                  uVar11 = uVar11 + 1;
                  *(undefined4 *)(iVar10 + puVar1[2]) = uVar7;
                  iVar10 = iVar10 + 4;
                } while ((uVar11 & 0xffffffff) < (ulonglong)puVar1[1]);
              }
            }
          }
        }
        uVar4 = uVar4 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    uVar4 = fn_82971580(param_1);
    uVar4 = (int)uVar4 >> 0x1f & uVar4;
  }
  return uVar4;
}

