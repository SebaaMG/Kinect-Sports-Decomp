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
extern unsigned int *auStack_50;
extern int fn_828F0170();
extern int fn_82975B00();
extern int fn_82F65B18();
extern int fn_82F66A80();
extern int fn_82F6DF30();
extern unsigned int uStack_4c;


undefined8 fn_829549B8(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar2;
  char cVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 auStack_50 [4];
  uint uStack_4c;
  
  iVar5 = *(int *)(param_2 + 0x40);
  puVar10 = (undefined1 *)0x0;
  puVar7 = (undefined1 *)0x0;
  puVar8 = (undefined1 *)0x0;
  if (iVar5 != 0) {
    do {
      iVar4 = *(int *)(iVar5 + 8);
      puVar9 = puVar8;
      if (*(int *)(iVar4 + 4) == 0x12) {
        iVar3 = 0;
        if (*(int *)(iVar4 + 0x10) != 0) {
          iVar3 = *(int *)(*(int *)(iVar4 + 0x10) + 0x18);
        }
        puVar12 = (undefined1 *)0x0;
        if (*(int *)(iVar4 + 0x14) != 0) {
          puVar12 = *(undefined1 **)(*(int *)(iVar4 + 0x14) + 0x18);
        }
        if (iVar3 == 0) {
          if ((puVar12 != (undefined1 *)0x0) && (iVar4 = fn_82F6DF30(*puVar12), iVar4 == 99)) {
            puVar7 = puVar12;
          }
        }
        else if (((((puVar12 != (undefined1 *)0x0) &&
                   (iVar4 = fn_828F0170(iVar3,0,auStack_50), -1 < iVar4)) &&
                  (iVar4 = fn_82F6DF30(*puVar12), iVar4 == 99)) &&
                 ((puVar9 = puVar12, *(uint *)(param_1 + 200) != uStack_4c &&
                  (puVar9 = puVar8, ((*(uint *)(param_1 + 200) ^ uStack_4c) & 0xffff0000) == 0))))
                && ((uStack_4c & 0xffff) == 0)) {
          puVar10 = puVar12;
        }
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      puVar8 = puVar9;
    } while (iVar5 != 0);
    if (puVar9 != (undefined1 *)0x0) goto LAB_82954ad4;
  }
  puVar9 = puVar10;
  if ((puVar10 == (undefined1 *)0x0) && (puVar9 = puVar7, puVar7 == (undefined1 *)0x0)) {
    return 0;
  }
LAB_82954ad4:
  if (*(int *)(param_1 + 0x15c) == 0) {
    uVar1 = *(ushort *)(param_3 + 10);
  }
  else {
    iVar5 = fn_82F6DF30(*puVar9);
    if (iVar5 != 99) {
      return 0;
    }
    iVar5 = fn_82F66A80(puVar9[1]);
    if (iVar5 == 0) {
      return 0;
    }
    cVar6 = puVar9[2];
    pcVar11 = puVar9 + 2;
    while (iVar5 = fn_82F66A80(cVar6), iVar5 != 0) {
      pcVar11 = pcVar11 + 1;
      cVar6 = *pcVar11;
    }
    if (*pcVar11 != '\0') {
      return 0;
    }
    uVar2 = fn_82F65B18(puVar9 + 1);
    if (0x1fff < (uVar2 & 0xffffffff)) {
      fn_82975B00(param_1,0,0,0xffffffff8202f328,puVar9 + 2);
      return 0xffffffff80004005;
    }
    uVar1 = (ushort)((uVar2 & 0xffffffff) << 2) | *(ushort *)(param_3 + 10);
  }
  *(ushort *)(param_3 + 10) = uVar1 | 2;
  return 0;
}

