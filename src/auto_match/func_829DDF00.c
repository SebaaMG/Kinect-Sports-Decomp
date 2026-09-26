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


uint fn_829DDF00(int param_1,uint *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = -((uint)(param_2[1] < param_2[3]) - ((int)param_2[1] >> 0x1f)) - ((int)param_2[3] >> 0x1f)
          & -((uint)(uVar1 < param_2[2]) - ((int)uVar1 >> 0x1f)) - ((int)param_2[2] >> 0x1f) & 1;
  if (((int)uVar1 < param_3) && (*param_4 = *param_4 | 0x80, (int)*param_2 < 0)) {
    uVar2 = 0;
    *param_2 = 0;
  }
  if ((int)param_2[1] < 0) {
    uVar2 = 0;
    *param_4 = *param_4 | 0x200;
    param_2[1] = 0;
  }
  if (*(int *)(param_1 + 4) - param_3 < (int)param_2[2]) {
    *param_4 = *param_4 | 0x100;
    if ((int)*(uint *)(param_1 + 4) < (int)param_2[2]) {
      param_2[2] = *(uint *)(param_1 + 4);
      uVar2 = 0;
    }
  }
  if ((int)*(uint *)(param_1 + 8) <= (int)param_2[3]) {
    param_2[3] = *(uint *)(param_1 + 8);
    uVar2 = 0;
    *param_4 = *param_4 | 0x400;
  }
  return uVar2;
}

