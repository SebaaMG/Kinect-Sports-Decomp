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
extern int fn_82CEFBD0();
extern int fn_82D808C0();
extern int fn_82DB6028();
extern int fn_83095FB8();
extern unsigned int lbl_82141A64;
extern unsigned int lbl_82141A74;
extern unsigned int lbl_82141A84;
extern unsigned int lbl_82141AFC;


undefined4 * fn_82DA9400(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  fn_82DB6028();
  *param_1 = &lbl_82141AFC;
  param_1[0x15] = 0;
  param_1[0x14] = &lbl_82141A64;
  param_1[0x16] = &lbl_82141A74;
  param_1[0x17] = 0;
  param_1[0x18] = &lbl_82141A84;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  puVar2 = param_1 + 0x16;
  param_1[0x1c] = 0;
  puVar3 = param_1 + 0x18;
  param_1[0x1d] = 0x80000000;
  fn_82CEFBD0(param_1 + 0x1e,4000);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x80000000;
  fn_82CEFBD0(param_1 + 0x28,4000);
  fn_82D808C0(param_1 + 0x2f);
  fn_82CEFBD0(param_1 + 0x40,4000);
  puVar1 = param_1 + 0x50;
  fn_82CEFBD0(puVar1,4000);
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  fn_83095FB8(*(undefined4 *)(param_1[3] + 0x58),10000);
  param_1[0x15] = param_1;
  param_1[0x17] = puVar1;
  *(undefined4 **)(*(int *)(param_2 + 100) + 0x24) = param_1 + 0x14;
  *(undefined4 **)(*(int *)(param_2 + 100) + 0x44) = puVar2;
  *(undefined4 **)(*(int *)(param_2 + 100) + 0x28) = puVar2;
  *(undefined4 **)(*(int *)(param_2 + 100) + 0x48) = puVar2;
  param_1[0x19] = puVar1;
  *(undefined4 **)(*(int *)(param_2 + 100) + 0x2c) = puVar3;
  *(undefined4 **)(*(int *)(param_2 + 100) + 100) = puVar3;
  *(undefined4 **)(*(int *)(param_2 + 100) + 0x4c) = puVar3;
  *(undefined4 **)(*(int *)(param_2 + 100) + 0x68) = puVar3;
  *(undefined4 **)(*(int *)(param_2 + 100) + 0x6c) = puVar3;
  return param_1;
}

