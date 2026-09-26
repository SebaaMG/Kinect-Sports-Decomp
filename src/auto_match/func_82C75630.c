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


void fn_82C75630(int *param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  int iVar9;
  ulonglong uVar8;
  
  if ((*(byte *)(param_1 + 0x137) < 8) ||
     ((((param_1[0x147] != 0 && (param_1[0x147] != 4)) || (param_1[0x124] == 7)) &&
      (*(char *)((int)param_1 + 0x1b) != '\0')))) {
    puVar1 = (ulonglong *)*param_1;
    uVar8 = 3;
    lVar7 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar4 = uVar5 + 0x10;
    if ((uVar4 & 0xffffffff) < 3) {
      do {
        if ((uVar4 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar4;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar4);
        lVar7 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar8 & 0x3f)) +
                lVar7;
        *puVar1 = *puVar1 << (uVar4 & 0x7f);
        if ((longlong)(uVar5 - uVar4) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar4 = uVar5 + 0x10;
      } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
    uVar4 = (*puVar1 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7;
    *puVar1 = *puVar1 << (uVar8 & 0x7f);
    if ((longlong)(uVar5 - uVar8) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(char *)((int)param_1 + 0x4df) = (char)uVar4;
    if ((uVar4 & 0xff) != 0) goto LAB_82c75888;
    if (param_1[0x124] < 6) {
      plVar3 = (longlong *)*param_1;
      lVar7 = *plVar3;
      uVar2 = *(uint *)(plVar3 + 1);
      *plVar3 = lVar7 << 1;
      *(int *)(plVar3 + 1) = (int)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      cVar6 = '\b' - (char)(lVar7 >> 0x3f);
    }
    else {
      puVar1 = (ulonglong *)*param_1;
      uVar8 = 2;
      iVar9 = 0;
      cVar6 = '\0';
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar5 + 0x10;
      if ((uVar4 & 0xffffffff) < 2) {
        do {
          cVar6 = (char)iVar9;
          if ((uVar4 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar4;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar4);
          iVar9 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar9;
          cVar6 = (char)iVar9;
          *puVar1 = *puVar1 << (uVar4 & 0x7f);
          if ((longlong)(uVar5 - uVar4) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar4 = uVar5 + 0x10;
        } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      uVar4 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
      *puVar1 = uVar4 << (uVar8 & 0x7f);
      if ((longlong)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      cVar6 = (char)(uVar4 >> (0x40 - uVar8 & 0x7f)) + cVar6 + '\b';
    }
  }
  else {
    iVar9 = 0;
    uVar5 = 0;
    do {
      if ((int)uVar5 != 0) goto LAB_82c756c8;
      puVar1 = (ulonglong *)*param_1;
      uVar4 = *puVar1;
      uVar2 = *(uint *)(puVar1 + 1);
      uVar5 = uVar4 >> 0x3f;
      *puVar1 = uVar4 << 1;
      *(int *)(puVar1 + 1) = (int)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 6);
    if (-1 < (longlong)uVar4) {
      *(undefined1 *)((int)param_1 + 0x4df) = 8;
      goto LAB_82c75888;
    }
LAB_82c756c8:
    cVar6 = (char)iVar9 + '\x01';
  }
  *(char *)((int)param_1 + 0x4df) = cVar6;
LAB_82c75888:
  puVar1 = (ulonglong *)*param_1;
  uVar8 = 2;
  iVar9 = 0;
  cVar6 = '\0';
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar5 + 0x10;
  if ((uVar4 & 0xffffffff) < 2) {
    do {
      cVar6 = (char)iVar9;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar8 = uVar8 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar4);
      iVar9 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar9;
      cVar6 = (char)iVar9;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar5 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar5 + 0x10;
    } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
  *puVar1 = uVar4 << (uVar8 & 0x7f);
  if ((longlong)(uVar5 - uVar8) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(char *)(param_1 + 0x138) = (char)(uVar4 >> (0x40 - uVar8 & 0x7f)) + cVar6 + '\x03';
  return;
}

