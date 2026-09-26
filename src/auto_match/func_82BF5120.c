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
extern int fn_82BE6720();
extern int fn_82BE6760();
extern int fn_82BE67A0();
extern int fn_82BE67E0();
extern int fn_82BE6840();
extern int fn_82BF4EE8();


undefined8
fn_82BF5120(undefined8 param_1,int param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined2 in_stack_00000056;
  
  iVar1 = fn_82BF4EE8(param_2,0x2c);
  if (iVar1 != 0) {
    fn_82BE6720(param_2,0xdf,0);
    fn_82BE67A0(param_2,0x2b,0);
    fn_82BE6720(param_2,0x36,0);
    fn_82BE6720(param_2,param_3,0);
    fn_82BE6720(param_2,0x26,0);
    fn_82BE67A0(param_2,param_4,0);
    fn_82BE6720(param_2,0x15,0);
    fn_82BE67A0(param_2,param_5,0);
    fn_82BE6720(param_2,0x32,0);
    fn_82BE67A0(param_2,param_6,0);
    fn_82BE6720(param_2,0x33,0);
    fn_82BE67E0(param_2,param_7,0);
    fn_82BE6720(param_2,0x34,0);
    fn_82BE67E0(param_2,param_8,0);
    fn_82BE6720(param_2,0x31,0);
    fn_82BE6840(param_1,param_2);
    fn_82BE6720(param_2,0x46,0);
    fn_82BE6760(param_2,in_stack_00000056,0);
    *(short *)(param_2 + 0x50) = *(short *)(param_2 + 0x50) + 1;
  }
  return 0;
}

