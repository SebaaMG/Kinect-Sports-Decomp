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
#define CONCAT42(h,l) ((U64)((((U32)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define CONCAT62(h,l) ((U64)((((U64)(h)) << 16) | ((U16)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_114;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82E4BB98();
extern int fn_82E4BC88();
extern int fn_82E4BCD8();
extern int fn_82E4BE00();
extern int fn_82E4BE68();
extern int fn_82E4BEE0();
extern int fn_82E4C2D0();
extern int fn_82E4C550();
extern int fn_82E4C7C0();
extern int fn_82E82680();
extern int fn_82E83368();
extern int fn_82E83390();
extern int fn_82E867E8();
extern int fn_82E8D670();
extern int fn_82E90D68();
extern int fn_82E914C0();
extern int fn_82E93200();
extern int fn_82E93398();
extern int fn_82E939F0();
extern int fn_82E946D8();
extern int fn_82ED2268();
extern int fn_82ED57E0();
extern int fn_82EDAD28();
extern int fn_82EDD308();
extern int fn_82EDD388();
extern int fn_82EDD9F0();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern int iRam83248eb0;
extern unsigned int iStack_118;
extern unsigned int iStack_138;
extern unsigned int iStack_13c;
extern unsigned int uStack0000004c;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_132;
extern unsigned int uStack_134;
extern unsigned int uStack_140;
extern unsigned int uStack_144;


