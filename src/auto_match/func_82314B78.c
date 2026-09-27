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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B6788();
extern int fn_822C5B18();
extern int fn_822C8C08();
extern int fn_822FB198();
extern int fn_823000E0();
extern int fn_82368CD8();
extern unsigned int iStack_a0;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_82314B78(int param_1)

{
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar1;
  undefined4 uVar4;
  double dVar5;
  float afStack_b0 [2];
  int aiStack_a8 [2];
  int iStack_a0;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [24];
  
  uVar4 = 0;
  dVar5 = (double)lbl_821CC160;
  *(float *)(param_1 + 0x38) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 2;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  afStack_b0[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
  *(float *)(param_1 + 0x44) = (afStack_b0[0] - lbl_821CA460) * lbl_821922D0;
  fn_82368CD8(*(undefined4 *)(param_1 + 0x10),auStack_80,auStack_90,afStack_b0,aiStack_a8);
  *(undefined4 *)(param_1 + 0x18) = 1;
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x28);
  if (aiStack_a8[0] == iVar2) {
    *(undefined4 *)(param_1 + 0x18) = uVar4;
  }
  else if (iStack_a0 == iVar2) {
    *(undefined4 *)(param_1 + 0x18) = 2;
  }
  iVar2 = fn_822B6788();
  if (iVar2 == 0) {
    fn_82230110(auStack_60,0xffffffff821af674);
    fn_822FB198(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_60);
    puVar3 = auStack_60;
  }
  else {
    fn_82230110(auStack_40,0xffffffff821af684);
    fn_822FB198(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_40);
    puVar3 = auStack_40;
  }
  fn_82230300(puVar3,1,0);
  fn_822C8C08(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x114),0xffffffff821aca8c);
  *(float *)(*(int *)(param_1 + 0xc) + 500) = (float)dVar5;
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x1e8);
  *(undefined4 *)(iVar2 + 0x578) = 0x7fe;
  uVar1 = fn_822C5B18(auStack_80,(ulonglong)*(uint *)(param_1 + 0x10) + 0x978);
  fn_823000E0(iVar2,uVar1);
  return;
}

