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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82904370();
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;


longlong fn_82906DE8(int param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                      int *param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iStack_a4;
  int iStack_a0;
  undefined4 *puStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  
  uVar7 = *(uint *)(*(int *)(param_1 + 8) + 0x6c);
  if ((uVar7 & 0x800000) == 0) {
LAB_82906f6c:
    if ((uVar7 & 0x20) == 0) {
      iVar1 = fn_8265C940(param_7 * 0xc,0x24810000);
      if (iVar1 != 0) {
        piVar3 = &iStack_a4;
        lVar6 = 3;
        iVar5 = iVar1;
        do {
          piVar3 = piVar3 + 1;
          *piVar3 = iVar5;
          iVar5 = param_7 * 4 + iVar5;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        if (param_7 != 0) {
          puVar4 = (undefined4 *)(iStack_a0 + -4);
          for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar4 = puVar4 + 1;
            *puVar4 = 0xffffffff;
          }
        }
        if (param_7 != 0) {
          puVar4 = puStack_9c + -1;
          for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar4 = puVar4 + 1;
            *puVar4 = 0xffffffff;
          }
        }
        if (param_7 != 0) {
          puVar4 = (undefined4 *)(iStack_98 + -4);
          for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar4 = puVar4 + 1;
            *puVar4 = 0xffffffff;
          }
          if (param_7 != 0) {
            puVar4 = (undefined4 *)(param_3 + -4);
            for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
              puVar4 = puVar4 + 1;
              *puVar4 = 0xffffffff;
            }
          }
        }
        param_7 = param_7 & 0xfffff;
        lVar6 = fn_82904370(param_1,param_2,param_7 | 0x10100000,iStack_a0,param_4,0,0);
        if (lVar6 < 0) goto LAB_829070e8;
        uVar7 = param_7 | 0x20400000;
        lVar6 = fn_82904370(param_1,param_2,uVar7,puStack_9c,param_5,iStack_a0,0);
        if (lVar6 < 0) goto LAB_829070e8;
        lVar6 = fn_82904370(param_1,param_2,param_7 | 0x20500000,iStack_98,param_6,puStack_9c,0);
        iStack_a0 = param_4;
        iStack_94 = iStack_98;
joined_r0x829072bc:
        if (lVar6 < 0) goto LAB_829070e8;
        goto LAB_829070c8;
      }
    }
    else {
      iVar1 = fn_8265C940(param_7 * 0x14,0x24810000);
      if (iVar1 != 0) {
        piVar3 = &iStack_a4;
        lVar6 = 5;
        iVar5 = iVar1;
        do {
          piVar3 = piVar3 + 1;
          *piVar3 = iVar5;
          iVar5 = param_7 * 4 + iVar5;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        if (param_7 != 0) {
          puVar4 = (undefined4 *)(iStack_90 + -4);
          uVar7 = param_7;
          do {
            puVar4 = puVar4 + 1;
            *puVar4 = *(undefined4 *)(param_1 + 0x20);
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (param_7 != 0) {
          puVar4 = (undefined4 *)(iStack_a0 + -4);
          for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar4 = puVar4 + 1;
            *puVar4 = 0xffffffff;
          }
        }
        if (param_7 != 0) {
          puVar4 = puStack_9c + -1;
          for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar4 = puVar4 + 1;
            *puVar4 = 0xffffffff;
          }
        }
        if (param_7 != 0) {
          puVar4 = (undefined4 *)(iStack_98 + -4);
          for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar4 = puVar4 + 1;
            *puVar4 = 0xffffffff;
          }
        }
        if (param_7 != 0) {
          puVar4 = (undefined4 *)(iStack_94 + -4);
          for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar4 = puVar4 + 1;
            *puVar4 = 0xffffffff;
          }
          if (param_7 != 0) {
            puVar4 = (undefined4 *)(param_3 + -4);
            for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
              puVar4 = puVar4 + 1;
              *puVar4 = 0xffffffff;
            }
          }
        }
        param_7 = param_7 & 0xfffff;
        lVar6 = fn_82904370(param_1,param_2,param_7 | 0x10100000,iStack_a0,param_6,0,0);
        if (lVar6 < 0) goto LAB_829070e8;
        uVar7 = param_7 | 0x20400000;
        lVar6 = fn_82904370(param_1,param_2,uVar7,puStack_9c,iStack_a0,iStack_90,0);
        if (lVar6 < 0) goto LAB_829070e8;
        lVar6 = fn_82904370(param_1,param_2,param_7 | 0x20500000,iStack_98,puStack_9c,param_4,0);
        if (lVar6 < 0) goto LAB_829070e8;
        lVar6 = fn_82904370(param_1,param_2,param_7 | 0x20500000,iStack_94,param_6,param_5,0);
        iStack_a0 = iStack_98;
        goto joined_r0x829072bc;
      }
    }
LAB_82907110:
    lVar6 = -0x7ff8fff2;
  }
  else {
    uVar2 = 0;
    piVar3 = param_6;
    if (param_7 != 0) {
      do {
        if (((**(uint **)(*piVar3 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14)) & 1) == 0) ||
           (((uVar7 & 0x10000000) != 0 && (*piVar3 != *param_6)))) break;
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < param_7);
    }
    if (uVar2 != param_7) goto LAB_82906f6c;
    iVar1 = fn_8265C940(param_7 * 0xc,0x24810000);
    if (iVar1 == 0) goto LAB_82907110;
    piVar3 = &iStack_a4;
    lVar6 = 3;
    iVar5 = iVar1;
    do {
      piVar3 = piVar3 + 1;
      *piVar3 = iVar5;
      iVar5 = iVar5 + param_7 * 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (param_7 != 0) {
      param_4 = param_4 - (int)puStack_9c;
      param_5 = param_5 - (int)puStack_9c;
      iStack_98 = iStack_98 - (int)puStack_9c;
      uVar7 = param_7;
      do {
        *puStack_9c = *(undefined4 *)(param_4 + (int)puStack_9c);
        *(undefined4 *)((int)puStack_9c + iStack_98) = *(undefined4 *)((int)puStack_9c + param_5);
        puStack_9c = puStack_9c + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (param_7 != 0) {
      puVar4 = (undefined4 *)(iStack_a0 + -4);
      for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
        puVar4 = puVar4 + 1;
        *puVar4 = 0xffffffff;
      }
      if (param_7 != 0) {
        puVar4 = (undefined4 *)(param_3 + -4);
        for (uVar7 = param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
          puVar4 = puVar4 + 1;
          *puVar4 = 0xffffffff;
        }
      }
    }
    lVar6 = fn_82904370(param_1,param_2,param_7 & 0xfffff | 0x10100000,iStack_a0,param_6,0,0x1a);
    if (lVar6 < 0) goto LAB_829070e8;
    iStack_94 = param_7 * 4 + iVar1;
    uVar7 = param_7 & 0xfffff | 0x30000000;
LAB_829070c8:
    lVar6 = fn_82904370(param_1,param_2,uVar7,param_3,iStack_a0,iStack_94,0);
    if (-1 < lVar6) {
      lVar6 = 0;
    }
  }
LAB_829070e8:
  fn_8265C990(iVar1,0x24810000);
  return lVar6;
}

