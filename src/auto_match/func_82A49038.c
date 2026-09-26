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
extern unsigned int lbl_8208998C;
extern unsigned int lbl_820899B8;
extern unsigned int lbl_82089A38;


undefined4 * fn_82A49038(undefined4 *param_1)

{
  int iVar1;
  
  fn_82A44520();
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *param_1 = &lbl_820899B8;
  param_1[1] = &lbl_82089A38;
  param_1[0x23] = &lbl_8208998C;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = param_1 + 0x7f;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 1;
  param_1[0x7f] = 0;
  iVar1 = param_1[0x7e];
  *(undefined4 *)(iVar1 + 8) = param_1[0x7d];
  param_1[0x7d] = iVar1 + 4;
  param_1[0x87] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x88] = param_1 + 0x89;
  param_1[0x90] = 1;
  param_1[0x89] = 0;
  iVar1 = param_1[0x88];
  *(undefined4 *)(iVar1 + 8) = param_1[0x87];
  param_1[0x87] = iVar1 + 4;
  return param_1;
}

