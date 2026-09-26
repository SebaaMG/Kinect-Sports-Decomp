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
extern int fn_825089A0();
extern int fn_8287D600();
extern int fn_82F63CA0();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82022FCC;
extern unsigned int lbl_82022FD0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_8287DB98(int param_1,char *param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  int *piVar4;
  undefined8 uVar3;
  longlong lVar5;
  double dVar6;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != *(int *)(param_2 + 0x14)) {
    fn_82F63CA0(iVar1,*(int *)(param_2 + 0x14),0);
    *(int *)(param_2 + 0x14) = iVar1;
  }
  lVar5 = 2;
  dVar6 = (double)lbl_82022FCC;
  do {
    uStack_50 = CONCAT44((float)dVar6,(((U64)(uStack_50) >> 32) & 0xFFFFFFFF));
    fn_8287D600(param_2 + 0x10,&uStack_50);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_2[0x44] = '\0';
  param_2[0x45] = '\0';
  param_2[0x46] = '\0';
  param_2[0x47] = '\0';
  param_2[0x60] = '\0';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = '\0';
  param_2[0x27] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  *(undefined4 *)(param_2 + 0x20) = lbl_82022FD0;
  iVar1 = *(int *)(param_2 + 100);
  if (iVar1 != *(int *)(param_2 + 0x68)) {
    fn_82F63CA0(iVar1,*(int *)(param_2 + 0x68),0);
    *(int *)(param_2 + 0x68) = iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x74);
  if (iVar1 != *(int *)(param_2 + 0x78)) {
    fn_82F63CA0(iVar1,*(int *)(param_2 + 0x78),0);
    *(int *)(param_2 + 0x78) = iVar1;
  }
  param_2[0x8c] = '\0';
  param_2[0x8d] = '\0';
  param_2[0x8e] = '\0';
  param_2[0x8f] = '\0';
  param_2[0x90] = '\0';
  fVar2 = lbl_821AAD20;
  param_2[0x91] = '\0';
  param_2[0x92] = '\0';
  param_2[0x93] = '\0';
  dVar6 = (double)lbl_821AAD20;
  *(float *)(param_2 + 0x88) = lbl_821AAD20;
  *(float *)(param_2 + 0x84) = fVar2;
  if (*param_2 == '\0') {
    uStack_50 = (ulonglong)*(uint *)(param_1 + 0x114);
    uStack_48 = *(uint *)(param_1 + 0x118) - uStack_50 & 0xffffffff;
    *(float *)(param_2 + 0x94) = (float)uStack_48 * lbl_82002C5C + (float)uStack_50;
  }
  else {
    *(float *)(param_2 + 0x94) = fVar2;
  }
  piVar4 = (int *)fn_825089A0();
  uVar3 = (**(code **)(*piVar4 + 0xc))();
  *(undefined8 *)(param_2 + 0x98) = uVar3;
  param_2[0xa0] = '\0';
  param_2[0xa1] = '\0';
  param_2[0xa2] = '\0';
  param_2[0xa3] = '\0';
  param_2[0xa4] = '\0';
  param_2[0xa5] = '\0';
  param_2[0xa6] = '\0';
  param_2[0xa7] = '\0';
  param_2[0xa8] = '\0';
  param_2[0xa9] = '\0';
  param_2[0xaa] = '\0';
  param_2[0xab] = '\0';
  piVar4 = (int *)fn_825089A0();
  uVar3 = (**(code **)(*piVar4 + 0xc))();
  *(undefined8 *)(param_2 + 0xb0) = uVar3;
  piVar4 = (int *)fn_825089A0();
  uVar3 = (**(code **)(*piVar4 + 0xc))();
  *(float *)(param_2 + 0xc0) = (float)dVar6;
  *(undefined8 *)(param_2 + 0xb8) = uVar3;
  param_2[200] = '\0';
  param_2[0xc9] = '\0';
  param_2[0xca] = '\0';
  param_2[0xcb] = '\0';
  iVar1 = *(int *)(param_2 + 0xcc);
  if (iVar1 != *(int *)(param_2 + 0xd0)) {
    fn_82F63CA0(iVar1,*(int *)(param_2 + 0xd0),0);
    *(int *)(param_2 + 0xd0) = iVar1;
  }
  *(float *)(param_2 + 0xdc) = (float)dVar6;
  param_2[0xe0] = '\0';
  param_2[0xe1] = '\0';
  param_2[0xe2] = '\0';
  param_2[0xe3] = '\0';
  return;
}

