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
extern int fn_82BE1A10();
extern int fn_82BE1FC0();
extern int fn_82BE5240();
extern int fn_82BEA420();
extern int fn_82BEF330();
extern int fn_82BEF948();
extern int fn_82BF1AE0();


undefined8 fn_82BEFD98(int *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar4;
  longlong lVar3;
  
  uVar2 = fn_82BE1A10();
  iVar4 = fn_82BE1FC0(uVar2,2);
  if (iVar4 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x1c))(param_1);
    *(undefined1 *)((int)param_1 + 0x42) = 1;
    if (lVar3 == 0) {
      fn_82BEF330(param_1,1);
      param_1[4] = 2;
      uVar2 = fn_82BE5240(param_1,0x193,0xffffffff82196582);
      return uVar2;
    }
    if ((param_1[0xb] == 0) && (param_1[0xf] == 0)) {
      fn_82BEF330(param_1,1);
    }
    if (param_1[6] != 0) {
      iVar4 = fn_82BEA420(param_1[6],lVar3);
      param_1[0xc] = iVar4;
    }
    if (param_1[0xc] == 0) {
      param_1[4] = 2;
      uVar2 = fn_82BE5240(param_1,0x193,0xffffffff820eb2b0,lVar3,param_1[5]);
      return uVar2;
    }
    piVar1 = *(int **)(param_1[0xc] + 0x34);
    if (piVar1 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 4))();
    }
    iVar4 = fn_82BEF948(param_1,uVar2);
    if (iVar4 == 0) {
      iVar4 = 0x12;
    }
    else {
      fn_82BF1AE0(param_1[0xc]);
      iVar4 = 0x11;
    }
  }
  else {
    fn_82BEF330(param_1,1);
    iVar4 = 2;
  }
  param_1[4] = iVar4;
  return 0;
}

