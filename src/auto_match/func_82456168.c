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
extern int fn_82535298();
extern int fn_82536288();


void fn_82456168(double param_1,int *param_2)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  int aiStack_10 [4];
  
  if (param_2[0xf] != 2) {
    return;
  }
  fVar1 = (float)param_2[0x16];
  param_2[0x16] = (int)(float)(param_1 + (double)fVar1);
  if ((float)(param_1 + (double)fVar1) <= (float)param_2[0x14]) {
    return;
  }
  if (param_2[0x15] != 0) {
    return;
  }
  param_2[0x15] = 1;
  if (param_2[0x10] != 0) {
    uVar2 = param_2[0x12];
    if (param_2[0x13] == 0) {
      uVar2 = (uint)LZCOUNT(uVar2) >> 5;
    }
    if (uVar2 == 0) {
      piVar3 = param_2 + 0x1a;
      if (param_2[0x11] == 0) {
        piVar3 = param_2 + 0x18;
      }
      goto LAB_82456204;
    }
  }
  piVar3 = param_2 + 0x19;
  if (param_2[0x11] == 0) {
    piVar3 = param_2 + 0x17;
  }
LAB_82456204:
  aiStack_10[0] = *piVar3;
  aiStack_10[0] =
       fn_82535298(aiStack_10,*(undefined4 *)(*(int *)(*param_2 + 0x4c) + 0x84c),
                         0xffffffff83296bc0,0xffffffff83296bd0);
  fn_82536288(aiStack_10);
  return;
}

