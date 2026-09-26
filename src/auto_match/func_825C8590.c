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
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_8262FBD8();
extern int fn_8263BDD8();
extern int fn_8263C7F0();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192510;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831E4D44;


undefined4 *
fn_825C8590(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  param_1[2] = param_6;
  param_1[0x13] = param_2;
  uVar4 = lbl_821CC160;
  uVar3 = lbl_82192510;
  uVar2 = lbl_821922D4;
  param_1[0x14] = param_3;
  uVar5 = lbl_831E4D44;
  param_1[1] = param_5;
  uVar6 = lbl_821916FC;
  param_1[0x15] = param_4;
  param_1[3] = param_1[3] & 0x7fffffff;
  param_1[5] = uVar4;
  param_1[7] = param_1[7] & 0x7fffffff;
  param_1[9] = uVar4;
  param_1[0x11] = uVar4;
  *param_1 = 0;
  param_1[0xe] = uVar2;
  param_1[0xb] = 0;
  param_1[0x10] = uVar3;
  param_1[0xf] = uVar5;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar4;
  param_1[0x12] = uVar6;
  uVar6 = fn_8263C7F0(1,1,1,1,0,0x18280186,0,3);
  param_1[0x21] = uVar6;
  fn_8263BDD8(uVar6,0,0,0,&puStack_30,auStack_24,auStack_28,auStack_2c);
  *puStack_30 = 0xff0064ff;
  iVar1 = param_1[0x21];
  fn_8262FBD8(iVar1,*(uint *)(iVar1 + 0x20) & 0xfffff000,*(uint *)(iVar1 + 0x30) & 0xfffff000)
  ;
  return param_1;
}

