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
extern unsigned int *auStack_1470;
extern int fn_82A29FE0();
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68278();
extern int fn_82F682B0();
extern int fn_82F855A8();
extern unsigned int lbl_8329F620;


longlong fn_82F7C758(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar7;
  char *pcVar6;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  char *pcVar12;
  uint auStack_1470 [4];
  char acStack_1460 [5216];
  
  uVar9 = 0;
  lVar8 = 0;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
LAB_82f7c794:
    puVar2 = (undefined4 *)fn_82F68278();
    *puVar2 = 0;
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    return -1;
  }
  iVar1 = (int)param_1 >> 5;
  iVar11 = (param_1 & 0x1f) * 0x48;
  cVar7 = *(char *)((&lbl_8329F620)[iVar1] + iVar11 + 0x28) >> 1;
  if (((cVar7 == '\x02') || (cVar7 == '\x01')) && ((~param_3 & 1) == 0)) goto LAB_82f7c794;
  if ((*(byte *)((&lbl_8329F620)[iVar1] + iVar11 + 4) & 0x20) != 0) {
    fn_82F855A8(param_1,0,2);
  }
  if ((*(byte *)((undefined4 *)((&lbl_8329F620)[iVar1] + iVar11) + 1) & 0x80) == 0) {
    iVar3 = fn_82A29FE0(*(undefined4 *)((&lbl_8329F620)[iVar1] + iVar11),param_2,param_3,
                              auStack_1470,0);
    if (iVar3 == 0) {
LAB_82f7c904:
      uVar10 = thunk_FUN_82a2b798();
    }
    else {
      uVar9 = (ulonglong)auStack_1470[0];
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 0;
    pcVar12 = param_2;
    if (param_3 == 0) goto LAB_82f7c94c;
    do {
      pcVar6 = acStack_1460;
      uVar5 = 0;
      uVar4 = (int)pcVar12 - (int)param_2;
      do {
        if (param_3 <= uVar4) break;
        cVar7 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        uVar4 = uVar4 + 1;
        if (cVar7 == '\n') {
          lVar8 = lVar8 + 1;
          *pcVar6 = '\r';
          pcVar6 = pcVar6 + 1;
          uVar5 = uVar5 + 1;
        }
        uVar5 = uVar5 + 1;
        *pcVar6 = cVar7;
        pcVar6 = pcVar6 + 1;
      } while (uVar5 < 0x13ff);
      iVar3 = fn_82A29FE0(*(undefined4 *)((&lbl_8329F620)[iVar1] + iVar11),acStack_1460,
                                (int)pcVar6 - (int)acStack_1460,auStack_1470,0);
      if (iVar3 == 0) goto LAB_82f7c904;
      uVar9 = auStack_1470[0] + uVar9;
    } while (((int)pcVar6 - (int)acStack_1460 <= (int)auStack_1470[0]) &&
            ((uint)((int)pcVar12 - (int)param_2) < param_3));
  }
  if ((int)uVar9 != 0) {
    return uVar9 - lVar8;
  }
  if ((uVar10 & 0xffffffff) != 0) {
    if ((uVar10 & 0xffffffff) == 5) {
      puVar2 = (undefined4 *)fn_82F68240();
      *puVar2 = 9;
      puVar2 = (undefined4 *)fn_82F68278();
      *puVar2 = 5;
      return -1;
    }
    fn_82F682B0(uVar10);
    return -1;
  }
LAB_82f7c94c:
  if (((*(byte *)((&lbl_8329F620)[iVar1] + iVar11 + 4) & 0x40) != 0) && (*param_2 == '\x1a')) {
    return 0;
  }
  puVar2 = (undefined4 *)fn_82F68240();
  *puVar2 = 0x1c;
  puVar2 = (undefined4 *)fn_82F68278();
  *puVar2 = 0;
  return -1;
}

