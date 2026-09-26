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
extern int fn_8254A648();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_822715B0(void)

{
  int iVar1;
  undefined4 uVar2;
  double extraout_f1;
  double dVar3;
  
  iVar1 = fn_82F6A548();
  dVar3 = (double)(float)((double)*(float *)(iVar1 + 0x124) * extraout_f1);
  *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)(iVar1 + 0x1c8);
  *(float *)(iVar1 + 0x164) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x1cc) - (double)*(float *)(iVar1 + 0x164)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x164));
  *(float *)(iVar1 + 0x168) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x1d0) - (double)*(float *)(iVar1 + 0x168)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x168));
  *(float *)(iVar1 + 0x16c) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x1d4) - (double)*(float *)(iVar1 + 0x16c)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x16c));
  *(float *)(iVar1 + 0x18c) =
       (float)((double)(float)((double)*(float *)(iVar1 + 500) - (double)*(float *)(iVar1 + 0x18c))
               * dVar3 + (double)*(float *)(iVar1 + 0x18c));
  *(float *)(iVar1 + 400) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x1f8) - (double)*(float *)(iVar1 + 400))
               * dVar3 + (double)*(float *)(iVar1 + 400));
  *(float *)(iVar1 + 0x198) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x200) - (double)*(float *)(iVar1 + 0x198)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x198));
  *(float *)(iVar1 + 0x19c) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x204) - (double)*(float *)(iVar1 + 0x19c)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x19c));
  *(float *)(iVar1 + 0x1a0) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x208) - (double)*(float *)(iVar1 + 0x1a0)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x1a0));
  uVar2 = fn_8254A648(dVar3,*(undefined4 *)(iVar1 + 0x1d8),*(undefined4 *)(iVar1 + 0x170));
  *(undefined4 *)(iVar1 + 0x170) = uVar2;
  uVar2 = fn_8254A648(dVar3,*(undefined4 *)(iVar1 + 0x1dc),*(undefined4 *)(iVar1 + 0x174));
  *(undefined4 *)(iVar1 + 0x174) = uVar2;
  uVar2 = fn_8254A648(dVar3,*(undefined4 *)(iVar1 + 0x1e4),*(undefined4 *)(iVar1 + 0x17c));
  *(undefined4 *)(iVar1 + 0x17c) = uVar2;
  uVar2 = fn_8254A648(dVar3,*(undefined4 *)(iVar1 + 0x1e8),*(undefined4 *)(iVar1 + 0x180));
  *(undefined4 *)(iVar1 + 0x180) = uVar2;
  uVar2 = fn_8254A648(dVar3,*(undefined4 *)(iVar1 + 0x1ec),*(undefined4 *)(iVar1 + 0x184));
  *(undefined4 *)(iVar1 + 0x184) = uVar2;
  *(undefined4 *)(iVar1 + 0x128) = *(undefined4 *)(iVar1 + 0x144);
  *(float *)(iVar1 + 300) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x148) - (double)*(float *)(iVar1 + 300))
               * dVar3 + (double)*(float *)(iVar1 + 300));
  *(float *)(iVar1 + 0x130) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x14c) - (double)*(float *)(iVar1 + 0x130)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x130));
  *(float *)(iVar1 + 0x134) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x150) - (double)*(float *)(iVar1 + 0x134)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x134));
  *(float *)(iVar1 + 0x138) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x154) - (double)*(float *)(iVar1 + 0x138)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x138));
  *(float *)(iVar1 + 0x13c) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x158) - (double)*(float *)(iVar1 + 0x13c)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x13c));
  *(float *)(iVar1 + 0x140) =
       (float)((double)(float)((double)*(float *)(iVar1 + 0x15c) - (double)*(float *)(iVar1 + 0x140)
                              ) * dVar3 + (double)*(float *)(iVar1 + 0x140));
  fn_82F6A594();
  return;
}

