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
extern int fn_82C45020();
extern int fn_82C4E0F8();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C564E8();
extern int fn_82C5E340();
extern int fn_82C5F9C8();
extern int fn_82C62BF0();
extern int fn_82C84080();
extern int fn_82C8DC88();
extern int fn_82C91D80();
extern int fn_82C91E80();
extern int fn_82CA12A8();
extern int fn_82CA1518();
extern int fn_82CA8498();
extern int fn_82CAAA10();
extern int fn_82CBDF88();
extern int fn_82CC0C78();
extern int fn_82CC0D88();
extern int fn_830BFE38();
extern int fn_830C0200();
extern int fn_830C03A8();


undefined8 fn_82C84208(int param_1)

{
  byte bVar1;
  ulonglong *puVar2;
  uint uVar3;
  ushort *puVar4;
  bool bVar5;
  int iVar7;
  undefined8 uVar6;
  ulonglong uVar8;
  undefined4 uVar10;
  byte *pbVar11;
  ulonglong uVar9;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  
  *(undefined4 *)(param_1 + 0x43cc) = 0;
  *(undefined4 *)(param_1 + 0x4c6c) = 1;
  *(undefined4 *)(param_1 + 0x79c) = 1;
  uVar12 = 0;
  fn_82C84080(param_1,1);
  if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) != 0) &&
     (iVar7 = fn_82C45020(*(int *)(param_1 + 0x6070),param_1), iVar7 != 0)) goto LAB_82c85158;
  *(undefined4 *)(param_1 + 0x54c8) = 0;
  if (*(longlong *)(param_1 + 0xe30) == 1) {
    if (*(int *)(param_1 + 0x5424) == 0) {
      *(undefined4 *)(param_1 + 0x54cc) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x54cc) = 1;
    }
  }
  else {
    *(uint *)(param_1 + 0x54cc) = *(uint *)(param_1 + 0x50d0) ^ 1;
  }
  if (*(int *)(param_1 + 0x5424) == 0) {
    *(undefined4 *)(param_1 + 0x50d0) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x50d0) = 0;
  }
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x5510);
  uVar6 = fn_82CBDF88(param_1);
  if ((int)uVar6 != 0) goto LAB_82c842e8;
  if (*(int *)(param_1 + 0x120) == 1) {
    uVar6 = fn_82CC0C78(param_1,*(undefined4 *)(param_1 + 0x5518));
    if ((int)uVar6 != 0) goto LAB_82c842e8;
  }
  else if (*(int *)(param_1 + 0x120) == 2) {
    uVar8 = ((ulonglong)*(uint *)(param_1 + 0x5518) -
            (longlong)
            ((int)(*(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64) *
                  *(uint *)(param_1 + 0x5518)) >> 8)) - 1;
    uVar6 = fn_82CC0C78(param_1);
    if ((int)uVar6 != 0) goto LAB_82c84354;
    uVar6 = fn_82CC0D88(param_1,((uVar8 & 0xffffffff) >> 0x1f) - 1 & uVar8);
    if ((int)uVar6 != 0) goto LAB_82c84784;
  }
  iVar7 = *(int *)(param_1 + 0x120);
  if (iVar7 == 1) {
    *(undefined4 *)(param_1 + 0xd58) = 0;
  }
  *(undefined4 *)(param_1 + 0x79c) = 1;
  if (((*(int *)(param_1 + 0x5510) == 0) || (*(int *)(param_1 + 0x5510) == 4)) &&
     (*(int *)(param_1 + 0x3a04) != 0)) {
    if (*(int *)(param_1 + 0x39f4) < 1) {
      fn_82C5F9C8(param_1,*(int *)(param_1 + 0x39f4) == 0);
    }
    else if (*(int *)(param_1 + 0xd54) == -3) {
      if (iVar7 == 2) goto LAB_82c85158;
      *(uint *)(param_1 + 0xd54) = (uint)(*(int *)(param_1 + 0x5638) == 0);
      if (*(int *)(param_1 + 0xd68) != 0) {
        fn_82C91D80(param_1);
      }
      fn_82C91E80(param_1);
    }
    else if (*(int *)(param_1 + 0xd54) == 1) {
      if (iVar7 == 4) {
        *(undefined4 *)(param_1 + 0xd74) = 1;
        *(undefined4 *)(param_1 + 0x54c8) = 1;
        *(uint *)(param_1 + 0x54cc) = *(uint *)(param_1 + 0x54cc) ^ 1;
        fn_82CA8498(param_1,0);
        fn_82CAAA10(param_1);
        return 0;
      }
      *(undefined4 *)(param_1 + 0xd54) = 0;
      fn_82C91D80(param_1);
      fn_82C91E80(param_1);
      fn_82CA12A8(param_1,*(undefined4 *)(param_1 + 0x50d0));
      *(undefined4 *)(param_1 + 0xd5c) = 0;
    }
    else {
      if (*(int *)(param_1 + 0xd68) != 0) {
        fn_82C91D80(param_1);
      }
      if (*(int *)(param_1 + 0x120) != 4) {
        fn_82C91E80(param_1);
      }
      *(undefined4 *)(param_1 + 0xd5c) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x120) == 4)) {
    *(undefined4 *)(param_1 + 0xe8c) = 1;
    if ((*(int *)(param_1 + 0x3cd4) != 0) || (uVar10 = 1, *(int *)(param_1 + 0x98) == 0)) {
      uVar10 = 0;
    }
    *(undefined4 *)(param_1 + 0x3cb4) = uVar10;
    if (*(int *)(param_1 + 0x3a24) != 0) {
      fn_82C62BF0(param_1);
    }
    uVar6 = fn_830BFE38(param_1);
    if ((int)uVar6 == 1) goto LAB_82c846cc;
LAB_82c8477c:
    if ((int)uVar6 != 0) {
LAB_82c84784:
      fn_82CA8498(param_1,0);
      fn_82CAAA10(param_1);
      return uVar6;
    }
  }
  else {
    fn_82C564E8(param_1);
    if ((*(int *)(param_1 + 0x3a04) == 0) || (*(int *)(param_1 + 0x120) == 1)) {
      if (*(int *)(param_1 + 0x39f4) == 0) {
        fn_82C5F9C8(param_1,1);
      }
      else {
        if (*(int *)(param_1 + 0xd54) == 1) {
          *(undefined4 *)(param_1 + 0xd54) = 0;
LAB_82c8458c:
          fn_82C91D80(param_1);
        }
        else if (*(int *)(param_1 + 0xd68) != 0) goto LAB_82c8458c;
        fn_82C91E80(param_1);
      }
      *(undefined4 *)(param_1 + 0xd5c) = 0;
    }
    else if (*(int *)(param_1 + 0x120) == 2) {
      if ((*(int *)(param_1 + 0xd54) == 1) && (*(int *)(param_1 + 0x5638) == 0)) {
        *(undefined4 *)(param_1 + 0xd74) = 1;
        *(undefined4 *)(param_1 + 0x54c8) = 1;
        *(uint *)(param_1 + 0x54cc) = *(uint *)(param_1 + 0x54cc) ^ 1;
        fn_82CA8498(param_1,0);
        fn_82CAAA10(param_1);
        return 0;
      }
      if (*(int *)(param_1 + 0xd68) != 0) {
        fn_82C91D80(param_1);
      }
    }
    if (*(int *)(param_1 + 0xfb4) != 0) {
      if (*(int *)(param_1 + 0x39f4) != 0) {
        fn_82C5E340(param_1);
      }
      if (*(int *)(param_1 + 0x50f8) != 0) {
        fn_82C8DC88(param_1,0,*(undefined4 *)(param_1 + 0x5100),
                          *(undefined4 *)(param_1 + 0x5104));
      }
      if (*(int *)(param_1 + 0x50fc) != 0) {
        fn_82C8DC88(param_1,1,*(undefined4 *)(param_1 + 0x5108),
                          *(undefined4 *)(param_1 + 0x510c));
      }
      if (*(int *)(param_1 + 0x56d0) == 0) {
        (**(code **)(param_1 + 0x3e30))
                  (0,*(undefined4 *)(param_1 + 0xecc),0,*(int *)(param_1 + 0xac) << 1,
                   *(undefined4 *)(param_1 + 0xdc),1,1,*(undefined4 *)(param_1 + 0xa4));
        (**(code **)(param_1 + 0x3e2c))
                  (0,*(undefined4 *)(param_1 + 0xed0),*(undefined4 *)(param_1 + 0xed4),0,
                   *(int *)(param_1 + 0xb0) << 1,*(undefined4 *)(param_1 + 0xe0),1,1);
      }
    }
    if (*(int *)(param_1 + 0x120) == 2) {
      uVar6 = fn_830C03A8();
    }
    else {
      uVar6 = fn_830C0200(param_1);
    }
    if ((int)uVar6 != 1) goto LAB_82c8477c;
LAB_82c846cc:
    uVar12 = 1;
  }
  if ((((*(int *)(param_1 + 0x5510) != 0) && (*(int *)(param_1 + 0x5514) == 0)) &&
      (*(int *)(param_1 + 0x3a04) != 0)) && (0 < *(int *)(param_1 + 0x39f4))) {
    if (*(int *)(param_1 + 0xd54) == -3) {
      if (*(int *)(param_1 + 0x120) == 2) goto LAB_82c85158;
      *(uint *)(param_1 + 0xd54) = (uint)LZCOUNT(*(undefined4 *)(param_1 + 0x5638)) >> 5;
    }
    else {
      if (*(int *)(param_1 + 0xd54) == 1) {
        *(undefined4 *)(param_1 + 0xd54) = 0;
      }
      *(undefined4 *)(param_1 + 0xd5c) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) goto LAB_82c85158;
  fn_82CA12A8(param_1,*(undefined4 *)(param_1 + 0x50d0));
  *(undefined4 *)(param_1 + 0x54c8) = 1;
  *(uint *)(param_1 + 0x50d0) = *(uint *)(param_1 + 0x50d0) ^ 1;
  *(uint *)(param_1 + 0x54cc) = *(uint *)(param_1 + 0x54cc) ^ 1;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x5514);
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  if (*(int *)((int)puVar2 + 0x1c) != 0) {
    pbVar11 = *(byte **)((int)puVar2 + 0xc);
    iVar7 = *(int *)(puVar2 + 1);
    while (iVar7 == -0x10) {
      if (*(byte **)(puVar2 + 2) < pbVar11) {
        if (*(int *)(puVar2 + 3) != 1) break;
        fn_82C4E0F8(puVar2);
        pbVar11 = *(byte **)((int)puVar2 + 0xc);
      }
      else {
        uVar3 = *(uint *)(puVar2 + 1);
        if (0x28 < (int)uVar3) {
          if (((ulonglong)uVar3 + 0x10 & 0xffffffff) == 0) {
            uVar8 = (ulonglong)(*pbVar11 >> ((ulonglong)uVar3 + 0xf8 & 0x7f)) + *puVar2 >> 0x1f &
                    0xffffffff;
            goto LAB_82c84898;
          }
          break;
        }
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        *(uint *)(puVar2 + 1) = uVar3 + 8;
        *(byte **)((int)puVar2 + 0xc) = pbVar11;
        *puVar2 = ((ulonglong)bVar1 << ((longlong)(int)(0x28 - uVar3) & 0x7fU)) + *puVar2;
      }
      iVar7 = *(int *)(puVar2 + 1);
    }
    uVar8 = *puVar2 >> 0x3f;
LAB_82c84898:
    if (uVar8 == 0) goto LAB_82c85158;
  }
  plVar14 = *(longlong **)(param_1 + 0x54);
  if (*(int *)((int)plVar14 + 0x1c) != 0) {
    uVar8 = (ulonglong)*(uint *)(plVar14 + 1);
    uVar13 = 1;
    uVar9 = uVar8 + 0x10;
    if ((uVar9 & 0xffffffff) == 0) {
      do {
        if ((uVar9 & 0xffffffff) == 0) break;
        uVar13 = uVar13 - uVar9;
        *plVar14 = *plVar14 << (uVar9 & 0x7f);
        *(int *)(plVar14 + 1) = (int)(uVar8 - uVar9);
        if ((longlong)(uVar8 - uVar9) < 0) {
          fn_82C4E5E8(plVar14);
        }
        uVar8 = (ulonglong)*(uint *)(plVar14 + 1);
        uVar9 = uVar8 + 0x10;
      } while ((uVar9 & 0xffffffff) < (uVar13 & 0xffffffff));
    }
    *plVar14 = *plVar14 << (uVar13 & 0x7f);
    *(int *)(plVar14 + 1) = (int)(uVar8 - uVar13);
    if ((longlong)(uVar8 - uVar13) < 0) {
      fn_82C4E5E8(plVar14);
    }
  }
  fn_82C4E470(plVar14,*(uint *)(plVar14 + 1) & 7);
  puVar4 = *(ushort **)(param_1 + 0x54);
  pbVar11 = *(byte **)(puVar4 + 6);
  iVar7 = *(int *)(puVar4 + 4);
  while (iVar7 + 0x10U < 0x10) {
    if (*(byte **)(puVar4 + 8) < pbVar11) {
      if (*(int *)(puVar4 + 0xc) != 1) break;
      fn_82C4E0F8(puVar4);
      pbVar11 = *(byte **)(puVar4 + 6);
    }
    else {
      uVar3 = *(uint *)(puVar4 + 4);
      if (0x28 < (int)uVar3) {
        if (((ulonglong)uVar3 + 0x10 & 0xffffffff) < 0x10) {
          uVar8 = (ulonglong)(*pbVar11 >> ((ulonglong)uVar3 + 0xf8 & 0x7f)) + *(longlong *)puVar4 >>
                  0x10 & 0xffffffff;
          goto LAB_82c849f4;
        }
        break;
      }
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      *(uint *)(puVar4 + 4) = uVar3 + 8;
      *(byte **)(puVar4 + 6) = pbVar11;
      *(ulonglong *)puVar4 =
           ((ulonglong)bVar1 << ((longlong)(int)(0x28 - uVar3) & 0x7fU)) + *(longlong *)puVar4;
    }
    iVar7 = *(int *)(puVar4 + 4);
  }
  uVar8 = (ulonglong)*puVar4;
