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
extern int fn_8248BC38();
extern int fn_8265CA20();
extern unsigned int lbl_821BEA64;


void fn_8248BAC0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar5;
  int iVar6;
  ulonglong uVar4;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  puVar7 = param_1 + 6;
  *param_1 = &lbl_821BEA64;
  uVar3 = param_1[7];
  uVar5 = param_1[6];
  while (uVar5 != uVar3) {
    if ((ulonglong)*puVar7 != (ulonglong)(uint)param_1[7]) {
      fn_8248BC38((ulonglong)(uint)param_1[7] - 0x68,0);
      param_1[7] = param_1[7] + -0x68;
    }
    uVar3 = param_1[7];
    uVar5 = *puVar7;
  }
  piVar9 = param_1 + 0xc;
  iVar1 = param_1[0xd];
  iVar6 = param_1[0xc];
  while (iVar6 != iVar1) {
    iVar6 = param_1[0xd];
    if (*piVar9 != iVar6) {
      (*(code *)**(undefined4 **)(iVar6 + -0x20))(iVar6 + -0x20,0);
      param_1[0xd] = param_1[0xd] + -0x20;
    }
    iVar1 = param_1[0xd];
    iVar6 = *piVar9;
  }
  if (param_1[5] != 0) {
    fn_8248BC38(param_1[5],1);
  }
  param_1[5] = 0;
  puVar8 = (undefined4 *)*piVar9;
  if (puVar8 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[0xd];
    for (; puVar8 != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(puVar8,0);
    }
    fn_8265CA20(*piVar9);
  }
  param_1[0xe] = 0;
  *piVar9 = 0;
  param_1[0xd] = 0;
  uVar4 = (ulonglong)*puVar7;
  if (uVar4 != 0) {
    uVar5 = param_1[7];
    if (uVar4 != uVar5) {
      do {
        fn_8248BC38(uVar4,0);
        uVar4 = uVar4 + 0x68;
      } while ((uVar4 & 0xffffffff) != (ulonglong)uVar5);
    }
    fn_8265CA20(*puVar7);
  }
  *puVar7 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

