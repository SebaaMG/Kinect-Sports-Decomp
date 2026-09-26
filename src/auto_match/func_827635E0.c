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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820148F4;
extern unsigned int lbl_82021540;
extern unsigned int lbl_821AAD20;


void fn_827635E0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &lbl_820148F4;
  param_1[1] = 1;
  uVar1 = lbl_82002AE0;
  param_1[5] = 2;
  param_1[6] = 2;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = 3;
  param_1[7] = lbl_82021540;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = lbl_8200D8DC;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar3 = lbl_821AAD20;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar1;
  param_1[0x17] = 0;
  param_1[0x1c] = uVar3;
  param_1[0x18] = 0x7fffffff;
  param_1[0x1d] = uVar3;
  param_1[0x19] = 0x80000001;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = uVar1;
  param_1[0x20] = uVar2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = uVar1;
  param_1[0x29] = 0;
  param_1[0x2e] = uVar3;
  param_1[0x2a] = 0x7fffffff;
  param_1[0x2f] = uVar3;
  param_1[0x2b] = 0x80000001;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

