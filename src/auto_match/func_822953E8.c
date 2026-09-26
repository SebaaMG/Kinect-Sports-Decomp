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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82296010();
extern int fn_822960B0();
extern int fn_82F64020();


undefined8
fn_822953E8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  uVar1 = fn_82296010(auStack_90,0xffffffff82196fe8,*(undefined4 *)(param_4 + 0x14));
  uVar1 = fn_82F64020(auStack_80,0x40,uVar1,param_6);
  fn_822960B0(param_1,param_2,param_3,param_4,param_5,auStack_80,uVar1);
  return param_1;
}

