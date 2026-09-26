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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_50;
extern int fn_82CE5458();
extern int fn_82CEA280();
extern int fn_82DBE7C8();
extern int fn_82DBE8C8();
extern int fn_82DBED98();
extern unsigned int lbl_82131F88;
extern unsigned int uStack_58;


int fn_82DEADA8(int param_1,int param_2,undefined1 *param_3,int *param_4,undefined1 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int iVar7;
  undefined8 uVar6;
  char cVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte abStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [80];
  
  iVar1 = *(int *)(param_1 + 0x98);
  dVar9 = (double)(**(code **)(**(int **)(param_2 + 0xc) + 0x10))();
  uStack_58 = CONCAT44((float)dVar9,(((U64)(uStack_58) >> 32) & 0xFFFFFFFF));
  fn_82CE5458(abStack_60,&uStack_58);
  uStack_58 = (longlong)*(float *)(&lbl_82131F88 + (uint)abStack_60[0] * 4);
  *param_5 = (undefined1)uStack_58;
  if (iVar1 != 0) {
    if (param_1 == *(int *)(param_2 + 0x14)) {
      iVar7 = fn_82DBE7C8();
    }
    else {
      iVar7 = fn_82DBE8C8(*(undefined4 *)(param_2 + 0xc));
    }
    puVar4 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 8);
    puVar5 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar11;
    puVar5[3] = uVar12;
    uVar6 = fn_82DBED98(uVar3,uVar2,auStack_50);
    *param_4 = (int)uVar6;
    if (((int)uVar6 != -1) && (cVar8 = fn_82CEA280(iVar1 + 0x1c,uVar6,0), cVar8 != '\0')) {
      return iVar1;
    }
    if (*(char *)(iVar1 + 0x14) != '\0') {
      *param_3 = 1;
      return iVar1;
    }
  }
  return 0;
}

