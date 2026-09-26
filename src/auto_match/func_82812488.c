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
extern int fn_828123C0();
extern int fn_828132A8();
extern int fn_82813AE0();
extern int fn_82A1BB18();
extern int fn_82A1E300();
extern unsigned int uRam8320a3f0;
extern unsigned int uRam8320a3f4;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82812488(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char in_RESERVE;
  byte bVar10;
  int aiStack_40 [16];
  
  lVar7 = 0;
  lVar9 = (ulonglong)*(uint *)(param_1 + 0xd0) - 1;
  if (-1 < lVar9) {
    lVar8 = lVar9 * 0x30;
    do {
      uVar2 = *(uint *)(param_1 + 0xcc);
      iVar4 = fn_82A1BB18();
      if (*(int *)((int)lVar8 + uVar2) == iVar4) {
        lVar7 = lVar9 * 0x30 + (ulonglong)uVar2;
        break;
      }
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + -0x30;
    } while (-1 < lVar9);
  }
  lVar9 = lVar7 + 0xc;
  do {
    pcVar6 = (char *)lVar9;
    lVar9 = lVar9 + 1;
  } while (*pcVar6 != '\0');
  bVar1 = ((lVar9 - (lVar7 + 0xc)) - 1U & 0xffffffff) == 0;
  bVar10 = bVar1 << 1;
  if (!bVar1) {
    fn_828123C0();
  }
  puVar3 = *(undefined4 **)((int)lVar7 + 8);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)();
  }
  *(undefined1 *)((int)lVar7 + 0x2c) = 1;
LAB_82812534:
  while (uRam8320a3f0 != 0) {
    if (2 < uRam8320a3f0) goto code_r0x82812548;
    do {
      if (in_RESERVE != '\0') {
        uRam8320a3f4 = storeWordConditionalIndexed((ulonglong)uRam8320a3f4 + 1,0,0xffffffff8320a3f4)
        ;
        bVar10 = 2;
      }
    } while (!(bool)(bVar10 >> 1 & 1));
    if (uRam8320a3f0 == 1) {
      do {
        cVar5 = fn_82813AE0(param_1 + 8,aiStack_40);
        if ((cVar5 == '\0') && (cVar5 = fn_82813AE0(param_1 + 0x48,aiStack_40), cVar5 == '\0')
           ) {
          cVar5 = fn_82813AE0(param_1 + 0x88,aiStack_40);
          if (cVar5 != '\0') {
            *(undefined1 *)(aiStack_40[0] + 0x15) = 0;
            goto LAB_82812600;
          }
          fn_82A1E300();
        }
        else {
LAB_82812600:
          fn_828132A8(aiStack_40[0]);
        }
        bVar1 = *(char *)(param_1 + 0x78) == '\0';
        if (!bVar1) {
          do {
            if (in_RESERVE != '\0') {
              uRam8320a3f4 = storeWordConditionalIndexed
                                       ((ulonglong)uRam8320a3f4 - 1,0,0xffffffff8320a3f4);
              bVar1 = true;
            }
          } while (!bVar1);
          return 0;
        }
      } while (uRam8320a3f0 == 1);
    }
    if (uRam8320a3f0 == 2) {
      do {
        cVar5 = fn_82813AE0(param_1 + 8,aiStack_40);
        if ((cVar5 == '\0') && (cVar5 = fn_82813AE0(param_1 + 0x48,aiStack_40), cVar5 == '\0')
           ) {
          fn_82A1E300();
        }
        else {
          fn_828132A8(aiStack_40[0]);
        }
        bVar1 = *(char *)(param_1 + 0x78) == '\0';
        if (!bVar1) {
          do {
            if (in_RESERVE != '\0') {
              uRam8320a3f4 = storeWordConditionalIndexed
                                       ((ulonglong)uRam8320a3f4 - 1,0,0xffffffff8320a3f4);
              bVar1 = true;
            }
          } while (!bVar1);
          return 0;
        }
      } while (uRam8320a3f0 == 2);
    }
    while ((cVar5 = fn_82813AE0(param_1 + 8,aiStack_40), cVar5 != '\0' ||
           (cVar5 = fn_82813AE0(param_1 + 0x48,aiStack_40), cVar5 != '\0'))) {
      fn_828132A8(aiStack_40[0]);
      bVar1 = *(char *)(param_1 + 0x78) == '\0';
      if (!bVar1) {
        do {
          if (in_RESERVE != '\0') {
            uRam8320a3f4 = storeWordConditionalIndexed
                                     ((ulonglong)uRam8320a3f4 - 1,0,0xffffffff8320a3f4);
            bVar1 = true;
          }
        } while (!bVar1);
        return 0;
      }
    }
    if (in_RESERVE != '\0') {
      uRam8320a3f4 = storeWordConditionalIndexed((ulonglong)uRam8320a3f4 - 1,0,0xffffffff8320a3f4);
    }
    bVar10 = 2;
  }
  goto LAB_8281254c;
code_r0x82812548:
  if (uRam8320a3f0 == 3) {
LAB_8281254c:
    while ((uRam8320a3f0 == 0 || (uRam8320a3f0 == 3))) {
      fn_82A1E300();
      bVar1 = *(char *)(param_1 + 0x78) == '\0';
      bVar10 = bVar1 << 1;
      if (!bVar1) {
        return 0;
      }
    }
  }
  goto LAB_82812534;
}

