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
extern int fn_82AB71F0();
extern unsigned int lbl_8316E4B0;


undefined8
fn_82B9D720(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,code *param_6,ulonglong param_7)

{
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  uVar2 = fn_82AB71F0(param_1,0x52,param_2);
  uVar3 = fn_82AB71F0(param_1,0x53,param_2);
  uVar1 = fn_82AB71F0(param_1,0x54,param_2);
  *param_3 = uVar2;
  *param_4 = uVar3;
  *param_5 = (int)uVar1;
  if ((param_6 != (code *)0x0) && ((param_7 & 0xffffffff) != 0)) {
    (*param_6)(param_7,0xffffffff820ddc34,lbl_8316E4B0,0xc,param_2,*param_3
               ,*param_4,uVar1);
  }
  return 1;
}

