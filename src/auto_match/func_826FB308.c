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
extern int fn_826F8588();


void fn_826FB308(int param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if ((param_3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 4)) {
    uVar1 = param_3;
    if ((ulonglong)(*(uint *)(param_1 + 8) >> 1) <= (param_3 & 0xffffffff)) goto LAB_826fb35c;
  }
  else {
    if ((param_3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 8)) goto LAB_826fb35c;
    uVar1 = ((param_3 & 0xffffffff) >> 2) + param_3;
  }
  fn_826F8588(param_1,param_2,uVar1);
LAB_826fb35c:
  *(int *)(param_1 + 4) = (int)param_3;
  return;
}