undefined8
fn_82E4C858(int param_1,uint *param_2,ulonglong param_3,undefined1 *param_4,uint *param_5,
             uint param_6,int param_7,ulonglong param_8)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar4;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  int *piVar15;
  longlong lVar14;
  uint *puVar16;
  longlong lVar17;
  undefined1 *puStack0000002c;
  uint *puStack00000034;
  undefined4 uStack0000004c;
  undefined4 in_stack_00000054;
  longlong in_stack_00000058;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000074;
  uint in_stack_0000007c;
  longlong *in_stack_0000008c;
  uint in_stack_00000094;
  uint in_stack_0000009c;
  uint in_stack_000000a4;
  uint in_stack_000000ac;
  uint in_stack_000000b4;
  int in_stack_000000bc;
  undefined4 *in_stack_000000c4;
  longlong *in_stack_000000cc;
  uint *apuStack_150 [3];
  undefined4 uStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  undefined2 uStack_134;
  undefined2 uStack_132;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  int iStack_118;
  undefined1 auStack_114 [4];
  undefined1 auStack_110 [16];
  uint auStack_100 [64];
  
  uStack0000004c = (undefined4)param_8;
  if (*(int *)(param_1 + 0x1c4) < 1) {
    puVar16 = (uint *)(param_1 + 0x1bc);
    puVar12 = param_2 + -1;
    lVar17 = 10;
    do {
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
      *puVar16 = *puVar12;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(int *)(param_1 + 500) == 0) {
    *(uint *)(param_1 + 500) = param_2[5];
  }
  puStack0000002c = param_4;
  puStack00000034 = param_5;
  if (((*(int *)(param_1 + 0x3c) != 0) &&
      (iVar5 = fn_82E93398(*(undefined4 *)(param_1 + 0xc),in_stack_00000054,in_stack_00000058),
      iVar5 != 0)) && (*(int *)(param_1 + 0x1fc) == 0)) {
    iVar5 = fn_82E93200(*(undefined4 *)(param_1 + 0xc));
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0x1f0) = 1;
    }
    else if ((*(uint *)(param_1 + 0x204) == param_2[1]) &&
            (*(uint *)(param_1 + 0x208) == param_2[2])) {
      *(undefined4 *)(param_1 + 0x1f0) = 0;
    }
    fn_82E83390(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1fc),
                    *(undefined4 *)(param_1 + 0x1f0));
  }
  puVar12 = param_2;
  if (in_stack_000000bc == 0) {
    if ((*(int *)(param_1 + 0x1fc) == 0) || (*(int *)(param_1 + 0x1e8) != 0)) {
      if (*(int *)(param_1 + 0x1f0) != 0) {
        piVar13 = (int *)(param_1 + 0x1e8);
        if (*(int *)(param_1 + 0x1e8) == 0) {
          fn_82EDD9F0(param_2,piVar13,param_2[1],param_2[2],0,in_stack_00000064);
          if (*piVar13 == 0) {
            return 0xffffffffffffff9c;
          }
          uVar7 = param_2[5];
          *(uint *)(param_1 + 500) = uVar7;
          if (*(int *)(param_1 + 0x1ec) == 0) {
            iVar5 = fn_8265C940(uVar7,0x248c8000);
            *(int *)(param_1 + 0x1ec) = iVar5;
            if (iVar5 == 0) {
              return 0xffffffffffffff9c;
            }
          }
          puVar8 = (uint *)(param_1 + 0x1bc);
          puVar16 = param_2 + -1;
          lVar17 = 10;
          do {
            puVar16 = puVar16 + 1;
            puVar8 = puVar8 + 1;
            *puVar8 = *puVar16;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        else {
          iVar5 = fn_82E93398(*(undefined4 *)(param_1 + 0xc),in_stack_00000054,in_stack_00000058
                                 );
          if (iVar5 != 0) {
            fn_82E946D8(*(undefined4 *)(param_1 + 0xc));
            piVar15 = (int *)(param_1 + 0x208);
            iVar5 = *(int *)(param_1 + 0x204);
            iVar2 = *(int *)(param_1 + 0x208);
            fn_82E939F0(*(undefined4 *)(param_1 + 0xc),(int *)(param_1 + 0x204),piVar15);
            if ((iVar5 != *(int *)(param_1 + 0x204)) || (iVar2 != *piVar15)) {
              fn_82EDD308(*piVar13,param_2[1],param_2[2],*(int *)(param_1 + 0x204),*piVar15);
              iVar5 = *(int *)(param_1 + 0x204);
              iVar2 = *piVar15;
              if (param_2[4] == 0) {
                *(int *)(param_1 + 500) =
                     ((int)((uint)*(ushort *)((int)param_2 + 0xe) * iVar5 + 0x1f & 0xffffffe0) >> 3)
                     * iVar2;
              }
              else {
                *(uint *)(param_1 + 500) =
                     (uint)*(ushort *)((int)param_2 + 0xe) * iVar2 * iVar5 >> 3;
              }
              puVar8 = (uint *)(param_1 + 0x1bc);
              puVar16 = param_2 + -1;
              lVar17 = 10;
              do {
                puVar16 = puVar16 + 1;
                puVar8 = puVar8 + 1;
                *puVar8 = *puVar16;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              *(int *)(param_1 + 0x1c4) = iVar5;
              *(int *)(param_1 + 0x1c8) = iVar2;
              goto LAB_82e4cbb0;
            }
          }
        }
      }
    }
    else {
      fn_82EDD9F0(param_2,(int *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x204),
                      *(undefined4 *)(param_1 + 0x208),0,in_stack_00000064);
      if (*(int *)(param_1 + 0x1e8) == 0) {
        return 0xffffffffffffff9c;
      }
      if (param_2[4] == 0) {
        *(int *)(param_1 + 500) =
             ((int)((uint)*(ushort *)((int)param_2 + 0xe) * *(int *)(param_1 + 0x204) + 0x1f &
                   0xffffffe0) >> 3) * *(int *)(param_1 + 0x208);
      }
      else {
        *(int *)(param_1 + 500) =
             (int)(((longlong)
                    (int)((uint)*(ushort *)((int)param_2 + 0xe) * *(int *)(param_1 + 0x204)) *
                    (longlong)*(int *)(param_1 + 0x208) & 0xffffffffU) >> 3);
      }
      iVar5 = fn_8265C940(*(undefined4 *)(param_1 + 500),0x248c8000);
      *(int *)(param_1 + 0x1ec) = iVar5;
      if (iVar5 == 0) {
        return 0xffffffffffffff9c;
      }
      puVar8 = (uint *)(param_1 + 0x1bc);
      puVar16 = param_2 + -1;
      lVar17 = 10;
      do {
        puVar16 = puVar16 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar16;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x204);
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x208);
LAB_82e4cbb0:
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 500);
    }
    if ((*(int *)(param_1 + 0x1e8) != 0) &&
       ((*(uint *)(param_1 + 0x204) != param_2[1] || (*(uint *)(param_1 + 0x208) != param_2[2])))) {
      fn_82EDD388(*(int *)(param_1 + 0x1e8),param_3,param_2[5],auStack_110,
                      *(undefined4 *)(param_1 + 0x1ec),*(undefined4 *)(param_1 + 500),auStack_114);
      param_3 = (ulonglong)*(uint *)(param_1 + 0x1ec);
      puVar12 = (uint *)(param_1 + 0x1c0);
    }
    fn_82ED57E0(*(undefined4 *)(param_1 + 0xc),param_2,param_1 + 0x1c0,param_7);
    if ((*(int *)(param_1 + 0x1fc) != 0) || (*(int *)(param_1 + 0x1f0) != 0)) {
      fn_82EDAD28(*(undefined4 *)(param_1 + 0xc),in_stack_00000064);
    }
  }
  else {
    if ((*(int *)(param_1 + 0x1e8) != 0) &&
       ((*(uint *)(param_1 + 0x204) != param_2[1] || (*(uint *)(param_1 + 0x208) != param_2[2])))) {
      puVar12 = (uint *)(param_1 + 0x1c0);
    }
    param_3 = ZEXT48(apuStack_150[0]);
  }
  puVar16 = auStack_100;
  apuStack_150[0] = puVar16;
  if ((((0 < *(int *)(param_1 + 0x244)) &&
       (*(int *)(param_1 + 0x248) < *(int *)(param_1 + 0x244) + -2)) && (param_7 != 0)) &&
     ((param_8 & 0xffffffff) != 0)) {
    puVar9 = &uStack_144;
    puVar10 = (undefined4 *)(param_7 + -4);
    lVar17 = 10;
    do {
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
      *puVar9 = *puVar10;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar14 = (longlong)iStack_138 * (longlong)iStack_13c;
    uStack_132 = 0xc;
    uStack_134 = 1;
    lVar17 = ((int)lVar14 >> 1) + lVar14;
    uStack_130 = 0x30323449;
    uStack_12c = (undefined4)lVar17;
    if (*(int *)(param_1 + 0x250) != 0) {
      uVar6 = fn_8265C940(lVar17,0x248c8000);
      *(undefined4 *)(param_1 + 0x254) = uVar6;
      iVar5 = fn_8265C940(*(undefined4 *)(param_7 + 0x14),0x248c8000);
      *(int *)(param_1 + 600) = iVar5;
      if (*(int *)(param_1 + 0x254) == 0) {
        return 0xffffffffffffff9c;
      }
      if (iVar5 == 0) {
        return 0xffffffffffffff9c;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(int *)(param_1 + 0x254),0,lVar14);
    }
    fn_82F68CC0(param_8,*(undefined4 *)(param_1 + 600),*(undefined4 *)(param_7 + 0x14));
    if ((*(int *)(param_1 + 0x248) == *(int *)(param_1 + 0x244) + -3) &&
       (*(int *)(param_1 + 600) != 0)) {
      fn_8265C990(*(int *)(param_1 + 600),0x248c8000);
      *(undefined4 *)(param_1 + 600) = 0;
      puVar16 = apuStack_150[0];
    }
    *(undefined4 *)(param_1 + 0x250) = 0;
  }
  if (in_stack_000000bc != 0) {
    if ((int)*(uint *)(param_1 + 0x238) < 1) {
LAB_82e4ce20:
      *in_stack_000000c4 = 0;
      *param_5 = 0;
      *(undefined4 *)(param_1 + 0x248) = 0;
      *(undefined4 *)(param_1 + 0x24c) = 0;
      *(undefined4 *)(param_1 + 0x238) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      return 0;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      fn_82E4BE68();
      if (apuStack_150[0] == (uint *)0x0) {
        in_stack_00000058 = 0;
        *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
      }
      else {
        in_stack_00000058 = *(longlong *)(apuStack_150[0] + 0xc);
        *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
      }
    }
    else {
      fn_82E4BC88(param_1,apuStack_150,(ulonglong)*(uint *)(param_1 + 0x238) - 1);
      if (apuStack_150[0] != (uint *)0x0) {
        if (*apuStack_150[0] != 0) {
          fn_8265C990(*apuStack_150[0],0x248c8000);
          *apuStack_150[0] = 0;
        }
        if (apuStack_150[0][1] != 0) {
          fn_8265C990(apuStack_150[0][1],0x248c8000);
          apuStack_150[0][1] = 0;
        }
        if (apuStack_150[0] != (uint *)0x0) {
          fn_8265C990(apuStack_150[0],0x248c8000);
          apuStack_150[0] = (uint *)0x0;
        }
      }
      if (*(char *)(param_1 + 0x228) != '\0') {
        fn_82E4BCD8(param_1,&uStack_140,0xffffffffffffffff);
      }
      if (*(int *)(param_1 + 0x24c) == 0) {
        if ((int)*(uint *)(param_1 + 0x238) < 2) goto LAB_82e4ce20;
        lVar17 = fn_82E4C550(param_1,CONCAT44(uStack_140,iStack_13c),
                               CONCAT62(CONCAT42(iStack_138,uStack_134),uStack_132),
                               CONCAT44(uStack_130,uStack_12c),(ulonglong)uStack_128 << 0x20);
        uVar7 = *(uint *)(param_1 + 0x238);
        *(int *)(param_1 + 0x24c) = (int)lVar17;
        if ((longlong)(((ulonglong)uVar7 - lVar17) + -2) < 0) {
          *(uint *)(param_1 + 0x24c) = uVar7 - 2;
        }
        fn_82E4BE68(param_1,apuStack_150,(ulonglong)uVar7 - 2);
        in_stack_00000058 = *(longlong *)(apuStack_150[0] + 0xc);
        fn_82E82680(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x24c));
        fn_82E4BE68(param_1,apuStack_150,
                      ((ulonglong)*(uint *)(param_1 + 0x238) - (ulonglong)*(uint *)(param_1 + 0x24c)
                      ) + -2);
        if (0 < (int)*(uint *)(param_1 + 0x24c)) {
          fn_82E4BCD8(param_1,&uStack_140,
                        ((ulonglong)*(uint *)(param_1 + 0x238) -
                        (ulonglong)*(uint *)(param_1 + 0x24c)) + -2);
        }
      }
      else {
        fn_82E4BE68(param_1,apuStack_150,(ulonglong)*(uint *)(param_1 + 0x238) - 2);
        if (apuStack_150[0] == (uint *)0x0) {
          return 0xffffffffffffff9c;
        }
        in_stack_00000058 = *(longlong *)(apuStack_150[0] + 0xc);
        fn_82E4BE68(param_1,apuStack_150,(ulonglong)*(uint *)(param_1 + 0x238) - 1);
        fn_82E4BCD8(param_1,&uStack_140,(ulonglong)*(uint *)(param_1 + 0x238) - 1);
        if (0 < *(int *)(param_1 + 0x24c)) {
          *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + -1;
        }
      }
    }
    iVar5 = *(int *)(param_1 + 0xc);
    if ((iVar5 != 0) && (1 < *(byte *)(iVar5 + 0x7b30))) {
      fn_82ED2268(*(undefined4 *)(iVar5 + 0x7b40),*apuStack_150[0]);
      piVar13 = *(int **)(*(int *)(param_1 + 0xc) + 0x7b40);
      (**(code **)(*piVar13 + 4))(piVar13,0,apuStack_150[0][0x19]);
      piVar13 = *(int **)(*(int *)(param_1 + 0xc) + 0x7b40);
      (**(code **)(*piVar13 + 8))(piVar13,*apuStack_150[0]);
    }
    param_3 = (ulonglong)*apuStack_150[0];
    puVar12 = apuStack_150[0] + 2;
    *in_stack_000000c4 = 1;
    puVar16 = apuStack_150[0];
    goto LAB_82e4d4fc;
  }
  if (*(int *)(param_1 + 0x244) == 0) goto LAB_82e4d4fc;
  iVar5 = *(int *)(*(int *)(param_1 + 0x230) + 0x10);
  if ((iVar5 == 0) || (iVar5 + -1 < -1)) {
    return 0xffffffffffffff9c;
  }
  if (*(int *)(param_1 + 0x238) == iVar5) {
    *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
  }
  fn_82E914C0(*(int *)(param_1 + 0x230),apuStack_150,0xffffffffffffffff);
  if (apuStack_150[0] == (uint *)0x0) {
    return 0xffffffffffffff9c;
  }
  apuStack_150[0][0x18] = 0;
  fn_82E4BEE0(param_1,apuStack_150[0],param_3,puVar12,in_stack_000000b4);
  *(longlong *)(apuStack_150[0] + 0xc) = in_stack_00000058;
  apuStack_150[0][0xe] = param_6;
  apuStack_150[0][0xf] = in_stack_00000074;
  apuStack_150[0][0x10] = in_stack_0000009c;
  apuStack_150[0][0x11] = in_stack_00000064;
  apuStack_150[0][0x12] = in_stack_0000006c;
  apuStack_150[0][0x13] = in_stack_0000007c;
  apuStack_150[0][0x14] = in_stack_00000094;
  apuStack_150[0][0x15] = in_stack_000000a4;
  apuStack_150[0][0x16] = in_stack_000000ac;
  apuStack_150[0][0x17] = in_stack_000000b4;
  fn_82E4BE00(param_1,apuStack_150[0]);
  if (*(char *)(param_1 + 0x228) != '\0') {
    fn_82E4C7C0(param_1);
  }
  iVar5 = *(int *)(param_1 + 0xc);
  if ((iVar5 != 0) && (1 < *(byte *)(iVar5 + 0x7b30))) {
    uVar7 = (**(code **)**(undefined4 **)(iVar5 + 0x7b40))
                      (*(undefined4 **)(iVar5 + 0x7b40),*apuStack_150[0],0,0,0);
    apuStack_150[0][0x19] = uVar7;
  }
  if (*(int *)(param_1 + 0x248) < *(int *)(param_1 + 0x244) + -2) {
    *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + 1;
    *param_5 = 0;
    return 0;
  }
  if (*(char *)(param_1 + 0x228) != '\0') {
    fn_82E4BCD8(param_1,&uStack_140,0xffffffffffffffff);
  }
  if ((*(int *)(param_1 + 0x38) == 0) &&
     (iVar5 = fn_82E83368(*(undefined4 *)(param_1 + 0xc)), iVar5 == 0)) {
    lVar17 = (ulonglong)*(uint *)(param_1 + 0x238) - 1;
    fn_82E4BE68(param_1,apuStack_150,lVar17);
    in_stack_00000058 = *(longlong *)(apuStack_150[0] + 0xc);
  }
  else {
    lVar17 = (ulonglong)*(uint *)(param_1 + 0x238) - 2;
    if (*(int *)(param_1 + 0x24c) == 0) {
      fn_82E4BE68(param_1,apuStack_150,lVar17);
      in_stack_00000058 = *(longlong *)(apuStack_150[0] + 0xc);
      uVar4 = fn_82E4C550(param_1,CONCAT44(uStack_140,iStack_13c),
                            CONCAT62(CONCAT42(iStack_138,uStack_134),uStack_132),
                            CONCAT44(uStack_130,uStack_12c),(ulonglong)uStack_128 << 0x20);
      *(int *)(param_1 + 0x24c) = (int)uVar4;
      fn_82E82680(*(undefined4 *)(param_1 + 0xc),uVar4);
      if (*(int *)(param_1 + 0x38) == 0) {
        fn_82E4BE68(param_1,apuStack_150,(ulonglong)*(uint *)(param_1 + 0x238) - 1);
        lVar17 = 0;
        in_stack_00000058 = *(longlong *)(apuStack_150[0] + 0xc);
      }
      else {
        lVar17 = ((ulonglong)*(uint *)(param_1 + 0x238) - (ulonglong)*(uint *)(param_1 + 0x24c)) +
                 -2;
      }
      fn_82E4BE68(param_1,apuStack_150,lVar17);
      if (*(int *)(param_1 + 0x24c) < 1) goto LAB_82e4d3c8;
    }
    else {
      fn_82E4BE68(param_1,apuStack_150,lVar17);
      lVar17 = (ulonglong)*(uint *)(param_1 + 0x238) - 1;
      in_stack_00000058 = *(longlong *)(apuStack_150[0] + 0xc);
      fn_82E4BE68(param_1,apuStack_150,lVar17);
      if (0 < *(int *)(param_1 + 0x24c)) {
        *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + -1;
      }
    }
    fn_82E4BCD8(param_1,&uStack_140,lVar17);
  }
LAB_82e4d3c8:
  iVar5 = *(int *)(param_1 + 0xc);
  if ((iVar5 != 0) && (1 < *(byte *)(iVar5 + 0x7b30))) {
    fn_82ED2268(*(undefined4 *)(iVar5 + 0x7b40),*apuStack_150[0]);
    piVar13 = *(int **)(*(int *)(param_1 + 0xc) + 0x7b40);
    (**(code **)(*piVar13 + 4))(piVar13,0,apuStack_150[0][0x19]);
    if (0 < (int)lVar17) {
      uVar7 = (int)lVar17 + 1;
      lVar14 = 1;
      while( true ) {
        lVar17 = lVar17 + -1;
        bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 0x7b30);
        uVar11 = (uint)bVar1;
        if ((int)uVar7 <= (int)(uint)bVar1) {
          uVar11 = uVar7;
        }
        if ((int)uVar11 <= (int)lVar14) break;
        fn_82E4BE68(param_1,&iStack_118,lVar17);
        if (iStack_118 != 0) {
          piVar13 = *(int **)(*(int *)(param_1 + 0xc) + 0x7b40);
          (**(code **)(*piVar13 + 4))(piVar13,lVar14,*(undefined4 *)(iStack_118 + 100));
        }
        lVar14 = lVar14 + 1;
      }
    }
    piVar13 = *(int **)(*(int *)(param_1 + 0xc) + 0x7b40);
    (**(code **)(*piVar13 + 8))(piVar13,*apuStack_150[0]);
  }
  param_3 = (ulonglong)*apuStack_150[0];
  puVar12 = apuStack_150[0] + 2;
  puVar16 = apuStack_150[0];
