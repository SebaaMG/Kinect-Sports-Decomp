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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_82AA5548();


ulonglong fn_82AA5F58(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint auStack_d0 [8];
  uint auStack_b0 [44];
  
  auStack_d0[0] = 8;
  auStack_d0[2] = 2;
  auStack_d0[3] = 2;
  auStack_d0[4] = 2;
  auStack_d0[1] = 4;
  auStack_b0[4] = 2;
  uVar6 = 0x1f - LZCOUNT((int)param_4);
  auStack_b0[0] = 8;
  auStack_b0[1] = 8;
  iVar4 = (int)((uVar6 & 0xffffffff) << 2);
  auStack_b0[2] = 8;
  auStack_b0[3] = 4;
  uVar1 = *(uint *)((int)auStack_d0 + iVar4);
  uVar11 = (ulonglong)uVar1;
  uVar2 = *(uint *)((int)auStack_b0 + iVar4);
  uVar12 = (ulonglong)uVar2;
  uVar10 = param_3 - 1 & 0xfffffffc;
  trapWord(6,uVar11,0);
  trapWord(6,uVar12,0);
  uVar3 = param_1 - 1 & 0xffffffe0;
  uVar7 = param_2 - 1 &
          ~(((ulonglong)(uint)(1 << (7U - (int)uVar6 & 0x3f)) + 0x1f & 0xffffffe0) - 1);
  uVar6 = 0;
  for (; (uVar10 & 0xffffffff) < (param_3 & 0xffffffff); uVar10 = uVar10 + 1) {
    if ((uVar7 & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar8 = uVar7;
      do {
        if (uVar3 < (param_1 & 0xffffffff)) {
          uVar9 = uVar3;
          do {
            uVar5 = fn_82AA5548((uVar12 - 1) + uVar9,(uVar11 - 1) + uVar8,uVar10,
                                  (longlong)(int)(((uVar12 + param_1) - 1 & 0xffffffff) / uVar12) *
                                  (longlong)(int)uVar2,
                                  (longlong)(int)(((uVar11 + param_2) - 1 & 0xffffffff) / uVar11) *
                                  (longlong)(int)uVar1,param_4);
            if ((uVar6 & 0xffffffff) <= (uVar5 & 0xffffffff)) {
              uVar6 = uVar5;
            }
            uVar9 = uVar9 + uVar12;
          } while ((uVar9 & 0xffffffff) < (param_1 & 0xffffffff));
        }
        uVar8 = uVar8 + uVar11;
      } while ((uVar8 & 0xffffffff) < (param_2 & 0xffffffff));
    }
  }
  return uVar6;
}

