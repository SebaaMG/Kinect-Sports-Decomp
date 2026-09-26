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
extern int fn_82F68CC0();


undefined8
fn_829186E0(int *param_1,ulonglong param_2,int param_3,float *param_4,ulonglong param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (param_5 & 0x3fffffff) << 2;
  if ((param_5 & 0x3fffffff) != 0) {
    iVar1 = param_3 - (int)param_4;
    do {
      *param_4 = (float)(longlong)*(int *)(iVar1 + (int)param_4);
      param_4 = param_4 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lVar2 = (**(code **)(*param_1 + 0xc))();
  fn_82F68CC0(lVar2 + (param_2 & 0xfffffff) * 0x10,param_3,(param_5 & 0xfffffff) << 4);
  return 0;
}