LAB_82c849f4:
  bVar5 = false;
  uVar9 = 0;
  if (uVar8 == 0) {
    do {
      plVar14 = *(longlong **)(param_1 + 0x54);
      if (*(int *)((int)plVar14 + 0x14) != 0) {
        if (!bVar5) goto LAB_82c84de4;
        break;
      }
      uVar8 = (ulonglong)*(uint *)(plVar14 + 1);
      uVar13 = 0x10;
      uVar9 = uVar8 + 0x10;
      if ((uVar9 & 0xffffffff) < 0x10) {
        do {
          if ((uVar9 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar9;
          *plVar14 = *plVar14 << (uVar9 & 0x7f);
          *(int *)(plVar14 + 1) = (int)(uVar8 - uVar9);
          if ((longlong)(uVar8 - uVar9) < 0) {
            fn_82C4E5E8(plVar14);
          }
          uVar8 = (ulonglong)*(uint *)(plVar14 + 1);
          uVar9 = uVar8 + 0x10;
        } while ((uVar9 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *plVar14 = *plVar14 << (uVar13 & 0x7f);
      *(int *)(plVar14 + 1) = (int)(uVar8 - uVar13);
      if ((longlong)(uVar8 - uVar13) < 0) {
        fn_82C4E5E8(plVar14);
      }
      puVar4 = *(ushort **)(param_1 + 0x54);
      pbVar11 = *(byte **)(puVar4 + 6);
      iVar7 = *(int *)(puVar4 + 4);
      while (iVar7 + 0x10U < 0x10) {
        if (*(byte **)(puVar4 + 8) < pbVar11) {
          if (*(int *)(puVar4 + 0xc) != 1) break;
          fn_82C4E0F8(puVar4);
          pbVar11 = *(byte **)(puVar4 + 6);
        }
        else {
          uVar3 = *(uint *)(puVar4 + 4);
          if (0x28 < (int)uVar3) {
            if (((ulonglong)uVar3 + 0x10 & 0xffffffff) < 0x10) {
              uVar9 = (ulonglong)(*pbVar11 >> ((ulonglong)uVar3 + 0xf8 & 0x7f)) +
                      *(longlong *)puVar4 >> 0x10 & 0xffffffff;
              goto LAB_82c84b44;
            }
            break;
          }
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          *(uint *)(puVar4 + 4) = uVar3 + 8;
          *(byte **)(puVar4 + 6) = pbVar11;
          *(ulonglong *)puVar4 =
               ((ulonglong)bVar1 << ((longlong)(int)(0x28 - uVar3) & 0x7fU)) + *(longlong *)puVar4;
        }
        iVar7 = *(int *)(puVar4 + 4);
      }
      uVar9 = (ulonglong)*puVar4;
LAB_82c84b44:
      plVar14 = *(longlong **)(param_1 + 0x54);
      bVar5 = true;
      if (*(int *)((int)plVar14 + 0x14) != 0) goto LAB_82c85158;
    } while (uVar9 == 0);
    if (uVar9 == 0x10c) {
      uVar8 = (ulonglong)*(uint *)(plVar14 + 1);
      uVar13 = 0x10;
      uVar9 = uVar8 + 0x10;
      if ((uVar9 & 0xffffffff) < 0x10) {
        do {
          if ((uVar9 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar9;
          *plVar14 = *plVar14 << (uVar9 & 0x7f);
          *(int *)(plVar14 + 1) = (int)(uVar8 - uVar9);
          if ((longlong)(uVar8 - uVar9) < 0) {
            fn_82C4E5E8(plVar14);
          }
          uVar8 = (ulonglong)*(uint *)(plVar14 + 1);
          uVar9 = uVar8 + 0x10;
        } while ((uVar9 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *plVar14 = *plVar14 << (uVar13 & 0x7f);
      *(int *)(plVar14 + 1) = (int)(uVar8 - uVar13);
      if ((longlong)(uVar8 - uVar13) < 0) {
        fn_82C4E5E8(plVar14);
      }
    }
    else if (uVar9 == 1) {
      uVar8 = (ulonglong)*(uint *)(plVar14 + 1);
      uVar13 = 8;
      uVar9 = uVar8 + 0x10;
      if ((uVar9 & 0xffffffff) < 8) {
        do {
          if ((uVar9 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar9;
          *plVar14 = *plVar14 << (uVar9 & 0x7f);
          *(int *)(plVar14 + 1) = (int)(uVar8 - uVar9);
          if ((longlong)(uVar8 - uVar9) < 0) {
            fn_82C4E5E8(plVar14);
          }
          uVar8 = (ulonglong)*(uint *)(plVar14 + 1);
          uVar9 = uVar8 + 0x10;
        } while ((uVar9 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *plVar14 = *plVar14 << (uVar13 & 0x7f);
      *(int *)(plVar14 + 1) = (int)(uVar8 - uVar13);
      if ((longlong)(uVar8 - uVar13) < 0) {
        fn_82C4E5E8(plVar14);
      }
      puVar4 = *(ushort **)(param_1 + 0x54);
      pbVar11 = *(byte **)(puVar4 + 6);
      iVar7 = *(int *)(puVar4 + 4);
      while (iVar7 + 0x10U < 0x10) {
        if (*(byte **)(puVar4 + 8) < pbVar11) {
          if (*(int *)(puVar4 + 0xc) != 1) break;
          fn_82C4E0F8(puVar4);
          pbVar11 = *(byte **)(puVar4 + 6);
        }
        else {
          uVar3 = *(uint *)(puVar4 + 4);
          if (0x28 < (int)uVar3) {
            if (((ulonglong)uVar3 + 0x10 & 0xffffffff) < 0x10) {
              uVar8 = (ulonglong)(*pbVar11 >> ((ulonglong)uVar3 + 0xf8 & 0x7f)) +
                      *(longlong *)puVar4 >> 0x10 & 0xffffffff;
              goto LAB_82c84d2c;
            }
            break;
          }
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          *(uint *)(puVar4 + 4) = uVar3 + 8;
          *(byte **)(puVar4 + 6) = pbVar11;
          *(ulonglong *)puVar4 =
               ((ulonglong)bVar1 << ((longlong)(int)(0x28 - uVar3) & 0x7fU)) + *(longlong *)puVar4;
        }
        iVar7 = *(int *)(puVar4 + 4);
      }
      uVar8 = (ulonglong)*puVar4;
LAB_82c84d2c:
      if (uVar8 == 0x10c) {
        plVar14 = *(longlong **)(param_1 + 0x54);
        uVar13 = 0x10;
        uVar8 = (ulonglong)*(uint *)(plVar14 + 1);
        uVar9 = uVar8 + 0x10;
        if ((uVar9 & 0xffffffff) < 0x10) {
          do {
            if ((uVar9 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar9;
            *plVar14 = *plVar14 << (uVar9 & 0x7f);
            *(int *)(plVar14 + 1) = (int)(uVar8 - uVar9);
            if ((longlong)(uVar8 - uVar9) < 0) {
              fn_82C4E5E8(plVar14);
            }
            uVar8 = (ulonglong)*(uint *)(plVar14 + 1);
            uVar9 = uVar8 + 0x10;
          } while ((uVar9 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *plVar14 = *plVar14 << (uVar13 & 0x7f);
        *(int *)(plVar14 + 1) = (int)(uVar8 - uVar13);
        if ((longlong)(uVar8 - uVar13) < 0) {
          fn_82C4E5E8(plVar14);
        }
      }
    }
  }
  else {
LAB_82c84de4:
    if ((*(int *)(param_1 + 0x56a8) != 0) && (*(int *)(param_1 + 0x5620) == 0)) goto LAB_82c85158;
  }
  uVar6 = fn_82CBDF88(param_1);
  if ((int)uVar6 != 0) {
LAB_82c842e8:
    fn_82CA8498(param_1,0);
    fn_82CAAA10(param_1);
    return uVar6;
  }
  if (*(int *)(param_1 + 0x120) == 1) {
    uVar6 = fn_82CC0C78(param_1,*(undefined4 *)(param_1 + 0x5518));
    if ((int)uVar6 != 0) {
      fn_82CA8498(param_1,0);
      fn_82CAAA10(param_1);
      return uVar6;
    }
  }
  else if (*(int *)(param_1 + 0x120) == 2) {
    uVar8 = ((ulonglong)*(uint *)(param_1 + 0x5518) -
            (longlong)
            ((int)(*(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64) *
                  *(uint *)(param_1 + 0x5518)) >> 8)) - 1;
    uVar6 = fn_82CC0C78(param_1);
    if ((int)uVar6 != 0) {
LAB_82c84354:
      fn_82CA8498(param_1,0);
      fn_82CAAA10(param_1);
      return uVar6;
    }
    uVar6 = fn_82CC0D88(param_1,((uVar8 & 0xffffffff) >> 0x1f) - 1 & uVar8);
    if ((int)uVar6 != 0) goto LAB_82c842e8;
  }
  iVar7 = *(int *)(param_1 + 0x120);
  if (iVar7 == 1) {
    *(undefined4 *)(param_1 + 0xd58) = 0;
  }
  *(undefined4 *)(param_1 + 0x79c) = 1;
  if ((iVar7 == 0) || (iVar7 == 4)) {
    *(undefined4 *)(param_1 + 0xe8c) = 1;
    if ((*(int *)(param_1 + 0x3cd4) != 0) || (uVar10 = 1, *(int *)(param_1 + 0x98) == 0)) {
      uVar10 = 0;
    }
    *(undefined4 *)(param_1 + 0x3cb4) = uVar10;
    if (*(int *)(param_1 + 0x3a24) != 0) {
      fn_82C62BF0(param_1);
    }
    uVar6 = fn_830BFE38(param_1);
    if ((int)uVar6 == 1) goto LAB_82c85074;
LAB_82c85130:
    if ((int)uVar6 != 0) {
      fn_82CA8498(param_1,0);
      fn_82CAAA10(param_1);
      return uVar6;
    }
  }
  else {
    fn_82C564E8(param_1);
    if (*(int *)(param_1 + 0xfb4) != 0) {
      if (*(int *)(param_1 + 0x39f4) != 0) {
        fn_82C5E340(param_1);
      }
      if (*(int *)(param_1 + 0x50f8) != 0) {
        if (*(int *)(param_1 + 0x50d0) == 1) {
          fn_82CA1518(param_1,0);
          *(undefined4 *)(param_1 + 0x3d0c) = 1;
        }
        fn_82C8DC88(param_1,0,*(undefined4 *)(param_1 + 0x5100),
                          *(undefined4 *)(param_1 + 0x5104));
      }
      if (*(int *)(param_1 + 0x50fc) != 0) {
        if (*(int *)(param_1 + 0x50d0) == 0) {
          fn_82CA1518(param_1,1);
          *(undefined4 *)(param_1 + 0x3d0c) = 1;
        }
        fn_82C8DC88(param_1,1,*(undefined4 *)(param_1 + 0x5108),
                          *(undefined4 *)(param_1 + 0x510c));
      }
      if ((*(int *)(param_1 + 0x56d0) == 0) &&
         (((*(int *)(param_1 + 0x50f8) != 0 && (*(int *)(param_1 + 0x50d0) == 0)) ||
          ((*(int *)(param_1 + 0x50fc) != 0 && (*(int *)(param_1 + 0x50d0) == 1)))))) {
        (**(code **)(param_1 + 0x3e30))
                  (0,*(undefined4 *)(param_1 + 0xecc),0,*(int *)(param_1 + 0xac) << 1,
                   *(undefined4 *)(param_1 + 0xdc),1,1,*(undefined4 *)(param_1 + 0xa4));
        (**(code **)(param_1 + 0x3e2c))
                  (0,*(undefined4 *)(param_1 + 0xed0),*(undefined4 *)(param_1 + 0xed4),0,
                   *(int *)(param_1 + 0xb0) << 1,*(undefined4 *)(param_1 + 0xe0),1,1);
      }
    }
    if (*(int *)(param_1 + 0x120) == 2) {
      uVar6 = fn_830C03A8();
    }
    else {
      uVar6 = fn_830C0200(param_1);
    }
    if ((int)uVar6 != 1) goto LAB_82c85130;
LAB_82c85074:
    uVar12 = 1;
  }
  if (*(int *)(param_1 + 0x3d0c) != 0) {
    fn_82CA1518(param_1,*(undefined4 *)(param_1 + 0x50d0));
  }
  if ((*(int *)(param_1 + 0x50c8) != 0) && (*(int *)(param_1 + 0x50cc) != 0)) {
    fn_82CA12A8(param_1,*(undefined4 *)(param_1 + 0x50d0));
    *(uint *)(param_1 + 0x50d0) = *(uint *)(param_1 + 0x50d0) ^ 1;
    fn_82CA8498(param_1,0);
    fn_82CAAA10(param_1);
    return uVar12;
  }
LAB_82c85158:
  fn_82CA8498(param_1,0);
  fn_82CAAA10(param_1);
  return 1;
}

