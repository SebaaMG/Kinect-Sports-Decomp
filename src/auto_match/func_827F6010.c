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
extern unsigned int *auStack_40;
extern int fn_827F38B0();
extern int fn_827F38B8();
extern int fn_827FE3B0();
extern int fn_82811238();
extern int fn_82811438();
extern unsigned int lbl_8201DDE0;


/* WARNING: Type propagation algorithm not settling */

void fn_827F6010(undefined4 *param_1)

{
  undefined8 uVar1;
  int aiStack_50 [4];
  undefined1 auStack_40 [64];
  
  aiStack_50[0] = 0;
  *param_1 = &lbl_8201DDE0;
  fn_827FE3B0(param_1 + 9,aiStack_50);
  if (aiStack_50[0] != 0) {
    aiStack_50[1] = 3;
    uVar1 = fn_82811438(auStack_40,aiStack_50 + 1,0x10);
    fn_82811238(0xffffffff8320a3e0,aiStack_50[0],uVar1);
  }
  if (param_1[0x76] != 0) {
    aiStack_50[1] = 3;
    uVar1 = fn_82811438(auStack_40,aiStack_50 + 1,0x10);
    fn_82811238(0xffffffff8320a3e0,param_1[0x76],uVar1);
  }
  fn_827F38B0(param_1 + 0x51);
  fn_827F38B8(param_1);
  return;
}

