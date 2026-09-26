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
extern int fn_82E92580();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_8215F708;


undefined8
fn_82E92718(longlong param_1,longlong param_2,ulonglong param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = (double)fn_82E92580(param_1,param_2 + 0x418,param_1 + 0x418,(param_3 & 0xffffffff) >> 2,
                                1);
  *param_4 = (float)dVar2;
  dVar2 = (double)fn_82E92580(param_1,param_2 + 0x18,param_1 + 0x18);
  *param_5 = (float)dVar2;
  if (((lbl_8215F708 < (double)*param_4) || (lbl_8215F708 < dVar2)) ||
     (((double)lbl_82002C28 < (double)*param_4 && ((double)lbl_82002C28 < dVar2)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

