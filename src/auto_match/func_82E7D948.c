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
extern int fn_82E50330();
extern unsigned int uStack_28;
extern unsigned int uStack_30;


longlong fn_82E7D948(undefined8 param_1,undefined2 param_2,undefined8 param_3,int *param_4,
                      int *param_5)

{
  longlong lVar1;
  int iVar2;
  int *apiStack_40 [4];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  apiStack_40[0] = (int *)0x0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar1 = (**(code **)(*param_5 + 0xc))(param_5,param_3,param_2,0,apiStack_40);
  if (((-1 < lVar1) &&
      (iVar2 = (**(code **)(*apiStack_40[0] + 0x1c))(apiStack_40[0],0xffffffff8215f0d0,&uStack_30),
      iVar2 == 0)) && ((((U64)(uStack_30) >> 0) & 0xFFFF) == 0x1f)) {
    lVar1 = (**(code **)(*param_4 + 100))(param_4,0xffffffff8214c230,(((U64)(uStack_28) >> 0) & 0xFFFFFFFF));
  }
  if (apiStack_40[0] != (int *)0x0) {
    (**(code **)(*apiStack_40[0] + 8))();
    apiStack_40[0] = (int *)0x0;
  }
  fn_82E50330(&uStack_30);
  return lVar1;
}

