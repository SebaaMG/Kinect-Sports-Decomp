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
extern int fn_82A44520();
extern unsigned int lbl_82089874;
extern unsigned int lbl_820898A0;
extern unsigned int lbl_82089910;


undefined4 * fn_82A46ED8(undefined4 *param_1)

{
  int iVar1;
  
  fn_82A44520();
  *param_1 = &lbl_82089910;
  param_1[0x75] = 0;
  param_1[1] = &lbl_820898A0;
  param_1[0x23] = &lbl_82089874;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = param_1 + 0x81;
  param_1[0x7f] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 1;
  param_1[0x81] = 0;
  iVar1 = param_1[0x80];
  *(undefined4 *)(iVar1 + 8) = param_1[0x7f];
  param_1[0x7f] = iVar1 + 4;
  param_1[0x8a] = param_1 + 0x8b;
  param_1[0x89] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 1;
  param_1[0x8b] = 0;
  iVar1 = param_1[0x8a];
  *(undefined4 *)(iVar1 + 8) = param_1[0x89];
  param_1[0x89] = iVar1 + 4;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x99] = 1;
  param_1[0x98] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = param_1 + 0x9e;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 1;
  param_1[0x9e] = 0;
  iVar1 = param_1[0x9d];
  *(undefined4 *)(iVar1 + 8) = param_1[0x9c];
  param_1[0x9c] = iVar1 + 4;
  param_1[0xa6] = 0;
  param_1[0xa7] = param_1 + 0xa8;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 1;
  param_1[0xa8] = 0;
  iVar1 = param_1[0xa7];
  *(undefined4 *)(iVar1 + 8) = param_1[0xa6];
  param_1[0xa6] = iVar1 + 4;
  return param_1;
}

