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
extern unsigned int *auStack_90;
extern unsigned int *auStack_c0;
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8228ED20();
extern int fn_822A8BC0();
extern int fn_822A8D30();
extern int fn_8251FA58();
extern int fn_82536CC8();
extern int fn_8265CA20();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821AC454;
extern unsigned int lbl_8327F874;


/* WARNING: Removing unreachable block (ram,0x822a9220) */
/* WARNING: Removing unreachable block (ram,0x822a9224) */
/* WARNING: Removing unreachable block (ram,0x822a9240) */
/* WARNING: Removing unreachable block (ram,0x822a9250) */
/* WARNING: Removing unreachable block (ram,0x822a9258) */
/* WARNING: Removing unreachable block (ram,0x822a926c) */
/* WARNING: Removing unreachable block (ram,0x822a9270) */

void fn_822A91E0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [144];
  
  piVar6 = param_1 + 0x23;
  *param_1 = &lbl_821AC454;
  piVar1 = (int *)param_1[0x23];
  if (piVar1 != (int *)param_1[0x24]) {
    piVar2 = (int *)param_1[0x24];
    if (piVar1 != piVar2) {
      piVar8 = piVar1 + 1;
      do {
        if (*piVar8 != 0) {
          fn_822315A0();
        }
        piVar5 = piVar8 + 3;
        piVar8 = piVar8 + 4;
      } while (piVar5 != piVar2);
    }
    param_1[0x24] = piVar1;
  }
  if (param_1[0xb] != 0) {
    fn_8228ED20();
  }
  if (param_1[10] != 0) {
    fn_8251FA58();
    param_1[10] = 0;
  }
  if (param_1[6] != 0) {
    fn_828647F0(auStack_c0,*(undefined4 *)(param_1[1] + 0x84c));
    puVar7 = param_1 + 2;
    if (0xf < (uint)param_1[7]) {
      puVar7 = (undefined4 *)*puVar7;
    }
    uVar9 = (ulonglong)lbl_8327F874;
    if (uVar9 == 0) {
      uVar9 = fn_82536CC8();
      lbl_8327F874 = (uint)uVar9;
    }
    uVar4 = fn_82864988(auStack_90,puVar7);
    uVar9 = fn_822A8D30(uVar9,auStack_c0);
    if ((uVar9 & 0xffffffff) != 0) {
      fn_822A8BC0(uVar9,uVar4);
    }
    fn_82864898(auStack_90);
    fn_82864898(auStack_c0);
  }
  iVar10 = param_1[0x27];
  if (iVar10 != 0) {
    for (; iVar10 != param_1[0x28]; iVar10 = iVar10 + 8) {
    }
    fn_8265CA20();
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  iVar10 = *piVar6;
  if (iVar10 != 0) {
    iVar3 = param_1[0x24];
    for (; iVar10 != iVar3; iVar10 = iVar10 + 0x10) {
      if (*(int *)(iVar10 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(*piVar6);
  }
  *piVar6 = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  fn_82230300(param_1 + 0x1c,1,0);
  fn_82230300(param_1 + 0x11,1,0);
  puVar7 = (undefined4 *)param_1[0xb];
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  fn_82230300(param_1 + 2,1,0);
  return;
}

