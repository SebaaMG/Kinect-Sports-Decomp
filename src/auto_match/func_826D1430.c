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
extern int fn_8267BE38();
extern int fn_82699AD0();
extern int fn_8269D480();
extern int fn_826C86D8();
extern int fn_826CE308();
extern int fn_826D03A0();


void fn_826D1430(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1b4);
  if (iVar1 != 0) {
    fn_826CE308(iVar1);
    fn_8267BE38(iVar1);
  }
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  uVar2 = fn_826C86D8(param_1);
  if (-1 < (int)uVar2) {
    fn_826D03A0((ulonglong)*(uint *)(param_1 + 0xa0) + 0xa98,uVar2);
  }
  *(uint *)(*(int *)(param_1 + 0xa0) + 0xb00) = *(uint *)(*(int *)(param_1 + 0xa0) + 0xb00) | 0x400;
  fn_82699AD0(param_1 + 0xa8);
  fn_8269D480(param_1);
  (**(code **)(*(int *)(param_1 + 0x68) + 0x34))(param_1 + 0x68,param_1 + 0x148,0);
  return;
}

