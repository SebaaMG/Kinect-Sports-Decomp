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
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82B841E8();
extern int fn_82B84350();


void fn_82B1E2A0(int param_1,uint param_2,uint param_3,ulonglong param_4)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar5;
  uint uVar6;
  undefined8 uVar4;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar11;
  ulonglong uVar10;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  
  uVar16 = (ulonglong)(*(uint *)(param_3 + 8) >> 0xe) & 7;
  uVar14 = uVar16 - param_4;
  uVar5 = fn_82B841E8(param_1,*(undefined4 *)(param_3 + 0x1c),0,0x71,0,uVar14);
  uVar13 = uVar5 & 0xfffffffe;
  puVar11 = (uint *)((param_3 & 0xfffffffe) + 0x24);
  *(uint *)(uVar13 + 0x24) = *puVar11;
  *(uint *)(*puVar11 & 0xfffffffe) = uVar13;
  *(uint *)(uVar13 + 0x28) = param_3 & 0xfffffffe;
  *puVar11 = uVar13 + 0x28;
  *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) | 0x800000;
  uVar6 = fn_82B84350(param_1,*(undefined4 *)(param_3 + 0x1c),0,uVar16);
  iVar8 = *(int *)(param_3 + 0x1c);
  uVar13 = uVar6 & 0xfffffffe;
  uVar16 = 0;
  *(undefined4 *)(uVar13 + 0x28) = *(undefined4 *)(iVar8 + 0x1c);
  *(uint *)((*(uint *)(iVar8 + 0x1c) & 0xfffffffe) + 0x24) = uVar13 + 0x28;
  *(uint *)(uVar13 + 0x24) = iVar8 + 0x1cU | 1;
  *(uint *)(iVar8 + 0x1c) = uVar13;
  if ((param_4 & 0xffffffff) != 0) {
    puVar15 = (undefined4 *)(uVar6 + 0x28);
    do {
      uVar4 = fn_82AD18C0(param_1,param_3,uVar16);
      uVar7 = fn_82AD1978(uVar6,uVar4);
      uVar16 = uVar16 + 1;
      puVar15 = puVar15 + 1;
      *puVar15 = uVar7;
    } while ((uVar16 & 0xffffffff) < (param_4 & 0xffffffff));
  }
  uVar16 = 0;
  if ((uVar14 & 0xffffffff) != 0) {
    do {
      uVar4 = fn_82AD18C0(param_1,uVar5,uVar16);
      uVar7 = fn_82AD1978(uVar6,uVar4);
      uVar10 = param_4 + 0xb + uVar16;
      uVar16 = uVar16 + 1;
      *(undefined4 *)((int)((uVar10 & 0xffffffff) << 2) + uVar6) = uVar7;
    } while ((uVar16 & 0xffffffff) < (uVar14 & 0xffffffff));
  }
  puVar11 = (uint *)(param_3 + 4);
  while (puVar1 = (uint *)*puVar11, puVar1 != (uint *)0x0) {
    uVar13 = puVar1[4];
    if ((uVar13 != 0) && (uVar13 != uVar6)) {
      if ((*(uint *)(uVar13 + 8) & 0x3f80) == 0x3a80) {
        iVar8 = fn_82ABDD90(param_1,0x75,0,0);
        uVar2 = *(uint *)(iVar8 + (uVar13 - 0x10)) & 7;
        if ((uVar2 < 4) || (bVar3 = true, 6 < uVar2)) {
          bVar3 = false;
        }
        if (!bVar3) {
          *puVar1 = (uint)((param_4 & 0xffffffff) << 0x19) & 0xe000000 | *puVar1 & 0xf1ffffff;
          puVar9 = (uint *)fn_82AD17B0(param_1,uVar5);
          *puVar9 = (uint)((uVar14 & 0xffffffff) << 0x19) & 0xe000000 | *puVar9 & 0xf1ffffff;
          fn_82AD1270(puVar9,0);
          *puVar9 = *puVar9 & 0xffffe01f | 0x1c80;
          fn_82AD1978(uVar13,puVar9);
          goto LAB_82b1e4fc;
        }
      }
      puVar12 = (uint *)(puVar1[3] + 4);
      for (puVar9 = (uint *)*puVar12; puVar9 != puVar1; puVar9 = (uint *)puVar9[2]) {
        puVar12 = puVar9 + 2;
      }
      *puVar12 = puVar1[2];
      puVar1[2] = *(uint *)(uVar6 + 4);
      *(uint **)(uVar6 + 4) = puVar1;
      puVar1[3] = uVar6;
    }
LAB_82b1e4fc:
    if ((uint *)*puVar11 == puVar1) {
      puVar11 = puVar1 + 2;
    }
  }
  uVar13 = 0;
  *(uint *)(param_3 + 8) =
       (uint)((param_4 & 0xffffffff) << 0xe) & 0x1c000 | *(uint *)(param_3 + 8) & 0xfffe3fff;
  *(short *)(uVar5 + 0xe) = (short)*(undefined4 *)(param_3 + 0xc);
  if (*(int *)(param_1 + 0x218) != 0) {
    puVar11 = (uint *)(param_1 + 0x160);
    do {
      if (*puVar11 == param_3) {
        iVar8 = (uVar13 + 0x1d) * 0xc;
        *(uint *)(iVar8 + param_1) =
             ((1 << ((uint)param_4 & 0x3f)) + -1) * 0x200 & 0x1e00U |
             *(uint *)(iVar8 + param_1) & 0xffffe1ff;
        break;
      }
      uVar13 = uVar13 + 1;
      puVar11 = puVar11 + 3;
    } while (uVar13 < *(uint *)(param_1 + 0x218));
  }
  if (*(int *)(param_1 + 0x218) != 0x10) {
    iVar8 = (*(int *)(param_1 + 0x218) + 0x1d) * 0xc;
    *(uint *)(iVar8 + param_1) = param_2 & 0x1f | *(uint *)(iVar8 + param_1) & 0xffffffe0;
    iVar8 = (*(int *)(param_1 + 0x218) + 0x1d) * 0xc;
    *(uint *)(iVar8 + param_1) = *(uint *)(iVar8 + param_1) & 0xfffffe1f | 0x20;
    *(uint *)(*(int *)(param_1 + 0x218) * 0xc + param_1 + 0x160) = uVar5;
    iVar8 = (*(int *)(param_1 + 0x218) + 0x1d) * 0xc;
    *(uint *)(iVar8 + param_1) =
         ((1 << ((uint)uVar14 & 0x3f)) + -1) * 0x200 & 0x1e00U |
         *(uint *)(iVar8 + param_1) & 0xffffe1ff;
    *(char **)(*(int *)(param_1 + 0x218) * 0xc + param_1 + 0x158) = "<tessellator input>";
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

