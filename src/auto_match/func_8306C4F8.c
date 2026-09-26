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
extern int fn_8306C7F8();
extern unsigned int uStack_12;
extern unsigned int uStack_14;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1a;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;


void fn_8306C4F8(undefined2 *param_1)

{
  longlong lStack_40;
  longlong lStack_38;
  longlong alStack_30 [2];
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  KeQuerySystemTime(&lStack_40);
  fn_8306C7F8(&lStack_38);
  alStack_30[0] = lStack_40 - lStack_38;
  RtlTimeToTimeFields(alStack_30,&uStack_20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1e;
  param_1[2] = uStack_12;
  param_1[3] = uStack_1c;
  param_1[4] = uStack_1a;
  param_1[5] = uStack_18;
  param_1[6] = uStack_16;
  param_1[7] = uStack_14;
  return;
}

