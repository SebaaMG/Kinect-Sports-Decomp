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
extern int fn_82F6E7A8();
extern unsigned int lbl_82057518;


undefined8 fn_83058580(int param_1,float *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  if ((param_2 == (float *)0x0) || (param_3 != 0x3c2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    lVar3 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 8) - (int)param_2;
    dVar5 = (double)lbl_82057518;
    do {
      dVar4 = (double)*(float *)(iVar1 + (int)param_2);
      if (dVar5 < ABS((double)(float)((double)*param_2 - dVar4))) {
        fn_82F6E7A8(0xffffffff8217e2a0,lVar3,(double)*param_2,lVar3,dVar4);
        uVar2 = 0;
      }
      lVar3 = lVar3 + 1;
      param_2 = param_2 + 1;
    } while ((int)lVar3 < 0x3c2);
  }
  return uVar2;
}

