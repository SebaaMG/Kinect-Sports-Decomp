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
extern int fn_82F691F0();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;


void fn_8305C738(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  fn_82F691F0(param_1 + 0xc,0,0x28);
  uVar1 = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x34) = lbl_821CA1A0;
  *(undefined4 *)(param_1 + 0x38) = lbl_821CA1A4;
  *(undefined4 *)(param_1 + 0x3c) = lbl_821CA1A8;
  *(undefined4 *)(param_1 + 0x40) = lbl_821CA1A0;
  *(undefined4 *)(param_1 + 0x44) = lbl_821CA1A4;
  *(undefined4 *)(param_1 + 0x48) = lbl_821CA1A8;
  *(undefined4 *)(param_1 + 0x4c) = lbl_821CA1A0;
  *(undefined4 *)(param_1 + 0x50) = lbl_821CA1A4;
  uVar2 = lbl_821CA1A8;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  return;
}

