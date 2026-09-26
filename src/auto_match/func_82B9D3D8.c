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
extern int fn_82AB15D0();
extern int fn_82AB71F0();
extern int fn_82B69A00();
extern unsigned int lbl_820DD670;
extern unsigned int lbl_820DD8B0;
extern unsigned int lbl_8316E610;
extern unsigned int lbl_8316E628;


undefined8
fn_82B9D3D8(ulonglong param_1,undefined8 param_2,uint *param_3,ulonglong param_4,code *param_5,
             ulonglong param_6)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0xc74);
  }
  if ((int)param_2 == -1) {
    iVar3 = 0x17;
    iVar4 = 1;
  }
  else {
    iVar3 = fn_82AB71F0(param_1,0x2b,param_2);
    iVar4 = fn_82AB71F0(param_1,0x2c,param_2);
  }
  if ((param_4 & 0xffffffff) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = fn_82B69A00(param_4,8);
  }
  if (iVar5 == 0) {
    puVar6 = &lbl_820DD8B0;
  }
  else {
    puVar6 = &lbl_820DD670;
  }
  *param_3 = (uint)*(ushort *)((int)(puVar6 + iVar3 * 0x18) + 6);
  if (*(int *)(puVar6 + iVar3 * 0x18) == 0) {
    puVar2 = (&lbl_8316E628)[iVar3 + -0x11];
    if (puVar2 == (undefined *)0x0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ddc08,0xffffffff820ddb08,0xc93);
    }
    iVar3 = *(int *)(puVar2 + iVar4 * 4);
    if ((iVar3 < 0) || (0x17 < iVar3)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ddbe0,0xffffffff820ddb08,0xc95);
    }
    uVar1 = *(ushort *)(puVar6 + iVar3 * 0x18 + 6);
    *param_3 = (uint)uVar1;
    if (uVar1 == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ddc18,0xffffffff820ddb08,0xc97);
    }
  }
  if ((param_5 != (code *)0x0) && ((param_6 & 0xffffffff) != 0)) {
    (*param_5)(param_6,0xffffffff820ddb70,lbl_8316E610,100,param_2,
               *param_3);
  }
  return 1;
}

