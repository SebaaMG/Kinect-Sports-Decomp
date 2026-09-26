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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_826F5070();
extern int fn_826F7480();
extern int fn_826FC880();
extern unsigned int lbl_8200DDD4;
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_826FEF00(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar7;
  ulonglong uVar6;
  undefined4 uVar8;
  int *piVar9;
  uint *puVar10;
  char in_RESERVE;
  byte bVar11;
  uint auStack_40 [16];
  
  param_1[3] = param_3;
  uVar8 = 0;
  param_1[4] = (int)param_2;
  param_1[1] = 0;
  *param_1 = &lbl_8200DDD4;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar4 = fn_8267B890(lbl_831E7E64,0x54,0);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    iVar2 = param_1[3];
    uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x6c) + 0x14);
    uVar5 = (*(code *)**(undefined4 **)(iVar2 + 8))(iVar2 + 8);
    uVar7 = fn_826F5070(lVar4,uVar7,uVar5,0);
  }
  if (param_1[6] != 0) {
    fn_8267C4F0();
  }
  param_1[6] = uVar7;
  fn_8268B330(auStack_40);
  fn_826F7480(param_1[3],auStack_40);
  uVar6 = fn_8267B890(lbl_831E7E64,0x2c,0);
  bVar1 = (uVar6 & 0xffffffff) == 0;
  bVar11 = bVar1 << 1;
  if (!bVar1) {
    uVar8 = fn_826FC880(uVar6,param_1[6],auStack_40,param_2 + 0xc);
  }
  if (param_1[5] != 0) {
    fn_8267C4F0();
  }
  param_1[5] = uVar8;
  piVar9 = (int *)(**(code **)(*(int *)(param_1[3] + 8) + 0xc))(param_1[3] + 8,0x17);
  (**(code **)(*piVar9 + 4))(piVar9,param_1[5]);
  fn_8267C4F0(piVar9);
  lVar4 = ((ulonglong)auStack_40[0] & 0xfffffffc) + 4;
  do {
    puVar10 = (uint *)lVar4;
    uVar6 = (ulonglong)*puVar10;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar6 - 1,0,lVar4);
      *puVar10 = uVar3;
      bVar11 = 2;
    }
  } while (!(bool)(bVar11 >> 1 & 1));
  if (uVar6 == 1) {
    fn_8267BE38();
  }
  return param_1;
}

