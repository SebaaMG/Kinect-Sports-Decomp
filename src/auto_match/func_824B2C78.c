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
extern int fn_824B3F18();
extern unsigned int lbl_8218E2B0;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821C01DC;
extern unsigned int lbl_821CC160;


undefined4 * fn_824B2C78(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = &lbl_821C01DC;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_824B3F18(param_1 + 1);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x18] = 0;
  uVar2 = lbl_821CC160;
  param_1[0x1d] = 0;
  uVar1 = lbl_8218E2B0;
  param_1[0x1e] = 0;
  param_1[7] = uVar2;
  param_1[0x20] = 0;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar2;
  param_1[0x1c] = uVar2;
  param_1[0x1f] = uVar2;
  param_1[0x21] = uVar2;
  param_1[0x22] = uVar2;
  param_1[0x19] = uVar1;
  uVar2 = lbl_821922D0;
  param_1[0x23] = *(undefined4 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x24] = uVar1;
  param_1[0xe] = 0;
  param_1[0xd] = uVar2;
  param_1[0xf] = 0;
  return param_1;
}

