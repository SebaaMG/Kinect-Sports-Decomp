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
extern int fn_82682298();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_826AAB20(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = *param_1;
  uStack_2c = 0;
  uStack_30 = 0;
  fn_82682298(param_1,&uStack_30);
  param_1[7] = 0;
  uVar2 = param_1[9];
  if (param_1[9] <= uVar1) {
    uVar2 = uVar1;
  }
  param_1[9] = uVar2;
  param_1[10] = uVar1;
  return;
}

