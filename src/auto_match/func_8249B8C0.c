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
extern int fn_82381BC0();
extern unsigned int lbl_82191AF0;
extern unsigned int lbl_82192734;
extern unsigned int lbl_8219297C;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821955DC;
extern unsigned int lbl_821955E0;
extern unsigned int lbl_821955E4;
extern unsigned int lbl_821955E8;
extern unsigned int lbl_821955EC;
extern unsigned int lbl_821CA460;


void fn_8249B8C0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *apuStack_20 [2];
  
  iVar1 = *(int *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x38);
  apuStack_20[0] = (undefined4 *)*puVar2;
  while (apuStack_20[0] != puVar2) {
    (**(code **)(*(int *)apuStack_20[0][4] + 8))
              ((int *)apuStack_20[0][4],*(undefined4 *)(param_1 + 0xb0));
    fn_82381BC0(apuStack_20);
    puVar2 = *(undefined4 **)(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x5c) = 0;
  }
  uVar11 = lbl_821CA460;
  uVar10 = lbl_821955EC;
  uVar9 = lbl_821955E8;
  uVar8 = lbl_821955E4;
  uVar7 = lbl_821955E0;
  uVar6 = lbl_821955DC;
  uVar5 = lbl_82193B00;
  uVar4 = lbl_8219297C;
  uVar3 = lbl_82191AF0;
  puVar2 = *(undefined4 **)(param_1 + 0xec);
  *puVar2 = lbl_82192734;
  puVar2[1] = uVar6;
  puVar2[2] = uVar11;
  puVar2[3] = uVar7;
  puVar2[4] = uVar3;
  puVar2[5] = uVar6;
  puVar2[6] = uVar5;
  puVar2[7] = uVar7;
  puVar2[8] = uVar8;
  puVar2[9] = uVar9;
  puVar2[10] = uVar4;
  puVar2[0xb] = uVar10;
  return;
}

