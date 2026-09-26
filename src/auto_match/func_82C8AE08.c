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
extern int fn_82C4E5E8();
extern int fn_82C565B0();
extern int fn_82CAD120();
extern int fn_82F691F0();


void fn_82C8AE08(int param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar7 = 1;
  lVar6 = 0;
  uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar5 = uVar4 + 0x10;
  if ((uVar5 & 0xffffffff) == 0) {
    do {
      if ((uVar5 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar5;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      lVar6 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar7 & 0x3f)) +
              lVar6;
      *puVar1 = *puVar1 << (uVar5 & 0x7f);
      if ((longlong)(uVar4 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar4 - uVar7);
  uVar5 = (*puVar1 >> (0x40 - uVar7 & 0x7f) & 0xffffffff) + lVar6;
  *puVar1 = *puVar1 << (uVar7 & 0x7f);
  if ((longlong)(uVar4 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0x7ac) = (int)((uVar5 & 0xffffffff) << 6) - (int)uVar5;
  if (*(int *)(param_1 + 0x3cb0) < 6) {
    uVar2 = *(uint *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0x13c) = uVar2 << 1;
    *(uint *)(param_1 + 0x144) = ~uVar2 & 1;
    *(uint *)(param_1 + 0x140) = uVar2 - (~uVar2 & 1);
  }
  else {
    fn_82C565B0(param_1,*(undefined4 *)(param_1 + 0xf8));
  }
  fn_82CAD120(*(undefined4 *)(param_1 + 0x7b8),*(undefined4 *)(param_1 + 0xf8),1);
  iVar3 = *(int *)(param_1 + 0x13c) >> 1;
  *(int *)(param_1 + 0x130) = iVar3;
  *(int *)(param_1 + 300) = iVar3;
  if (4 < iVar3) {
    *(int *)(param_1 + 0x130) = (iVar3 + 3 >> 3) + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x130);
  uVar5 = (longlong)(*(int *)(param_1 + 0x13c) >> 2) + 0x10000;
  uVar4 = (longlong)((int)uVar2 >> 1) + 0x10000;
  trapWord(6,(longlong)iVar3,0);
  trapWord(5,(longlong)iVar3 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
  trapWord(6,(ulonglong)uVar2,0);
  trapWord(5,(ulonglong)uVar2 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(undefined4 *)(param_1 + 0x6ec),0,0x100);
}

