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
extern int fn_827EFFE8();
extern int fn_827F2EB0();
extern int fn_827F3A60();
extern int fn_827F3B30();
extern int fn_827F3C20();
extern int fn_827F3EB0();
extern int fn_827F94B0();
extern int fn_82811080();
extern int fn_82811438();
extern int fn_82F68CC0();
extern unsigned int lbl_8201DCF8;


undefined4 * fn_827F0298(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar7;
  undefined8 uVar6;
  longlong lVar8;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  fn_827F2EB0();
  param_1[0x45] = 0;
  *param_1 = &lbl_8201DCF8;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x4b) = 0;
  auStack_60[0] = 0;
  fn_82811438(auStack_50,auStack_60,0x10);
  uVar2 = fn_827F3EB0(param_1);
  lVar8 = (uVar2 & 0x3ffffff) * 0x40;
  lVar3 = fn_827F3A60(param_1);
  lVar4 = fn_827F3EB0(param_1);
  lVar5 = fn_82811080(0xffffffff8320a3e0,lVar4 * 0x34 + lVar3 + lVar8,auStack_50);
  param_1[0x4a] = (int)lVar5;
  iVar7 = fn_827F3EB0(param_1);
  if (iVar7 != 0) {
    param_1[0x44] = (int)lVar5;
    lVar5 = lVar5 + lVar8;
  }
  fn_827F3B30(param_1,lVar5);
  param_1[0x46] = (int)(lVar5 + lVar3);
  fn_82F68CC0(lVar5 + lVar3,*(undefined4 *)(param_2 + 0x2c),lVar4 * 0x34);
  uVar1 = param_1[0x46];
  uVar6 = fn_827F3C20(param_1);
  fn_827F94B0(uVar6,uVar1);
  fn_827EFFE8(param_1);
  return param_1;
}

