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
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_822D7940();
extern int fn_823B4970();
extern int fn_8265C9E0();
extern int fn_828DFF48();
extern int fn_828E8F80();
extern int fn_828E9D28();
extern unsigned int iStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_828E5D98(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar3;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  iVar4 = fn_8265C9E0(0x28);
  iVar7 = 0;
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x18) = 0;
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x14) = 0;
    fn_828E9D28(iVar4,0,0);
    iVar7 = iVar4;
  }
  puVar5 = (undefined4 *)fn_822D7940(auStack_28,iVar7);
  uVar1 = puVar5[1];
  puVar5[1] = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  uVar1 = *puVar5;
  *puVar5 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar3 = fn_828E8F80();
  fn_828DFF48(&uStack_30,param_2,uVar1,uVar3);
  if ((ulonglong)uStack_2c != 0) {
    lVar8 = (ulonglong)uStack_2c + 4;
    do {
      puVar9 = (uint *)lVar8;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,lVar8);
        *puVar9 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  iVar7 = *(int *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uStack_2c;
  *(undefined4 *)(param_1 + 0x80) = uStack_30;
  if (iVar7 != 0) {
    fn_822315A0();
  }
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x80) + 0x1c))();
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  uVar3 = (**(code **)(*piVar6 + 4))(piVar6,param_2);
  fn_823B4970(uVar1,param_2,uVar3,0);
  if (uStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

