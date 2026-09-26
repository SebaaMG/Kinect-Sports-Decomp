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
extern int fn_828145E8();
extern int fn_82F672D8();


undefined8
fn_82814668(undefined8 param_1,int param_2,undefined8 param_3,int *param_4,uint param_5,
             longlong param_6)

{
  int *piVar1;
  
  if ((*param_4 == 0) || (*(int *)(*param_4 + 0x20) == 0)) {
    piVar1 = (int *)fn_828145E8(param_3,(param_6 + 0x7fU & ~(param_6 - 1U)) + 0x18d);
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    piVar1[1] = (int)param_6;
    *piVar1 = (int)(piVar1 + 0x21);
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[7] = (uint)(piVar1 + 99) & 0xfffffffc;
    piVar1[4] = piVar1[4] | param_5 | 0x10;
    fn_82F672D8(piVar1 + 0x21,param_1,0x104);
    piVar1[5] = param_2;
    piVar1[6] = (int)param_3;
    *param_4 = (int)piVar1;
  }
  return 0;
}

