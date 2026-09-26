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
extern int fn_826E8488();
extern int fn_826E8610();
extern int fn_82756288();


void fn_82756FD0(int *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  fn_82756288(param_1,param_3);
  if (0 < (int)param_3) {
    iVar4 = 0;
    do {
      iVar1 = *param_1;
      uVar2 = fn_826E8488(param_2,param_4);
      *(undefined4 *)(iVar4 + iVar1) = uVar2;
      iVar1 = iVar4 + *param_1;
      iVar3 = fn_826E8610(param_2,param_5);
      param_3 = param_3 + -1;
      iVar4 = iVar4 + 8;
      *(float *)(iVar1 + 4) = (float)(longlong)iVar3;
    } while (param_3 != 0);
  }
  return;
}

