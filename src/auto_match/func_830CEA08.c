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


undefined8 fn_830CEA08(int *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  
  puVar1 = (ulonglong *)*param_1;
  uVar2 = param_1[0x18e];
  uVar7 = (ulonglong)uVar2;
  uVar8 = 9;
  iVar9 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar6 = uVar5 + 0x10;
  iVar4 = 0;
  if ((uVar6 & 0xffffffff) < 9) {
    do {
      iVar9 = iVar4;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar8 = uVar8 - uVar6;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar6);
      iVar9 = ((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar9;
      *puVar1 = *puVar1 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar6 = uVar5 + 0x10;
      iVar4 = iVar9;
    } while ((uVar6 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
  iVar9 = (int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) + iVar9;
  *puVar1 = *puVar1 << (uVar8 & 0x7f);
  if ((longlong)(uVar5 - uVar8) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if ((param_1[0x18d] == 1) && (param_1[0x157] == 1)) {
    if (iVar9 != (uint)(*(ushort *)(param_1 + 0xd) >> 1) + param_2) {
      return 1;
    }
  }
  else if (iVar9 != param_2) {
    return 1;
  }
  puVar1 = (ulonglong *)*param_1;
  uVar8 = 1;
  iVar9 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar6 = uVar5 + 0x10;
  iVar4 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar9 = iVar4;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar8 = uVar8 - uVar6;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar6);
      iVar9 = ((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar9;
      *puVar1 = *puVar1 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar6 = uVar5 + 0x10;
      iVar4 = iVar9;
    } while ((uVar6 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  uVar6 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
  *puVar1 = uVar6 << (uVar8 & 0x7f);
  if ((longlong)(uVar5 - uVar8) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if (((int)(uVar6 >> (0x40 - uVar8 & 0x7f)) + iVar9 != 0) && (0 < (int)uVar2)) {
    while( true ) {
      plVar3 = (longlong *)*param_1;
      uVar5 = (ulonglong)*(uint *)(plVar3 + 1);
      uVar6 = uVar5 + 0x10;
      if ((int)uVar7 < 0x21) break;
      uVar7 = uVar7 - 0x20;
      uVar8 = 0x20;
      if ((uVar6 & 0xffffffff) < 0x20) {
        do {
          if ((uVar6 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar6;
          *plVar3 = *plVar3 << (uVar6 & 0x7f);
          *(int *)(plVar3 + 1) = (int)(uVar5 - uVar6);
          if ((longlong)(uVar5 - uVar6) < 0) {
            fn_82C4E5E8(plVar3);
          }
          uVar5 = (ulonglong)*(uint *)(plVar3 + 1);
          uVar6 = uVar5 + 0x10;
        } while ((uVar6 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      *plVar3 = *plVar3 << (uVar8 & 0x7f);
      *(int *)(plVar3 + 1) = (int)(uVar5 - uVar8);
      if ((longlong)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(plVar3);
      }
      if ((int)uVar7 < 1) {
        return 0;
      }
    }
    if (((uVar7 & 0xffffffff) < 0x21) && ((uVar7 & 0xffffffff) != 0)) {
      if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
        do {
          if ((uVar6 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar6;
          *plVar3 = *plVar3 << (uVar6 & 0x7f);
          *(int *)(plVar3 + 1) = (int)(uVar5 - uVar6);
          if ((longlong)(uVar5 - uVar6) < 0) {
            fn_82C4E5E8(plVar3);
          }
          uVar5 = (ulonglong)*(uint *)(plVar3 + 1);
          uVar6 = uVar5 + 0x10;
        } while ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      *plVar3 = *plVar3 << (uVar7 & 0x7f);
      *(int *)(plVar3 + 1) = (int)(uVar5 - uVar7);
      if ((longlong)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(plVar3);
      }
    }
  }
  return 0;
}

