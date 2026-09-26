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
extern int fn_82CECDD8();


double fn_82D9F750(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = fn_82CECDD8();
  uVar5 = *(int *)(param_2 + 0x24) - 1;
  if ((int)uVar3 < (int)uVar5) {
    uVar5 = 0xffffffffU - ((int)uVar3 >> 0x1f) & uVar3;
    iVar6 = uVar5 * 4;
    pfVar4 = (float *)(*(int *)(param_2 + 0x2c) + iVar6);
    fVar1 = pfVar4[1];
    fVar2 = *pfVar4;
  }
  else {
    iVar6 = uVar5 * 4;
    pfVar4 = (float *)(*(int *)(param_2 + 0x2c) + iVar6);
    fVar1 = *pfVar4;
    fVar2 = pfVar4[-1];
  }
  return (double)((float)(param_1 - (double)(longlong)(int)uVar5) * (fVar1 - fVar2) +
                 *(float *)(*(int *)(param_2 + 0x2c) + iVar6));
}

