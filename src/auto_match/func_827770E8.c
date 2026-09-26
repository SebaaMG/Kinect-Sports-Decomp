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
extern int fn_82776D18();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015388;
extern unsigned int lbl_82015398;
extern unsigned int lbl_8201539C;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined4 * fn_827770E8(undefined4 *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  *param_1 = &lbl_8201539C;
  param_1[2] = 0x12;
  param_1[1] = 1;
  param_1[3] = 0x400;
  param_1[4] = 0x400;
  param_1[5] = 1;
  param_1[6] = 0x30;
  param_1[7] = 2;
  uVar1 = lbl_82002AE0;
  param_1[8] = 0x100;
  uVar3 = lbl_82015398;
  param_1[9] = 0x200;
  uVar2 = lbl_82015388;
  *(undefined1 *)(param_1 + 10) = param_2;
  param_1[0xb] = uVar1;
  param_1[0xe] = uVar3;
  param_1[0xd] = 0x200;
  param_1[0xf] = uVar2;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  uStack_50 = 0x400;
  uStack_4c = 0x400;
  uStack_48 = 1;
  uStack_44 = 0x30;
  uStack_40 = 2;
  uStack_3c = 0x100;
  uStack_38 = 0x200;
  fn_82776D18(param_1,&uStack_50);
  return param_1;
}

