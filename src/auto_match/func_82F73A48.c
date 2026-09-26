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
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82F728D0();
extern int fn_82F73108();
extern int fn_82F73188();
extern int fn_82F739E8();
extern unsigned int *lbl_832635C0;


undefined4 * fn_82F73A48(undefined4 *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  
  uVar9 = 0;
  if (*lbl_832635C0 == 'Q') {
    lbl_832635C0 = lbl_832635C0 + 1;
    uVar9 = 0xffffffff82169dac;
  }
  cVar2 = *lbl_832635C0;
  lVar7 = (longlong)cVar2;
  if (lVar7 == 0) {
LAB_82f73a9c:
    fn_82F728D0(param_1,1);
    return param_1;
  }
  if ((cVar2 < '0') || ('9' < cVar2)) {
    lVar6 = 0;
    while (iVar8 = (int)lVar7, iVar8 != 0x40) {
      if (iVar8 == 0) goto LAB_82f73a9c;
      if ((iVar8 < 0x41) || (0x50 < iVar8)) {
        *(undefined1 *)((int)param_1 + 5) = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 2;
        return param_1;
      }
      lbl_832635C0 = lbl_832635C0 + 1;
      lVar6 = (longlong)(iVar8 + -0x41) + lVar6 * 0x10;
      lVar7 = (longlong)*lbl_832635C0;
    }
    lbl_832635C0 = lbl_832635C0 + 1;
    bVar1 = (uVar9 & 0xffffffff) != 0;
    if (param_2 != '\0') {
      if (!bVar1) {
        puVar4 = (undefined4 *)fn_82F73188(auStack_30);
        goto LAB_82f73ba4;
      }
      uVar3 = fn_82F73188(auStack_20);
      goto LAB_82f73ae4;
    }
    if (bVar1) {
      puVar5 = auStack_20;
      goto LAB_82f73ae0;
    }
    puVar5 = auStack_30;
  }
  else {
    cVar2 = *lbl_832635C0;
    lbl_832635C0 = lbl_832635C0 + 1;
    lVar6 = (longlong)(cVar2 + -0x2f);
    if ((uVar9 & 0xffffffff) != 0) {
      puVar5 = auStack_30;
LAB_82f73ae0:
      uVar3 = fn_82F73108(puVar5,lVar6);
LAB_82f73ae4:
      puVar4 = (undefined4 *)fn_82F739E8(auStack_28,uVar9,uVar3);
      goto LAB_82f73ba4;
    }
    puVar5 = auStack_20;
  }
  puVar4 = (undefined4 *)fn_82F73108(puVar5,lVar6);
LAB_82f73ba4:
  *param_1 = *puVar4;
  param_1[1] = puVar4[1];
  return param_1;
}

