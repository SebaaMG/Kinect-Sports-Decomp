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
extern int iRam83231e40;
extern int iRam83231e44;


undefined8 fn_82C56B38(int param_1)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar7 = 5;
  iVar5 = 0;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar2 = 0;
  if ((uVar4 & 0xffffffff) < 5) {
    do {
      iVar5 = iVar2;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar5 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar5;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar2 = iVar5;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  iVar5 = (int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) + iVar5;
  *puVar1 = *puVar1 << (uVar7 & 0x7f);
  if ((longlong)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0xe80) = iVar5;
  uVar7 = 0xb;
  iVar6 = 0;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar2 = 0;
  iRam83231e44 = iVar5;
  if ((uVar4 & 0xffffffff) < 0xb) {
    do {
      iVar6 = iVar2;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar6 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar6;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar2 = iVar6;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  iVar6 = (int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) + iVar6;
  *puVar1 = *puVar1 << (uVar7 & 0x7f);
  if ((longlong)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0xe84) = iVar6;
  uVar7 = 1;
  iVar5 = 0;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iRam83231e40 = iVar6;
  *(undefined4 *)(param_1 + 0xf74) = 1;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar2 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    do {
      iVar5 = iVar2;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar5 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar5;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar2 = iVar5;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  *puVar1 = uVar4 << (uVar7 & 0x7f);
  if ((longlong)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar8 = 1;
  *(int *)(param_1 + 0xf68) = (int)(uVar4 >> (0x40 - uVar7 & 0x7f)) + iVar5;
  iVar5 = 0;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar2 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    do {
      iVar5 = iVar2;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar8 = uVar8 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar5 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar5;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar2 = iVar5;
    } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar8);
  *puVar1 = uVar4 << (uVar8 & 0x7f);
  if ((longlong)(uVar3 - uVar8) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0xf6c) = (int)(uVar4 >> (0x40 - uVar8 & 0x7f)) + iVar5;
  uVar7 = 1;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iVar5 = 0;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar2 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    do {
      iVar5 = iVar2;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar5 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar5;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar2 = iVar5;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  *puVar1 = uVar4 << (uVar7 & 0x7f);
  if ((longlong)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0x1b8) = (int)(uVar4 >> (0x40 - uVar7 & 0x7f)) + iVar5;
  iVar5 = 0;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar7 = 1;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar2 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    do {
      iVar5 = iVar2;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar5 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar5;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar2 = iVar5;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  *puVar1 = uVar4 << (uVar7 & 0x7f);
  if ((longlong)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0xf64) = (int)(uVar4 >> (0x40 - uVar7 & 0x7f)) + iVar5;
  iVar5 = 0;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar7 = 1;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar2 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    do {
      iVar5 = iVar2;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar5 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar5;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar2 = iVar5;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  *puVar1 = uVar4 << (uVar7 & 0x7f);
  if ((longlong)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0x1c0) = (int)(uVar4 >> (0x40 - uVar7 & 0x7f)) + iVar5;
  uVar7 = 1;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iVar5 = 0;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar2 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    do {
      iVar5 = iVar2;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar5 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar5;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar2 = iVar5;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  *puVar1 = uVar4 << (uVar7 & 0x7f);
  if ((longlong)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 400) = (int)(uVar4 >> (0x40 - uVar7 & 0x7f)) + iVar5;
  uVar7 = 3;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iVar5 = 0;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar2 = 0;
  if ((uVar4 & 0xffffffff) < 3) {
    do {
      iVar5 = iVar2;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar5 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar5;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar2 = iVar5;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  *puVar1 = uVar4 << (uVar7 & 0x7f);
  if ((longlong)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0x3ca8) = (int)(uVar4 >> (0x40 - uVar7 & 0x7f)) + iVar5;
  return 0;
}

