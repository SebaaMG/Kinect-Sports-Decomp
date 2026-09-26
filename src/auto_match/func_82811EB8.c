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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_828105C8();
extern int fn_8281F0A0();
extern int fn_8281F0C0();


void fn_82811EB8(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  fVar1 = param_1[3];
  fn_828105C8((double)(fVar1 + *param_1),(double)(param_1[1] + fVar1),(double)(param_1[2] + fVar1)
                ,auStack_40);
  fVar1 = param_1[3];
  fn_828105C8((double)(*param_1 - fVar1),(double)(param_1[1] - fVar1),(double)(param_1[2] - fVar1)
                ,auStack_30);
  fn_8281F0C0(param_2,auStack_40);
  fn_8281F0A0(param_2,auStack_30);
  return;
}

