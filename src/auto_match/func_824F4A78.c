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
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_8263BDD8();
extern int fn_8263C7F0();
extern int fn_82F691F0();
extern unsigned int lbl_821C1E40;
extern unsigned int uStack_30;


void fn_824F4A78(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [36];
  
  param_1[1] = param_2;
  *param_1 = &lbl_821C1E40;
  uVar1 = fn_8263C7F0(0x300,0x300,1,1,0,0x28000102,0,3);
  param_1[4] = uVar1;
  uVar1 = fn_8263C7F0(0x300,0x300,1,1,0,0x28000102,0,3);
  param_1[2] = uVar1;
  fn_8263BDD8(uVar1,0,0,0,&uStack_30,auStack_2c,auStack_24,auStack_28);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uStack_30,0x7f,0x300);
}

