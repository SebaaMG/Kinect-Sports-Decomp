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
extern int fn_8267B890();
extern int fn_8267BDA8();
extern int fn_82F68CC0();


void fn_82790490(int *param_1,int param_2,short *param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  
  if (param_4 == 0xffffffff) {
    param_4 = 0;
    sVar2 = *param_3;
    psVar1 = param_3;
    while (sVar2 != 0) {
      psVar1 = psVar1 + 1;
      param_4 = param_4 + 1;
      sVar2 = *psVar1;
    }
  }
  if ((uint)param_1[2] < param_4) {
    if (*param_1 == 0) {
      iVar3 = fn_8267B890(*(undefined4 *)(param_2 + 0x1c),param_4 << 1,0);
    }
    else {
      iVar3 = fn_8267BDA8(*param_1,param_4 << 1);
    }
    *param_1 = iVar3;
    param_1[2] = param_4;
  }
  if (param_4 != 0) {
    fn_82F68CC0(*param_1,param_3,param_4 << 1);
  }
  param_1[1] = param_4;
  return;
}

