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
extern int fn_825603C8();
extern int fn_825604A0();
extern int fn_825605B0();
extern int fn_82592238();


void fn_825E48D0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == 0x52) {
    if ((*(int *)(param_1 + 0x1f8) == 0) || (*(int *)(param_1 + 0x1f0) == 0)) goto LAB_825e4968;
    fn_825604A0(param_1 + 0x70);
    uVar1 = 0;
  }
  else {
    if (((*param_2 != 0x53) || (*(int *)(param_1 + 0x1f8) == 0)) || (*(int *)(param_1 + 0x1f0) != 0)
       ) goto LAB_825e4968;
    fn_825603C8(0,param_1 + 0x70,0);
    fn_825605B0(0,0xffffffff821ca198);
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x1f0) = uVar1;
LAB_825e4968:
  fn_82592238(param_1,param_2);
  return;
}

