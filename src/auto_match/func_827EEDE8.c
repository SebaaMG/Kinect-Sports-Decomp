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
extern unsigned int *auStack_74;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_827EECE8();
extern int fn_82810328();


ulonglong fn_827EEDE8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float *in_stack_00000054;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [116];
  
  fn_82810328(param_6,param_7,auStack_80);
  fn_82810328(param_6,param_8,auStack_74);
  fn_82810328(param_4,param_6,auStack_90);
  uVar1 = fn_827EECE8(param_1,param_2,param_3,auStack_90,param_5);
  fn_82810328(param_7,param_6,auStack_80);
  fn_82810328(param_7,param_8,auStack_74);
  fn_82810328(param_4,param_7,auStack_90);
  uVar2 = fn_827EECE8(param_1,param_2,(double)*in_stack_00000054,auStack_90,param_5);
  fn_82810328(param_8,param_7,auStack_80);
  fn_82810328(param_8,param_6,auStack_74);
  fn_82810328(param_4,param_8,auStack_90);
  uVar3 = fn_827EECE8(param_1,param_2,(double)*in_stack_00000054,auStack_90,param_5);
  return uVar3 | uVar2 | uVar1;
}

