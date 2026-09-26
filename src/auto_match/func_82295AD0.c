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
extern int fn_82230300();
extern int fn_8223DFF0();
extern int fn_8223E0E0();
extern int fn_8223E1B8();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_82296328();
extern int fn_822964C0();
extern int fn_82296560();
extern int fn_822969C8();
extern int fn_82F640B0();
extern int fn_82F64258();
extern int fn_82F64268();
extern int fn_82F85C08();
extern unsigned int stack0x00000000;
extern unsigned int uStack_9c;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;


undefined8
fn_82295AD0(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,undefined8 param_5,
             ulonglong param_6,longlong param_7,longlong param_8)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar11;
  undefined4 *puVar12;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar13;
  undefined8 uVar10;
  char ****ppppcVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint uStack_d0;
  uint uStack_c0;
  uint uStack_bc;
  char ***apppcStack_b0 [5];
  uint uStack_9c;
  
  uVar5 = ZEXT48(&stack0x00000000);
  iVar3 = **(int **)(param_4 + 0x30);
  fn_8223F508(iVar3);
  piVar11 = (int *)fn_822969C8(uVar5 - 0xe8);
  if (iVar3 != 0) {
    puVar12 = (undefined4 *)fn_8223F5A0(iVar3);
    if (puVar12 != (undefined4 *)0x0) {
      (**(code **)*puVar12)(puVar12,1);
    }
  }
  (**(code **)(*piVar11 + 0xc))(uVar5 - 0xb0,piVar11);
  uVar6 = (**(code **)(*piVar11 + 8))(piVar11);
  fn_82230300(uVar5 - 0xd0,0,0);
  fn_82F85C08(uVar5 - 0xe8,uVar5 - 0xf0,1,uVar5 - 0xd8,param_2 + 8);
  if ((*(char *)param_6 == '+') || (lVar15 = 0, *(char *)param_6 == '-')) {
    lVar15 = 1;
  }
  puVar12 = (undefined4 *)fn_82F64258();
  uVar18 = (ulonglong)in_stack_0000005c;
  uVar1 = *(undefined1 *)*puVar12;
  uVar7 = fn_82F640B0(param_6,0x65,uVar18);
  uVar8 = fn_82F640B0(param_6,uVar1,uVar18);
  uVar17 = -(ulonglong)(uVar8 != 0) & (ulonglong)in_stack_00000054;
  ppppcVar14 = (char ****)apppcStack_b0[0];
  if (uStack_9c < 0x10) {
    ppppcVar14 = apppcStack_b0;
  }
  if (*(char *)ppppcVar14 != '\x7f') {
    ppppcVar14 = (char ****)apppcStack_b0[0];
    if (uStack_9c < 0x10) {
      ppppcVar14 = apppcStack_b0;
    }
    if ('\0' < *(char *)ppppcVar14) {
      fn_8223DFF0(uVar5 - 0xd0,param_6,uVar18);
      if ((uVar7 & 0xffffffff) == 0) {
        fn_8223E0E0(uVar5 - 0xd0,uVar17,0x30);
      }
      else {
        if ((uVar8 & 0xffffffff) == 0) {
          fn_8223E0E0(uVar5 - 0xd0,param_7,0x30);
          param_7 = 0;
        }
        fn_8223E1B8(uVar5 - 0xd0,uVar7 - param_6,uVar17,0x30);
      }
      if ((uVar8 & 0xffffffff) == 0) {
        fn_8223E0E0(uVar5 - 0xd0,param_7,0x30);
      }
      else {
        fn_8223E1B8(uVar5 - 0xd0,(uVar8 - param_6) + 1,param_8,0x30);
        fn_8223E1B8(uVar5 - 0xd0,uVar8 - param_6,param_7,0x30);
        param_8 = 0;
      }
      param_7 = 0;
      uVar7 = ZEXT48(apppcStack_b0[0]);
      if (uStack_9c < 0x10) {
        uVar7 = uVar5 - 0xb0;
      }
      uVar8 = (ulonglong)uStack_d0;
      if (uStack_bc < 0x10) {
        uVar8 = uVar5 - 0xd0;
      }
      lVar9 = fn_82F64268(uVar8,uVar5 - 0xe0);
      while( true ) {
        cVar2 = *(char *)uVar7;
        if (((cVar2 == '\x7f') || (cVar2 < '\x01')) ||
           ((lVar9 - lVar15 & 0xffffffffU) <= ((longlong)cVar2 & 0xffffffffU))) break;
        lVar9 = lVar9 - cVar2;
        fn_8223E1B8(uVar5 - 0xd0,lVar9,1,0);
        if ('\0' < ((char *)uVar7)[1]) {
          uVar7 = uVar7 + 1;
        }
      }
      param_6 = (ulonglong)uStack_d0;
      if (uStack_bc < 0x10) {
        param_6 = uVar5 - 0xd0;
      }
      uVar18 = (ulonglong)uStack_c0;
      uVar17 = 0;
    }
  }
  uVar7 = param_7 + param_8 + uVar17 + uVar18;
  if (((longlong)*(ulonglong *)(param_4 + 0x20) < 1) ||
     (uVar8 = *(ulonglong *)(param_4 + 0x20) & 0xffffffff, lVar9 = uVar8 - uVar7,
     uVar8 <= (uVar7 & 0xffffffff))) {
    lVar9 = 0;
  }
  uVar4 = *(uint *)(param_4 + 0x14) & 0x1c0;
  if (uVar4 != 0x40) {
    if ((uVar4 == 0x100) && (lVar15 != 0)) {
      puVar13 = (undefined8 *)fn_822964C0(uVar5 - 0xd8,param_2,param_3,param_6,1);
      param_3 = *puVar13;
      param_6 = param_6 + 1;
      uVar18 = uVar18 - 1;
    }
    puVar13 = (undefined8 *)fn_82296328(uVar5 - 0xd8,param_3,param_5,lVar9);
    param_3 = *puVar13;
    lVar9 = 0;
  }
  uVar7 = fn_82F640B0(param_6,uVar1,uVar18);
  if ((uVar7 & 0xffffffff) != 0) {
    lVar15 = (uVar7 - param_6) + 1;
    puVar13 = (undefined8 *)
              fn_82296560(uVar5 - 0xd8,param_2,param_3,param_6,uVar7 - param_6,uVar6);
    puVar13 = (undefined8 *)fn_82296328(uVar5 - 0xe8,*puVar13,0,param_7);
    uVar16 = *puVar13;
    uVar10 = (**(code **)(*piVar11 + 4))(piVar11);
    puVar13 = (undefined8 *)fn_82296328(uVar5 - 0xd8,uVar16,uVar10,1);
    puVar13 = (undefined8 *)fn_82296328(uVar5 - 0xe8,*puVar13,0,param_8);
    param_3 = *puVar13;
    param_6 = lVar15 + param_6;
    uVar18 = uVar18 - lVar15;
  }
  uVar7 = fn_82F640B0(param_6,0x65,uVar18);
  if ((uVar7 & 0xffffffff) != 0) {
    lVar15 = (uVar7 - param_6) + 1;
    puVar13 = (undefined8 *)
              fn_82296560(uVar5 - 0xd8,param_2,param_3,param_6,uVar7 - param_6,uVar6);
    puVar13 = (undefined8 *)fn_82296328(uVar5 - 0xe8,*puVar13,0,uVar17);
    uVar17 = 0;
    if ((*(uint *)(param_4 + 0x14) & 4) == 0) {
      uVar10 = 0xffffffff82197000;
    }
    else {
      uVar10 = 0xffffffff82196ffc;
    }
    puVar13 = (undefined8 *)fn_822964C0(uVar5 - 0xd8,param_2,*puVar13,uVar10,1);
    param_3 = *puVar13;
    param_6 = lVar15 + param_6;
    uVar18 = uVar18 - lVar15;
  }
  puVar13 = (undefined8 *)fn_82296560(uVar5 - 0xd8,param_2,param_3,param_6,uVar18,uVar6);
  puVar13 = (undefined8 *)fn_82296328(uVar5 - 0xe8,*puVar13,0,uVar17);
  uVar6 = *puVar13;
  *(undefined8 *)(param_4 + 0x20) = 0;
  fn_82296328(param_1,uVar6,param_5,lVar9);
  fn_82230300(uVar5 - 0xd0,1,0);
  fn_82230300(uVar5 - 0xb0,1,0);
  return param_1;
}

