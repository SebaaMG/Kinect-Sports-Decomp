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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_829E6288();
extern int fn_829E6388();
extern float lbl_82057B90;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_829E4DF8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
             uint *param_6)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = fn_829E6388();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    fVar1 = *(float *)(param_5 + 0x14) - *(float *)(param_5 + 0x1c);
    fVar2 = *(float *)(param_5 + 0x10) - *(float *)(param_5 + 0x18);
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) * lbl_82057B90;
    if ((fVar1 <= *(float *)(param_5 + 0x14)) && (fVar1 <= *(float *)(param_5 + 0x1c))) {
      uVar3 = fn_829E6288(param_2,param_3,param_4,param_5);
      return uVar3;
    }
    *param_6 = *param_6 | 0x200;
  }
  return 0xffffffff80004005;
}

