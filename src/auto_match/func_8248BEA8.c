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
extern unsigned int *auStack_30;
extern int fn_8248BC38();
extern int fn_8248C5E0();
extern int fn_8248DE88();
extern int fn_8265C9E0();
extern unsigned int lbl_821CC160;


void fn_8248BEA8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined1 auStack_30 [48];
  
  iVar2 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar2 == *(int *)(param_1 + 0x1c)) break;
    fn_8248DE88(iVar2);
    piVar10 = (int *)fn_8248C5E0(auStack_30,param_1 + 0x18,iVar2);
    iVar2 = *piVar10;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_8248BC38(*(int *)(param_1 + 0x14),1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar11 = (undefined4 *)fn_8265C9E0(0x68);
  uVar9 = lbl_821CC160;
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x6c);
    uVar1 = *(undefined4 *)(param_1 + 0x70);
    uVar4 = *(undefined4 *)(param_1 + 0x68);
    uVar5 = *(undefined4 *)(param_1 + 100);
    uVar6 = *(undefined4 *)(param_1 + 0x7c);
    uVar7 = *(undefined4 *)(param_1 + 0x78);
    uVar8 = *(undefined4 *)(param_1 + 0x74);
    *puVar11 = *(undefined4 *)(param_1 + 0x60);
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[0xc] = uVar9;
    puVar11[0xf] = uVar9;
    puVar11[6] = uVar5;
    puVar11[0x10] = uVar1;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[0xb] = 0;
    puVar11[0xd] = uVar4;
    puVar11[0xe] = uVar3;
    puVar11[0x12] = 1;
    puVar11[0x13] = 0;
    puVar11[0x14] = 0;
    puVar11[0x15] = 0;
    puVar11[0x17] = uVar8;
    puVar11[0x18] = uVar7;
    puVar11[0x19] = uVar6;
  }
  *(undefined4 **)(param_1 + 0x14) = puVar11;
  return;
}

