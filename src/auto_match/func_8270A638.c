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
extern int fn_8267BE38();
extern int fn_8270A1E0();
extern int fn_8270A5C8();
extern unsigned int iStack_a0;
extern unsigned int iStack_ac;
extern unsigned int uStack0000002c;
extern unsigned int uStack0000003c;
extern unsigned int uStack0000004c;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


/* WARNING: Removing unreachable block (ram,0x8270a7bc) */

void fn_8270A638(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                  longlong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uStack0000002c;
  uint uStack0000003c;
  uint uStack0000004c;
  int in_stack_00000054;
  int in_stack_0000005c;
  code *in_stack_00000064;
  uint *puStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b0;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  int iStack_a0;
  
  uStack0000003c = (uint)param_6;
  puStack_c0 = (uint *)0x0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack0000004c = (uint)param_8;
  uStack0000002c = param_4;
  fn_8270A5C8(&puStack_c0,param_2,0);
  uVar2 = (param_7 & 0x1ffffff) << 7;
  iVar12 = (int)param_2;
  lVar1 = (longlong)((int)uVar2 / iVar12);
  trapWord(6,param_2,0);
  trapWord(5,param_2 & ~(((uVar2 & 0x7fffffff) << 1 | (param_7 & 0x1ffffff) >> 0x18) - 1),0xffff);
  fn_8270A1E0(&uStack_b0,lVar1,(param_7 & 0xffffff) * 0x100 + lVar1,param_2);
  if (0 < iVar12) {
    uVar4 = (ulonglong)uStack_a4;
    uVar6 = iStack_a0 - 0x80;
    uVar2 = param_2;
    puVar3 = puStack_c0;
    do {
      *puVar3 = uVar6;
      uVar4 = uStack_a8 + uVar4;
      uVar6 = uVar6 + iStack_ac;
      if (0 < (longlong)uVar4) {
        uVar6 = uVar6 + 1;
        uVar4 = uVar4 - uStack_b0;
      }
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar2 = (param_8 & 0x1ffffff) << 7;
  lVar1 = (longlong)((int)uVar2 / (int)param_3);
  trapWord(6,param_3,0);
  trapWord(5,param_3 & ~(((uVar2 & 0x7fffffff) << 1 | (param_8 & 0x1ffffff) >> 0x18) - 1),0xffff);
  fn_8270A1E0(&uStack_b0,lVar1,(param_8 & 0xffffff) * 0x100 + lVar1,param_3);
  if ((int)param_3 < 1) {
LAB_8270a8e4:
    fn_8267BE38(puStack_c0);
    return;
  }
  iVar8 = (int)param_7 + -1;
  lVar1 = (longlong)iVar8 * (longlong)in_stack_0000005c;
  uVar2 = (ulonglong)uStack_a4;
  iVar9 = iStack_a0;
  do {
    iVar7 = (int)(iVar9 - 0x80U) >> 8;
    uVar6 = iVar9 - 0x80U & 0xff;
    if (-1 < iVar7) {
      param_6 = (longlong)iVar7 * (longlong)in_stack_00000054 + param_6;
    }
    iVar7 = iVar7 + 1;
    if ((int)param_8 <= iVar7) {
      iVar7 = (int)param_8 + -1;
    }
    lVar10 = (longlong)iVar7 * (longlong)in_stack_00000054 + (ulonglong)uStack0000003c;
    uVar4 = 0;
    lVar13 = param_1;
    puVar3 = puStack_c0;
    if (0 < iVar12) {
      do {
        iVar7 = (int)*puVar3 >> 8;
        if (iVar8 <= iVar7) break;
        lVar5 = (longlong)(iVar7 + 1) * (longlong)in_stack_0000005c;
        (*in_stack_00000064)
                  (lVar13,(longlong)iVar7 * (longlong)in_stack_0000005c + param_6,lVar5 + param_6,
                   (longlong)iVar7 * (longlong)in_stack_0000005c + lVar10,lVar5 + lVar10,
                   *puVar3 & 0xff,uVar6);
        uVar4 = uVar4 + 1;
        lVar13 = lVar13 + param_5;
        puVar3 = puVar3 + 1;
      } while ((int)uVar4 < iVar12);
    }
    lVar5 = lVar1 + param_6;
    lVar10 = lVar1 + lVar10;
    if ((int)uVar4 < iVar12) {
      lVar14 = param_2 - uVar4;
      lVar11 = (uVar4 & 0x3fffffff) * 4 + ZEXT48(puStack_c0) + -4;
      do {
        lVar11 = lVar11 + 4;
        (*in_stack_00000064)(lVar13,lVar5,lVar5,lVar10,lVar10,*(uint *)lVar11 & 0xff,uVar6);
        lVar14 = lVar14 + -1;
        lVar13 = lVar13 + param_5;
      } while (lVar14 != 0);
    }
    uVar2 = uStack_a8 + uVar2;
    iVar9 = iStack_ac + iVar9;
    if (0 < (longlong)uVar2) {
      iVar9 = iVar9 + 1;
      uVar2 = uVar2 - uStack_b0;
    }
    param_3 = param_3 - 1;
    param_1 = param_1 + (ulonglong)uStack0000002c;
    if (param_3 == 0) goto LAB_8270a8e4;
    param_8 = (ulonglong)uStack0000004c;
    param_6 = (ulonglong)uStack0000003c;
  } while( true );
}

