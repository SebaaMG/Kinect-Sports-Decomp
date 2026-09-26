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
extern int fn_82693A98();
extern int fn_826949A8();


int * fn_82710AD8(int *param_1,uint *param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_4;
  if (iVar2 != 0) {
    param_3 = ((param_3 & 0xffffffff) >> 0x1f) - 1 & param_3;
    lVar1 = fn_82693A98(param_2);
    if ((int)param_3 < (int)lVar1) {
      if ((iVar2 < 0) || ((int)lVar1 < (int)param_3 + iVar2)) {
        param_4 = lVar1 - param_3;
      }
      fn_826949A8(param_1,param_2,param_3,param_3 + param_4);
      return param_1;
    }
  }
  iVar2 = *(int *)(*(int *)(*param_2 & 0xfffffc00) + 0x18);
  *param_1 = iVar2;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  return param_1;
}

