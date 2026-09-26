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


ulonglong fn_82CA4F58(int param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar5 = 3;
  lVar4 = 0;
  uVar2 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar3 = uVar2 + 0x10;
  if ((uVar3 & 0xffffffff) < 3) {
    do {
      if ((uVar3 & 0xffffffff) == 0) break;
      uVar5 = uVar5 - uVar3;
      *(int *)(puVar1 + 1) = (int)(uVar2 - uVar3);
      lVar4 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar3 & 0x7f)) << ((uint)uVar5 & 0x3f)) +
              lVar4;
      *puVar1 = *puVar1 << (uVar3 & 0x7f);
      if ((longlong)(uVar2 - uVar3) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar2 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar3 = uVar2 + 0x10;
    } while ((uVar3 & 0xffffffff) < (uVar5 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar2 - uVar5);
  lVar4 = (*puVar1 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar4;
  *puVar1 = *puVar1 << (uVar5 & 0x7f);
  if ((longlong)(uVar2 - uVar5) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if ((int)lVar4 == 7) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar5 = 5;
    lVar4 = 0;
    uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar2 = uVar3 + 0x10;
    if ((uVar2 & 0xffffffff) < 5) {
      do {
        if ((uVar2 & 0xffffffff) == 0) break;
        uVar5 = uVar5 - uVar2;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar2);
        lVar4 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar2 & 0x7f)) << ((uint)uVar5 & 0x3f)) +
                lVar4;
        *puVar1 = *puVar1 << (uVar2 & 0x7f);
        if ((longlong)(uVar3 - uVar2) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar2 = uVar3 + 0x10;
      } while ((uVar2 & 0xffffffff) < (uVar5 & 0xffffffff));
    }
    *(int *)(puVar1 + 1) = (int)(uVar3 - uVar5);
    uVar2 = (*puVar1 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar4;
    *puVar1 = *puVar1 << (uVar5 & 0x7f);
    if ((longlong)(uVar3 - uVar5) < 0) {
      fn_82C4E5E8(puVar1);
    }
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0xf8) + lVar4 + param_2;
  }
  if ((int)param_2 == 0) {
    uVar2 = (uVar2 & 0x7fffffff) * 2 - 1;
  }
  return uVar2;
}

