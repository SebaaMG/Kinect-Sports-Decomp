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
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_8280DB80();
extern int fn_8280DE18();
extern int fn_8280E398();
extern float lbl_8201E040;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8280E4F0(undefined8 param_1,float *param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  struct { float first; float second; } stack_pair_30;

  float fStack_28;
  float fStack_24;
  
  fn_8280E398(param_1,param_2,&stack_pair_30.first);
  fn_8280DE18(&stack_pair_30.first,&stack_pair_30.first);
  fn_8280E398(param_3,param_2,param_4);
  fn_8280DE18(param_4,param_4);
  stack_pair_30.first = (*param_4 + stack_pair_30.first) * lbl_8201E040;
  stack_pair_30.second = (param_4[1] + stack_pair_30.second) * lbl_8201E040;
  fStack_28 = (param_4[2] + fStack_28) * lbl_8201E040;
  fStack_24 = (param_4[3] + fStack_24) * lbl_8201E040;
  fn_8280DB80(&stack_pair_30.first,&stack_pair_30.first);
  fVar1 = param_2[3];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  fVar4 = param_2[2];
  param_4[2] = -(fVar2 * stack_pair_30.first - (fVar4 * fStack_24 + fVar3 * stack_pair_30.second + fVar1 * fStack_28));
  param_4[1] = -(fVar3 * fStack_28 - (fVar4 * stack_pair_30.first + fVar1 * stack_pair_30.second + fVar2 * fStack_24));
  param_4[3] = -(fVar4 * fStack_28 - -(fVar2 * stack_pair_30.second - (fVar1 * fStack_24 - fVar3 * stack_pair_30.first)))
  ;
  *param_4 = -(fVar4 * stack_pair_30.second - (fVar2 * fStack_28 + fVar3 * fStack_24 + fVar1 * stack_pair_30.first));
  return;
}

