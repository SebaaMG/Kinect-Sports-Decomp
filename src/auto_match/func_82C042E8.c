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
extern int fn_82C06348();
extern int fn_82C0BF28();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820EC6C8;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82C042E8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  fn_82C06348();
  *param_1 = &lbl_820EC6C8;
  fn_82C0BF28(param_1 + 0x11);
  fn_82C0BF28(param_1 + 0x23);
  fn_82C0BF28(param_1 + 0x35);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  uVar2 = lbl_821AAD20;
  param_1[0x50] = 0;
  uVar1 = lbl_82002AE0;
  param_1[0x51] = 0;
  param_1[0x54] = uVar2;
  param_1[0x55] = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  return param_1;
}

