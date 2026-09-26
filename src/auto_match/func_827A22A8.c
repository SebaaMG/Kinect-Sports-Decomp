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
extern unsigned int *auStack_90;
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_82797870();
extern int fn_8279A5A8();
extern int fn_827A9B80();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200DBF8;
extern unsigned int lbl_82015B3C;
extern unsigned int lbl_82015BE4;
extern unsigned int lbl_821AAD20;


void fn_827A22A8(undefined4 *param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  float fVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  undefined4 auStack_90 [36];
  
  param_1[1] = 1;
  *param_1 = &lbl_82015B3C;
  param_1[2] = 0;
  if (param_3 != 0) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_827A9B80(param_1 + 9);
  fVar1 = lbl_821AAD20;
  dVar4 = (double)lbl_821AAD20;
  param_1[0x3c] = lbl_821AAD20;
  param_1[0x3d] = fVar1;
  param_1[0x3e] = fVar1;
  param_1[0x3f] = fVar1;
  *(undefined2 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = &lbl_8200DBF8;
  param_1[0x47] = 1;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((int)param_1 + 0x121) = 0;
  *(undefined1 *)((int)param_1 + 0x122) = 0x10;
  *(undefined1 *)((int)param_1 + 0x123) = 0x80;
  *(undefined1 *)(param_1 + 0x49) = 0x40;
  *(undefined1 *)((int)param_1 + 0x125) = 0x40;
  *(undefined1 *)((int)param_1 + 0x126) = 0x10;
  *(undefined1 *)((int)param_1 + 0x127) = 0xff;
  *(undefined2 *)(param_1 + 0x4a) = 0x1c2;
  *(undefined2 *)((int)param_1 + 0x12a) = 0x50;
  *(undefined2 *)(param_1 + 0x4b) = 0x39;
  *(undefined2 *)((int)param_1 + 0x12e) = 0x39;
  param_1[0x4c] = 0;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  param_1[0x4d] = (int)param_4;
  auStack_90[0] = 0x144;
  puVar2 = (undefined4 *)fn_8267BED0(param_1,0x28,auStack_90);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    fn_82797870(puVar2,param_2);
    puVar2[9] = param_1;
    *puVar2 = &lbl_82015BE4;
  }
  if (param_1[2] != 0) {
    fn_8267C498();
  }
  param_1[2] = puVar2;
  *(undefined2 *)(param_1 + 0x4e) = 1;
  param_1[8] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) & 0xc0;
  *(undefined1 *)((int)param_1 + 0x13f) = 0;
  *(undefined1 *)((int)param_1 + 0x13e) = 0;
  dVar3 = (double)lbl_82002AE0;
  *(undefined1 *)((int)param_1 + 0x13d) = 0;
  param_1[0x3c] = (float)dVar4;
  param_1[0x3d] = (float)dVar4;
  param_1[0x3e] = (float)dVar4;
  param_1[0x3f] = (float)dVar4;
  param_1[6] = 0;
  fn_8279A5A8(dVar3,param_1);
  param_1[0x42] = 0;
  *(byte *)((int)param_1 + 0x13d) = *(byte *)((int)param_1 + 0x13d) | 0x80;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((int)param_1 + 0x121) = 0;
  *(undefined1 *)((int)param_1 + 0x122) = 0x10;
  *(undefined1 *)((int)param_1 + 0x123) = 0x80;
  *(undefined1 *)(param_1 + 0x49) = 0x40;
  *(undefined1 *)((int)param_1 + 0x125) = 0x40;
  *(undefined1 *)((int)param_1 + 0x126) = 0x10;
  *(undefined1 *)((int)param_1 + 0x127) = 0xff;
  *(undefined2 *)(param_1 + 0x4a) = 0x1c2;
  *(undefined2 *)((int)param_1 + 0x12a) = 0x50;
  *(undefined2 *)(param_1 + 0x4b) = 0x39;
  *(undefined2 *)((int)param_1 + 0x12e) = 0x39;
  param_1[0x4c] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  return;
}

