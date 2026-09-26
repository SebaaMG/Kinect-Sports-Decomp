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
extern int fn_82F80708();


void fn_82F80998(int param_1,longlong param_2,uint *param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    lVar2 = (ulonglong)param_3[2] + param_2;
  }
  iVar1 = fn_82F80708(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 == 1) {
    (**(code **)(param_4 + 0x18))(lVar2);
  }
  else if (iVar1 == 2) {
    iVar1 = *(int *)(param_4 + 8) + *(int *)(param_1 + 0x18);
    if (-1 < *(int *)(param_4 + 0xc)) {
      iVar1 = *(int *)(param_4 + 0xc) +
              *(int *)(*(int *)(*(int *)(param_4 + 0xc) + *(int *)(param_1 + 0x18)) +
                      *(int *)(param_4 + 0x10)) + iVar1;
    }
    (**(code **)(param_4 + 0x18))(lVar2,iVar1,1);
  }
  return;
}

