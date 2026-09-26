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
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_8223C610();
extern int fn_82365BD8();
extern int fn_823B4800();
extern int fn_823B4900();
extern int fn_823B4970();
extern int fn_823BC468();
extern int fn_828E9D60();
extern int fn_828E9D90();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int stack0x00000000;


void fn_823B4558(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar8;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piStack_60;
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  
  uVar4 = fn_823B4900(param_2,0x1e,0,0);
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  puVar8 = (undefined4 *)fn_823B4800(&stack0x00000000 + -0x58);
  uVar9 = 0;
  uVar10 = 0;
  if ((undefined4 *)(&stack0x00000000 + -0x60) != puVar8) {
    uVar10 = puVar8[1];
    puVar8[1] = 0;
    uVar9 = *puVar8;
    *puVar8 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x84) = uVar10;
  *(undefined4 *)(param_1 + 0x80) = uVar9;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  lVar5 = fn_828E9D90(param_2);
  iVar2 = *(int *)(iVar1 + 0x308);
  uVar10 = *(undefined4 *)(iVar2 + 0x14);
  uVar3 = *(uint *)(iVar2 + 0x10);
  uVar9 = *(undefined4 *)(iVar2 + 0x18);
  uVar6 = fn_8223C610(param_2,uVar10,0,0);
  while ((uVar6 & 0xffffffff) != (ulonglong)uVar3) {
    fn_8223C610(param_2,uVar9,0,0);
    uVar4 = fn_823BC468(*(undefined4 *)(iVar1 + 0x308),uVar6);
    fn_82365BD8(&stack0x00000000 + -0x60,uVar4);
    (**(code **)(*piStack_60 + 4))(piStack_60,param_2,0);
    uVar6 = fn_8223C610(param_2,uVar10,0,0);
    if (iStack_5c != 0) {
      fn_822315A0(iStack_5c);
    }
  }
  lVar7 = fn_828E9D90();
  fn_828E9D60(param_2,lVar5);
  fn_823B4970(*(undefined4 *)(param_1 + 0x80),param_2,lVar7 - lVar5,0);
  return;
}

