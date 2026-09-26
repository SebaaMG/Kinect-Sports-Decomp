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
extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern int fn_8263BDD8();
extern int fn_8263C7F0();
extern int fn_82F691F0();
extern unsigned int lbl_821BEAC4;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_8248D3C0(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [84];
  
  *param_1 = &lbl_821BEAC4;
  uVar1 = lbl_821CA460;
  param_1[0x28] = lbl_821CA460;
  param_1[0x29] = uVar1;
  param_1[0x2a] = uVar1;
  param_1[0x2b] = uVar1;
  uVar1 = fn_8263C7F0(0x140,0x100,1,1,0x200,0x18280186,0,3);
  param_1[1] = uVar1;
  fn_8263BDD8(uVar1,0,0,0,&uStack_5c,&uStack_60,auStack_54,auStack_58);
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uStack_5c,0,((ulonglong)uStack_60 & 0xffffff) << 8);
}

