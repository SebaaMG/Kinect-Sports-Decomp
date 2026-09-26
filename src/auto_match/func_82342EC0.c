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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82341008();
extern int fn_82347890();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191138;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917CC;
extern unsigned int lbl_82192510;
extern unsigned int lbl_82192568;
extern unsigned int lbl_821B1980;
extern unsigned int lbl_821B1BD0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82342EC0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar10;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [56];
  
  iVar10 = fn_82365BD8(auStack_40,param_4);
  fn_82341008(param_1,param_2,param_3,8);
  *param_1 = &lbl_821B1BD0;
  lVar8 = fn_8265C9E0(0xe0);
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    uVar9 = fn_82365BD8(auStack_38,iVar10);
    uVar11 = fn_82347890(lVar8,uVar9);
  }
  param_1[4] = uVar11;
  if (*(int *)(iVar10 + 4) != 0) {
    fn_822315A0();
  }
  *param_1 = &lbl_821B1980;
  puVar12 = (undefined4 *)fn_8265C9E0(0x5c);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12[1] = 0;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0x12] = 0;
    uVar6 = lbl_821CA460;
    uVar1 = lbl_82191138;
    *puVar12 = 0xffffffff;
    uVar7 = lbl_821CC160;
    uVar5 = lbl_82192568;
    uVar4 = lbl_82192510;
    uVar3 = lbl_821917CC;
    uVar2 = lbl_821916FC;
    uVar11 = lbl_8218E8E8;
    puVar12[2] = lbl_821CC160;
    puVar12[3] = uVar6;
    puVar12[4] = uVar7;
    puVar12[5] = uVar6;
    puVar12[0xb] = uVar1;
    puVar12[0xc] = uVar5;
    puVar12[0xd] = uVar4;
    puVar12[0xe] = uVar2;
    puVar12[0xf] = uVar6;
    puVar12[0x10] = uVar11;
    puVar12[0x11] = uVar3;
    puVar12[0x13] = 0;
    puVar12[0x14] = 0;
    puVar12[0x15] = 0;
  }
  param_1[5] = puVar12;
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

