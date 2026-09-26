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
extern int fn_8263B758();


void fn_8263CA78(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if ((*param_1 & 0x40000000) == 0) {
    uVar1 = param_1[10];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[5] = 0;
    *param_2 = uVar1;
    param_2[6] = (param_1[9] >> 0x12) + 1;
    param_2[7] = (param_1[9] >> 3 & 0x7fff) + 1;
    param_2[4] = *(ushort *)(param_1 + 6) & 3;
  }
  else {
    fn_8263B758(param_1[6],param_1[7] >> 0x1c,param_2);
  }
  param_2[1] = 4;
  return;
}

