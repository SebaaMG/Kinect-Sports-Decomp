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
extern int fn_826F0360();


void fn_826F0540(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2[1] != 0) {
    uVar4 = 0;
    do {
      if (*(char *)(*param_2 + uVar4) == '.') goto LAB_826f0588;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_2[1]);
    uVar4 = 0xffffffff;
LAB_826f0588:
    uVar2 = fn_826F0360(param_2,*param_1 >> 0x16 & 0x1f,0x3a);
    uVar1 = *param_1;
    uVar2 = (uVar2 & 0x1f) << 0x16;
    *param_1 = uVar2 | uVar1 & 0xf83fffff;
    if (-1 < (int)uVar4) {
      *param_1 = uVar2 | uVar1 & 0x3fffff;
      uVar4 = (uint)(param_2[1] != 0);
      param_2[1] = param_2[1] - uVar4;
      *param_2 = *param_2 + uVar4;
      iVar3 = fn_826F0360(param_2,*param_1 >> 0x1b,0x3a);
      *param_1 = iVar3 << 0x1b | *param_1 & 0x7ffffff;
    }
  }
  return;
}