LAB_82e4d4fc:
  if (in_stack_0000008c != (longlong *)0x0) {
    *in_stack_0000008c = in_stack_00000058 * 10000;
  }
  if (in_stack_000000cc != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x244) == 0) {
      *in_stack_000000cc = in_stack_00000058;
    }
    else {
      *in_stack_000000cc = *(longlong *)(puVar16 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x228) != '\0') {
    fn_82E8D670(*(undefined4 *)(param_1 + 0xc),CONCAT44(uStack_140,iStack_13c),
                    CONCAT62(CONCAT42(iStack_138,uStack_134),uStack_132),
                    CONCAT44(uStack_130,uStack_12c),(ulonglong)uStack_128 << 0x20);
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    lVar17 = (ulonglong)*(uint *)(param_1 + 0x238) - 2;
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar17 = (ulonglong)*(uint *)(param_1 + 0x238) - 3;
    }
    fn_82E4BE68(param_1,apuStack_150,lVar17);
    if (*(int *)(param_1 + 0x238) < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = *apuStack_150[0];
    }
    fn_82E867E8(*(undefined4 *)(param_1 + 0xc),uVar7);
  }
  puVar16 = puStack00000034;
  puVar3 = puStack0000002c;
  uVar4 = fn_82E90D68(*(undefined4 *)(param_1 + 0xc),puVar12,param_3,puStack0000002c,
                            puStack00000034,param_7,uStack0000004c,in_stack_00000054);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1d90);
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar5 = *(int *)(param_1 + 0x10);
    if ((iVar5 == 0x574d5633) || (iVar5 == 0x776d7633)) {
      if (*puVar16 < 2) {
        *puVar16 = 1;
        *puVar3 = 0;
      }
    }
    else if (((iVar5 == 0x574d5641) || (iVar5 == 0x776d7661)) && (*puVar16 == 0)) {
      *puVar16 = 1;
      *puVar3 = 0xf2;
    }
  }
  if (*puVar16 != 0) {
    iRam83248eb0 = iRam83248eb0 + 1;
  }
  if (((*(int *)(param_1 + 0x10) == 0x574d5641) || (*(int *)(param_1 + 0x10) == 0x776d7661)) ||
     (*(int *)(param_1 + 0x3c) != 0)) {
    if (*puVar16 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x210) != 0) {
      fn_82E4BB98(param_1,puVar3,puVar16);
    }
    uVar4 = fn_82E4C2D0(param_1,puVar3,puVar16);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  if (*puVar16 != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return 0;
}

