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
extern int fn_82A47CE0();
extern int fn_82A48578();
extern int fn_82A4F4E0();


void fn_82A48EE8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x6c);
      ((puVar6 = (undefined4 *)0x0, piVar11 = (int *)0x0, puVar1 != (undefined4 *)0x0 &&
       (puVar6 = puVar1, piVar11 = (int *)*puVar1, *(int *)*puVar1 != param_2)) &&
      (puVar6 = (undefined4 *)0x0, piVar11 = (int *)0x0, puVar1 != (undefined4 *)0x0));
      puVar1 = (undefined4 *)puVar1[1]) {
  }
  puVar1 = *(undefined4 **)(param_1 + 0xe8);
  piVar4 = (int *)0x0;
  piVar8 = (int *)0x0;
  puVar10 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar9 = puVar10;
    piVar3 = piVar4;
    do {
      piVar2 = (int *)*puVar1;
      puVar10 = puVar1;
      piVar4 = piVar2;
      if ((piVar2[1] + *piVar2 != *piVar11) &&
         (puVar10 = puVar9, piVar4 = piVar3, *piVar2 == piVar11[1] + *piVar11)) {
        puVar7 = puVar1;
        piVar8 = piVar2;
      }
    } while ((puVar1 != (undefined4 *)0x0) &&
            (puVar1 = (undefined4 *)puVar1[1], puVar9 = puVar10, piVar3 = piVar4,
            puVar1 != (undefined4 *)0x0));
  }
  iVar12 = *piVar11;
  uVar13 = piVar11[1];
  if (piVar4 != (int *)0x0) {
    iVar12 = *piVar4;
    uVar13 = piVar4[1] + uVar13;
    fn_82A4F4E0();
    fn_82A47CE0(param_1 + 0x7c,puVar10);
  }
  if (piVar8 != (int *)0x0) {
    uVar13 = piVar8[1] + uVar13;
    fn_82A4F4E0(piVar8);
    fn_82A47CE0(param_1 + 0x7c,puVar7);
  }
  *piVar11 = iVar12;
  piVar11[1] = uVar13;
  fn_82A47CE0(param_1,puVar6);
  fn_82A48578(param_1 + 0x7c,piVar11);
  uVar5 = *(uint *)(param_1 + 0x104);
  if (*(uint *)(param_1 + 0x104) <= uVar13) {
    uVar5 = uVar13;
  }
  *(uint *)(param_1 + 0x104) = uVar5;
  return;
}

