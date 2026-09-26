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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82547CF0();


ulonglong fn_82A98BA8(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint auStack_a0 [8];
  uint auStack_80 [32];
  
  auStack_a0[0] = 8;
  auStack_a0[1] = 8;
  auStack_a0[2] = 8;
  auStack_a0[4] = 2;
  auStack_a0[3] = 4;
  auStack_80[0] = 8;
  uVar5 = 0x1f - LZCOUNT((int)param_3);
  auStack_80[2] = 2;
  auStack_80[3] = 2;
  iVar3 = (int)((uVar5 & 0xffffffff) << 2);
  auStack_80[4] = 2;
  auStack_80[1] = 4;
  uVar1 = *(uint *)((int)auStack_a0 + iVar3);
  uVar10 = (ulonglong)uVar1;
  uVar2 = param_1 - 1 & 0xffffffe0;
  uVar9 = param_2 - 1 &
          ~(((ulonglong)(uint)(1 << (7U - (int)uVar5 & 0x3f)) + 0x1f & 0xffffffe0) - 1);
  uVar7 = (ulonglong)*(uint *)((int)auStack_80 + iVar3);
  trapWord(6,uVar10,0);
  uVar5 = 0;
  if ((uVar9 & 0xffffffff) < (param_2 & 0xffffffff)) {
    lVar6 = uVar9 + uVar7 + -1;
    do {
      if (uVar2 < (param_1 & 0xffffffff)) {
        uVar8 = uVar2;
        do {
          uVar4 = fn_82547CF0((uVar10 - 1) + uVar8,lVar6,
                               (longlong)(int)(((uVar10 + param_1) - 1 & 0xffffffff) / uVar10) *
                               (longlong)(int)uVar1,param_3);
          if ((uVar5 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
            uVar5 = uVar4;
          }
          uVar8 = uVar8 + uVar10;
        } while ((uVar8 & 0xffffffff) < (param_1 & 0xffffffff));
      }
      uVar9 = uVar9 + uVar7;
      lVar6 = lVar6 + uVar7;
    } while ((uVar9 & 0xffffffff) < (param_2 & 0xffffffff));
  }
  return uVar5;
}

