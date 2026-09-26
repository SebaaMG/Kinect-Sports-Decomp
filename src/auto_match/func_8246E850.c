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
extern unsigned int *auStack_10f8;
extern unsigned int *auStack_1128;
extern unsigned int *auStack_1130;
extern unsigned int *auStack_8f8;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8226D2A8();
extern int fn_8226D388();
extern int fn_8226D6A0();
extern int fn_8226FDB8();
extern int fn_82356F98();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8246F718();
extern int fn_8246F9F0();
extern unsigned int iStack_111c;
extern unsigned int iStack_1120;
extern unsigned int iStack_1124;
extern unsigned int iStack_112c;
extern unsigned int lbl_832766D4;
extern unsigned int uStack_10fc;
extern unsigned int uStack_1100;
extern unsigned int uStack_1108;
extern unsigned int uStack_1114;
extern unsigned int uStack_1118;


void fn_8246E850(int param_1,int *param_2,ulonglong param_3,ulonglong param_4,int param_5,
                  undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar6;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_1130 [4];
  int iStack_112c;
  undefined1 auStack_1128 [4];
  int iStack_1124;
  int iStack_1120;
  int iStack_111c;
  undefined4 uStack_1118;
  undefined4 uStack_1114;
  undefined4 uStack_1108;
  undefined4 uStack_1100;
  undefined4 uStack_10fc;
  undefined1 auStack_10f8 [2048];
  undefined1 auStack_8f8 [2048];
  char acStack_f8 [128];
  char acStack_78 [120];
  
  fn_8226D2A8(&iStack_1120);
  iVar3 = fn_8226FDB8(*(undefined4 *)(param_1 + 0x308),1);
  if (iVar3 != 0) {
    fn_8226D6A0(*(undefined4 *)(param_1 + 0x308));
  }
  fn_82356F98(auStack_1130);
  puVar8 = (undefined4 *)(param_1 + 0x310);
  fn_823F2E20(puVar8,auStack_1130);
  if (iStack_112c != 0) {
    fn_822315A0();
  }
  fn_82356F98(auStack_1130);
  fn_823F2E20((int *)(param_1 + 0x300),auStack_1130);
  if (iStack_112c != 0) {
    fn_822315A0();
  }
  iVar3 = param_2[1];
  iVar2 = *param_2;
  uStack_1114 = 1;
  uStack_10fc = 1;
  iStack_1120 = 0;
  iVar9 = 0;
  if ((iVar3 != 0) && (cVar6 = fn_8223AAC0(iVar3), cVar6 != '\0')) {
    iStack_1120 = iVar2;
    iVar9 = iVar3;
  }
  bVar1 = iStack_111c != 0;
  iStack_111c = iVar9;
  if (bVar1) {
    fn_822315A0();
  }
  uStack_1118 = *(undefined4 *)(*param_2 + 0x130);
  uStack_1108 = 0;
  if (param_5 == 0) {
    acStack_f8[0] = '\0';
  }
  else {
    pcVar7 = acStack_f8;
    do {
      if (acStack_78 <= pcVar7) break;
      cVar6 = pcVar7[param_5 - (int)acStack_f8];
      *pcVar7 = cVar6;
      pcVar7 = pcVar7 + 1;
    } while (cVar6 != '\0');
    if (pcVar7 == acStack_78) {
      pcVar7[-1] = '\0';
    }
  }
  uStack_1100 = param_6;
  if ((param_3 & 0xffffffff) != 0) {
    fn_8246F718(param_1,param_3,auStack_10f8,0x400);
  }
  if ((param_4 & 0xffffffff) != 0) {
    fn_8246F718(param_1,param_4,auStack_8f8,0x400);
  }
  uVar4 = fn_8226D388(&iStack_1120);
  *(undefined4 *)(param_1 + 0x308) = uVar4;
  iVar3 = param_2[1];
  iVar2 = *param_2;
  iVar9 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    cVar6 = fn_8223AAC0(iVar3);
    if (cVar6 != '\0') {
      iVar9 = iVar2;
      iVar10 = iVar3;
    }
  }
  iVar3 = *(int *)(param_1 + 0x304);
  *(int *)(param_1 + 0x304) = iVar10;
  *(int *)(param_1 + 0x300) = iVar9;
  if (iVar3 != 0) {
    fn_822315A0();
  }
  puVar5 = (undefined4 *)fn_82365BD8(auStack_1128,param_2);
  uVar4 = puVar5[1];
  puVar5[1] = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(param_1 + 0x314) = uVar4;
  uVar4 = *puVar5;
  *puVar5 = *puVar8;
  *puVar8 = uVar4;
  if (iStack_1124 != 0) {
    fn_822315A0();
  }
  iVar3 = param_1 + 0x9c;
  *(undefined4 *)(lbl_832766D4 + 0x30c) = 0;
  bVar1 = *(int *)(param_1 + 0x420) == 0;
  *(uint *)(param_1 + 0x420) = (uint)bVar1;
  if (!bVar1) {
    iVar3 = param_1 + 0xa0;
  }
  fn_8246F9F0(param_1,iVar3);
  if (iStack_111c != 0) {
    fn_822315A0();
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

