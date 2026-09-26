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


undefined8 fn_82C57C50(ulonglong *param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  
  uVar6 = *param_4;
  bVar3 = false;
  do {
    uVar4 = *param_1;
    uVar1 = *(uint *)(param_1 + 1);
    *param_1 = uVar4 << 1;
    *(int *)(param_1 + 1) = (int)((ulonglong)uVar1 - 1);
    if ((longlong)((ulonglong)uVar1 - 1) < 0) {
      fn_82C4E5E8(param_1);
    }
    if ((longlong)uVar4 < 0) {
      uVar6 = 0;
      goto LAB_82c57f54;
    }
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    uVar8 = 3;
    iVar9 = 0;
    uVar5 = uVar4 + 0x10;
    iVar2 = 0;
    if ((uVar5 & 0xffffffff) < 3) {
      do {
        iVar9 = iVar2;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar5;
        *(int *)(param_1 + 1) = (int)(uVar4 - uVar5);
        iVar9 = ((int)(*param_1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar9;
        *param_1 = *param_1 << (uVar5 & 0x7f);
        if ((longlong)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(param_1);
        }
        uVar4 = (ulonglong)*(uint *)(param_1 + 1);
        uVar5 = uVar4 + 0x10;
        iVar2 = iVar9;
      } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    *(int *)(param_1 + 1) = (int)(uVar4 - uVar8);
    iVar9 = (int)(*param_1 >> (0x40 - uVar8 & 0x7f)) + iVar9;
    *param_1 = *param_1 << (uVar8 & 0x7f);
    if ((longlong)(uVar4 - uVar8) < 0) {
      fn_82C4E5E8(param_1);
    }
    if (1 < iVar9) {
      uVar6 = 1 << (iVar9 - 2U & 0x3f);
      goto LAB_82c57f54;
    }
    if (iVar9 != 1) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 1);
      uVar8 = 4;
      lVar7 = 0;
      uVar5 = uVar4 + 0x10;
      if (3 < (uVar5 & 0xffffffff)) goto LAB_82c57efc;
      break;
    }
    uVar4 = *param_1;
    uVar1 = *(uint *)(param_1 + 1);
    *param_1 = uVar4 << 1;
    *(int *)(param_1 + 1) = (int)((ulonglong)uVar1 - 1);
    if ((longlong)((ulonglong)uVar1 - 1) < 0) {
      fn_82C4E5E8(param_1);
    }
    if (-1 < (longlong)uVar4) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 1);
      uVar8 = 5;
      lVar7 = 0;
      uVar5 = uVar4 + 0x10;
      if (4 < (uVar5 & 0xffffffff)) goto LAB_82c57e20;
      goto LAB_82c57dc8;
    }
    if (bVar3) goto LAB_82c57f3c;
    bVar3 = true;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - uVar5;
    *(int *)(param_1 + 1) = (int)(uVar4 - uVar5);
    lVar7 = (ulonglong)(uint)((int)(*param_1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f)) +
            lVar7;
    *param_1 = *param_1 << (uVar5 & 0x7f);
    if ((longlong)(uVar4 - uVar5) < 0) {
      fn_82C4E5E8(param_1);
    }
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar8 & 0xffffffff) <= (uVar5 & 0xffffffff)) break;
    if ((uVar5 & 0xffffffff) == 0) break;
  }
LAB_82c57efc:
  *(int *)(param_1 + 1) = (int)(uVar4 - uVar8);
  uVar5 = (*param_1 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7;
  *param_1 = *param_1 << (uVar8 & 0x7f);
  if ((longlong)(uVar4 - uVar8) < 0) {
    fn_82C4E5E8(param_1);
  }
  if ((int)uVar5 == 0xf) {
LAB_82c57f3c:
    *param_4 = uVar6;
    return 1;
  }
  uVar6 = *(uint *)((int)((uVar5 & 0xffffffff) << 2) + param_2);
  goto LAB_82c57f54;
  while( true ) {
    uVar8 = uVar8 - uVar5;
    *(int *)(param_1 + 1) = (int)(uVar4 - uVar5);
    lVar7 = (ulonglong)(uint)((int)(*param_1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f)) +
            lVar7;
    *param_1 = *param_1 << (uVar5 & 0x7f);
    if ((longlong)(uVar4 - uVar5) < 0) {
      fn_82C4E5E8(param_1);
    }
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar8 & 0xffffffff) <= (uVar5 & 0xffffffff)) break;
LAB_82c57dc8:
    if ((uVar5 & 0xffffffff) == 0) break;
  }
LAB_82c57e20:
  *(int *)(param_1 + 1) = (int)(uVar4 - uVar8);
  uVar5 = (*param_1 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7;
  uVar6 = (uint)uVar5;
  *param_1 = *param_1 << (uVar8 & 0x7f);
  if ((longlong)(uVar4 - uVar8) < 0) {
    fn_82C4E5E8(param_1);
  }
  iVar2 = *(int *)((int)((uVar5 & 0xffffffff) << 2) + param_3);
  if (iVar2 == 2) {
    uVar6 = uVar6 | 0x20;
  }
  else if (iVar2 != 3) {
    *param_4 = uVar6;
    return 1;
  }
LAB_82c57f54:
  if (bVar3) {
    uVar6 = uVar6 ^ 0x3f;
  }
  *param_4 = uVar6;
  return 0;
}

