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
extern int fn_829E59D8();
extern unsigned int iStack_40;
extern unsigned int lbl_82057B3C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_829E3E10(undefined8 param_1,double param_2,int param_3,int param_4,undefined8 param_5,
             undefined8 param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iStack_40;
  
  uVar2 = 0;
  if (((*(int *)(param_3 + 0x8c) == 0) && (param_4 != 1)) && (*(int *)(param_3 + 0x94) == 0)) {
    uVar1 = fn_829E59D8((double)*(float *)(param_3 + 0x98),(double)*(float *)(param_3 + 0x9c),
                            param_1,param_2,param_3 + 0x24);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if ((iStack_40 != 0) ||
       ((float)((double)*(float *)(param_3 + 0x9c) * (double)lbl_82057B3C) <
        ABS((float)((double)*(float *)(param_3 + 0x9c) - param_2)))) {
      uVar2 = 1;
    }
  }
  *param_7 = uVar2;
  *param_8 = 0;
  return 0;
}

