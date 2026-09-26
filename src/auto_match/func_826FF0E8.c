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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_826F5070();
extern int fn_826F6D78();
extern int fn_826F7480();
extern int fn_826FCA60();
extern unsigned int lbl_8200DDE0;
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_826FF0E8(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  ulonglong uVar9;
  char in_RESERVE;
  byte bVar10;
  uint auStack_60 [4];
  undefined1 auStack_50 [80];
  
  param_1[3] = param_3;
  uVar6 = 0;
  param_1[4] = (int)param_2;
  param_1[1] = 0;
  *param_1 = &lbl_8200DDE0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar3 = fn_8267B890(lbl_831E7E64,0x54,0);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    iVar1 = param_1[3];
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x14);
    uVar4 = (*(code *)**(undefined4 **)(iVar1 + 8))(iVar1 + 8);
    uVar5 = fn_826F5070(lVar3,uVar5,uVar4,0);
  }
  if (param_1[6] != 0) {
    fn_8267C4F0();
  }
  param_1[6] = uVar5;
  fn_8268B330(auStack_60);
  fn_826F7480(param_1[3],auStack_60);
  lVar3 = fn_8267B890(lbl_831E7E64,0x24,0);
  bVar10 = (lVar3 == 0) << 1;
  if (lVar3 != 0) {
    uVar6 = param_1[6];
    uVar4 = fn_826F6D78(auStack_50,param_2 + 0x48);
    uVar6 = fn_826FCA60(lVar3,uVar6,auStack_60,param_2 + 0xc,uVar4);
  }
  if (param_1[5] != 0) {
    fn_8267C4F0();
  }
  param_1[5] = uVar6;
  piVar7 = (int *)(**(code **)(*(int *)(param_1[3] + 8) + 0xc))(param_1[3] + 8,0x17);
  (**(code **)(*piVar7 + 4))(piVar7,param_1[5]);
  fn_8267C4F0(piVar7);
  lVar3 = ((ulonglong)auStack_60[0] & 0xfffffffc) + 4;
  do {
    puVar8 = (uint *)lVar3;
    uVar9 = (ulonglong)*puVar8;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar9 - 1,0,lVar3);
      *puVar8 = uVar2;
      bVar10 = 2;
    }
  } while (!(bool)(bVar10 >> 1 & 1));
  if (uVar9 == 1) {
    fn_8267BE38();
  }
  return param_1;
}

