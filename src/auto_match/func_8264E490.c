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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_82644568();
extern int fn_8264DE30();
extern int fn_8264E070();
extern int fn_8264E150();
extern int fn_8264E290();
extern int fn_8264E388();
extern int fn_82F68CC0();
extern unsigned int lbl_83000000;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


uint * fn_8264E490(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  ushort *puVar5;
  undefined *puVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar11;
  longlong lVar10;
  uint *puVar12;
  bool bVar13;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  
  iVar7 = KeGetCurrentProcessType();
  puVar1 = __imp__VdGlobalDevice;
  if (iVar7 == 2) {
    puVar1 = __imp__VdGlobalXamDevice;
  }
  uVar11 = *param_1;
  uVar2 = *puVar1;
  do {
    if ((uVar11 & 0x80000000) == 0) {
      return param_1;
    }
    puVar6 = (undefined *)(uVar11 & 0xff000000);
    if (puVar6 < (undefined *)0x88000001) {
      if (puVar6 == (undefined *)0x88000000) {
        puVar12 = param_1 + 1;
        param_1 = param_1 + 2;
        if ((*(uint *)(param_2 + 0x164) & *puVar12) != 0) {
          *(uint **)(param_2 + 0x48) = param_1;
          param_1 = (uint *)(param_2 + 0x54);
        }
      }
      else if (puVar6 < (undefined *)0x84000001) {
        if (puVar6 == (undefined *)0x84000000) {
          uVar11 = *(uint *)(param_2 + 0x30);
          *(uint *)(param_2 + 0x30) = uVar11 & 0xbfffffff;
          if ((uVar11 & 0x80000000) == 0) goto LAB_8264e568;
          param_1 = *(uint **)(param_2 + 0x170);
        }
        else if (puVar6 == (undefined *)0x80000000) {
          fn_82F68CC0(param_2 + 0x6c,param_1 + 1,0xf8);
          *(undefined4 *)(param_2 + 0x168) = 0xffffffff;
          *(undefined4 *)(param_2 + 0x34) = 0;
          param_1 = param_1 + 0x3f;
          *(undefined4 *)(param_2 + 0x164) = 0x7fffffff;
        }
        else if (puVar6 == (undefined *)0x81000000) {
LAB_8264e6dc:
          uStack_6c = param_1[1];
          uStack_70 = uVar11;
          fn_82644568(uVar2,&uStack_70,1);
          param_1 = param_1 + 2;
        }
        else if (puVar6 != (undefined *)0x82000000) {
          if (puVar6 != &lbl_83000000) goto LAB_8264e6cc;
          uVar11 = *(uint *)(param_2 + 0x30);
          *(uint **)(param_2 + 0x16c) = param_1;
          *(uint *)(param_2 + 0x30) = uVar11 | 0x40000000;
          if ((*(int *)(param_2 + 0x34) != 0) && ((*(uint *)(param_2 + 0x6c) & 2) != 0)) {
            uVar11 = uVar11 | 0xc0000000;
            goto LAB_8264e564;
          }
          goto LAB_8264e568;
        }
      }
      else if (puVar6 == (undefined *)0x85000000) {
        *(uint **)(param_2 + 0x170) = param_1;
        uVar8 = LZCOUNT(*(uint *)(param_2 + 0x30) & 0x80000000) & 0x20;
        *(uint *)(param_2 + 0x30) = (uint)(uVar8 << 0x1a) | *(uint *)(param_2 + 0x30) & 0x7fffffff;
        if (uVar8 == 0) goto LAB_8264e568;
        param_1 = *(uint **)(param_2 + 0x16c);
      }
      else if (puVar6 == (undefined *)0x86000000) {
        *(uint **)(param_2 + 0x174) = param_1;
        uVar11 = *(uint *)(param_2 + 0x30) | 0x20000000;
LAB_8264e564:
        *(uint *)(param_2 + 0x30) = uVar11;
LAB_8264e568:
        param_1 = param_1 + 1;
        fn_8264E070(param_2);
      }
      else if (puVar6 == (undefined *)0x87000000) {
        uVar11 = *(int *)(param_2 + 0x34) + 1;
        *(uint *)(param_2 + 0x34) = uVar11;
        *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xdfffffff;
        if (*(uint *)(param_2 + 0x70) <= uVar11) goto LAB_8264e568;
        param_1 = *(uint **)(param_2 + 0x174);
      }
      else {
LAB_8264e6cc:
        if (uVar11 == 0xc0000000) {
          return param_1;
        }
        param_1 = (uint *)(uVar11 + 4);
      }
    }
    else if (puVar6 == (undefined *)0x89000000) {
      if ((*(uint *)(param_2 + 0x164) & 0x80000000) != 0) {
        puVar12 = (uint *)param_1[2];
        fn_8264E388(param_2 + 0x6c,param_1[1],0);
        do {
          puVar9 = (uint *)*puVar12;
          while (puVar12 = puVar12 + 1, puVar12 < puVar9) {
            if (*puVar12 != 0) {
              fn_8264E388(param_2 + 0x6c,*puVar12,1);
            }
          }
          puVar12 = (uint *)*puVar12;
        } while (puVar12 != (uint *)0xc0000000);
      }
      param_1 = param_1 + 3;
    }
    else if (puVar6 == (undefined *)0x8a000000) {
      puVar12 = (uint *)param_1[1];
      uVar11 = param_1[2];
      uVar3 = param_1[3];
      fn_8264DE30(uVar2,param_2,param_1[4]);
      do {
        puVar9 = puVar12 + 1;
        if (puVar9 < (uint *)*puVar12) {
          lVar10 = (ulonglong)((uint)((int)*puVar12 + (-1 - (int)puVar9)) >> 3) + 1;
          do {
            piVar4 = (int *)puVar9[1];
            uVar8 = (ulonglong)(*puVar9 >> 3) & 0x1ffffffc;
            if ((*puVar9 & 1) == 0) {
              iVar7 = (int)uVar8;
              bVar13 = ((((ulonglong)*(byte *)(iVar7 + -0x3fffffed) << 0x18 |
                          (ulonglong)*(byte *)(iVar7 + -0x3fffffee) << 0x10 |
                          (ulonglong)*(byte *)(iVar7 + -0x3fffffef) << 8 |
                         (ulonglong)*(byte *)(iVar7 + -0x3ffffff0)) -
                        ((ulonglong)*(byte *)(iVar7 + -0x3fffffcd) << 0x18 |
                         (ulonglong)*(byte *)(iVar7 + -0x3fffffce) << 0x10 |
                         (ulonglong)*(byte *)(iVar7 + -0x3fffffcf) << 8 |
                        (ulonglong)*(byte *)(iVar7 + -0x3fffffd0))) -
                       ((ulonglong)*(byte *)(iVar7 + -0x3fffffc9) << 0x18 |
                        (ulonglong)*(byte *)(iVar7 + -0x3fffffca) << 0x10 |
                        (ulonglong)*(byte *)(iVar7 + -0x3fffffcb) << 8 |
                       (ulonglong)*(byte *)(iVar7 + -0x3fffffcc))) +
                       ((ulonglong)*(byte *)(iVar7 + -0x3fffffe9) << 0x18 |
                        (ulonglong)*(byte *)(iVar7 + -0x3fffffea) << 0x10 |
                        (ulonglong)*(byte *)(iVar7 + -0x3fffffeb) << 8 |
                       (ulonglong)*(byte *)(iVar7 + -0x3fffffec)) != 0;
            }
            else {
              puVar5 = (ushort *)(uVar8 - 0x40000000);
              bVar13 = (ulonglong)*puVar5 <= (ulonglong)puVar5[1] + 1;
            }
            *piVar4 = -(uint)bVar13;
            dataCacheBlockFlush(((ulonglong)((uint)piVar4 >> 0x14) + 0x200 & 0x1000) +
                                (ZEXT48(piVar4) & 0x1fffffff) + -0x40000000);
            dataCacheBlockFlush(uVar8 - 0x40000000);
            dataCacheBlockFlush(uVar8 - 0x3fffffe8);
            puVar9 = puVar9 + 2;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        puVar12 = (uint *)*puVar9;
      } while (puVar12 != (uint *)0xc0000000);
      if ((*(uint *)(param_2 + 0x164) & 0x80000000) == 0) {
        if (*(int *)(param_2 + 0x34) == 1) {
          fn_8264E290(param_2 + 0x6c,uVar3);
        }
      }
      else {
        fn_8264E150(param_2 + 0x6c,uVar11);
      }
      param_1 = param_1 + 5;
    }
    else if (puVar6 == (undefined *)0x8b000000) {
      param_1 = param_1 + 1;
    }
    else {
      if (puVar6 == (undefined *)0x8c000000) {
        return param_1;
      }
      if (puVar6 == (undefined *)0x8d000000) {
        return param_1;
      }
      if (puVar6 != (undefined *)0x8e000000) {
        if (puVar6 == (undefined *)0x8f000000) goto LAB_8264e6dc;
        goto LAB_8264e6cc;
      }
      if ((*(uint *)(param_2 + 0x164) & 0x80000000) != 0) {
        uStack_68 = param_1[2];
        uStack_64 = param_1[3];
        fn_82644568(uVar2,&uStack_68,1);
      }
      puVar12 = param_1 + 1;
      param_1 = param_1 + 4;
      *(uint *)(param_2 + 0x168) = *puVar12;
    }
    uVar11 = *param_1;
  } while( true );
}

