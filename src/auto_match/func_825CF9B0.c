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
extern unsigned int *auStack_34;
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_826438C0();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_82192510;
extern unsigned int lbl_821956C8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825CF9B0(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  fn_82520158(0xffffffff821c9494,auStack_40,0);
  fn_82520158(0xffffffff821c94b0,auStack_3c,0);
  fn_82520158(0xffffffff821c94d0,auStack_38,0);
  fn_82520158(0xffffffff821c94ec,auStack_34,0);
  fn_82520158(0xffffffff821c9504,&uStack_30,0);
  uVar5 = fn_8251F720(auStack_40,0);
  uVar6 = fn_82631830();
  *(undefined4 *)(param_2 + 0x20) = uVar6;
  fn_8251FA58(uVar5);
  uVar5 = fn_8251F720(auStack_3c,0);
  uVar6 = fn_82631488();
  *(undefined4 *)(param_2 + 0x24) = uVar6;
  fn_8251FA58(uVar5);
  uVar5 = fn_8251F720(auStack_38,0);
  uVar6 = fn_82631830();
  *(undefined4 *)(param_2 + 0x28) = uVar6;
  fn_8251FA58(uVar5);
  uVar5 = fn_8251F720(auStack_34,0);
  uVar6 = fn_82631488();
  *(undefined4 *)(param_2 + 0x2c) = uVar6;
  fn_8251FA58(uVar5);
  uVar6 = fn_8251F720(&uStack_30,0);
  *(undefined4 *)(param_2 + 0x34) = uVar6;
  if (((*(int *)(param_2 + 0x20) != 0) && (*(int *)(param_2 + 0x28) != 0)) &&
     (*(int *)(param_2 + 0x2c) != 0)) {
    uStack_30 = 0x28;
    uStack_2c = 8;
    uVar5 = fn_82631BF8(0xffffffff831c01c8);
    fn_826438C0(*(undefined4 *)(param_2 + 0x20),0,uVar5,&uStack_30,0);
    fn_8262FEC8(uVar5);
    uVar5 = fn_82631BF8(0xffffffff831c0204);
    fn_826438C0(*(undefined4 *)(param_2 + 0x28),0,uVar5,&uStack_30,0);
    fn_8262FEC8(uVar5);
    fVar4 = lbl_821CA460;
    *(float *)(param_2 + 0x38) = lbl_821CA460;
    fVar3 = lbl_82192480;
    fVar2 = lbl_821922D0;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = lbl_83265A28 & 0x7fffff;
    *(undefined4 *)(param_2 + 0x44) = lbl_82192510;
    uVar6 = lbl_821956C8;
    *(float *)(param_2 + 0x40) = fVar2;
    *(undefined4 *)(param_2 + 0x48) = uVar6;
    *(float *)(param_2 + 0x3c) = ((float)(uVar1 | 0x3f800000) - fVar4) * fVar3 + fVar2;
    uVar6 = *(undefined4 *)(param_1 + 0x828);
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x4c) = uVar6;
    *(undefined4 *)(param_2 + 0x50) = 0;
  }
  return;
}

