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
extern int fn_82AB6EC0();
extern int fn_82AB71F0();
extern int fn_82B69A00();
extern unsigned int lbl_820DD670;
extern unsigned int lbl_820DD8B0;
extern unsigned int lbl_8316E4F8;
extern unsigned int lbl_8316E60C;


undefined8
fn_82B9CF38(ulonglong param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4,
             code *param_5,ulonglong param_6)

{
  int iVar1;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar2;
  int iVar8;
  undefined *puVar9;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0xb97);
  }
  if ((int)param_2 == -1) {
    iVar5 = 0x17;
    iVar8 = 0;
    uVar6 = 0;
    uVar3 = fn_82AB6EC0(param_1,0x3a0);
    uVar4 = fn_82AB6EC0(param_1,0x39f);
    uVar7 = 0xffffffff;
  }
  else {
    iVar5 = fn_82AB71F0(param_1,0x2b,param_2);
    iVar8 = fn_82AB71F0(param_1,0x2d,param_2);
    uVar6 = fn_82AB71F0(param_1,0x2e,param_2);
    uVar3 = fn_82AB71F0(param_1,0x2a,param_2);
    uVar4 = fn_82AB71F0(param_1,0x29,param_2);
    uVar7 = fn_82AB71F0(param_1,0x28,param_2);
  }
  if ((param_4 & 0xffffffff) < 2) {
    uVar2 = 1;
  }
  else {
    uVar2 = fn_82B69A00(param_4,8);
  }
  if ((uVar2 & 0xffffffff) == 0) {
    puVar9 = &lbl_820DD8B0;
  }
  else {
    puVar9 = &lbl_820DD670;
  }
  *param_3 = 1;
  iVar1 = *(int *)(puVar9 + iVar5 * 0x18 + 0x10);
  param_3[1] = iVar1;
  if (iVar1 == -1) {
    param_3[1] = (uint)LZCOUNT(iVar8 + -1) >> 5;
  }
  iVar8 = *(int *)(puVar9 + iVar5 * 0x18 + 0xc);
  param_3[2] = iVar8;
  if (iVar8 == -1) {
    param_3[2] = (uint)LZCOUNT(uVar6) >> 5;
  }
  param_3[3] = 0;
  param_3[4] = 0;
  iVar8 = *(int *)(puVar9 + iVar5 * 0x18 + 8);
  param_3[5] = iVar8;
  if (iVar8 == -1) {
    iVar8 = fn_82AB71F0(param_1,0x2c,param_2);
    param_3[5] = *(undefined4 *)(*(int *)(puVar9 + iVar5 * 0x18 + 0x14) + iVar8 * 4);
  }
  if (param_3[5] == -1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820ddb08,0xbe8);
  }
  param_3[7] = uVar3;
  param_3[8] = uVar4;
  param_3[6] = 0;
  param_3[9] = uVar7;
  if ((param_5 != (code *)0x0) && ((param_6 & 0xffffffff) != 0)) {
    (*param_5)(param_6,0xffffffff820ddb84,lbl_8316E4F8,0x1e,param_2,
               *param_3,param_3[1],param_3[2]);
    (*param_5)(param_6,0xffffffff820ddaf8,lbl_8316E60C,99,uVar2);
  }
  return 1;
}

