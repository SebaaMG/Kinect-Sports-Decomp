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
extern unsigned int uStack_12;
extern unsigned int uStack_14;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1a;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82A2AAA8(undefined4 *param_1,undefined2 *param_2)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  uStack_2c = param_1[1];
  uStack_30 = *param_1;
  RtlTimeToTimeFields(&uStack_30,&uStack_20);
  *param_2 = uStack_20;
  param_2[1] = uStack_1e;
  param_2[3] = uStack_1c;
  param_2[2] = uStack_12;
  param_2[4] = uStack_1a;
  param_2[5] = uStack_18;
  param_2[6] = uStack_16;
  param_2[7] = uStack_14;
  return 1;
}

