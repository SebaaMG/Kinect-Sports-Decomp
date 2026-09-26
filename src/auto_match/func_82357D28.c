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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8225C590();
extern int fn_8225DBF8();
extern int fn_82297DB0();
extern int fn_8236DBE0();
extern int fn_823B4A18();
extern int fn_824C7740();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_8265C9E0();
extern int fn_828AD740();
extern unsigned int iStack0000001c;
extern unsigned int iStack_74;
extern unsigned int lbl_821B24E0;
extern unsigned int lbl_821B25B4;
extern unsigned int lbl_821B30C8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;
extern unsigned int lbl_83297810;


undefined4 * fn_82357D28(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  undefined8 uVar4;
  int iStack0000001c;
  undefined4 *puStack_78;
  int iStack_74;
  undefined **ppuStack_70;
  undefined4 *puStack_6c;
  undefined ***pppuStack_60;
  undefined1 auStack_50 [80];
  
  param_1[1] = 0;
  *param_1 = &lbl_821B24E0;
  param_1[2] = **(undefined4 **)(param_2 + 0x34);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = *(undefined4 *)(*(int *)(param_2 + 0x34) + 4);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iStack0000001c = param_2;
  fn_82230110(auStack_50,0xffffffff821b24c8);
  fn_8236DBE0(param_1 + 0x10,auStack_50);
  param_1[0x10] = &lbl_821B30C8;
  fn_82230300(auStack_50,1,0);
  uVar3 = fn_8265C9E0(0xc0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_823B4A18(uVar3,*(undefined4 *)(*(int *)(param_2 + 0x34) + 0x20));
  }
  iVar1 = iStack0000001c;
  param_1[0x23] = uVar5;
  param_1[0x24] = *(undefined4 *)(*(int *)(param_2 + 0x34) + 0xc);
  puStack_78 = param_1 + 0x46;
  param_1[0x25] = *(undefined4 *)(*(int *)(iStack0000001c + 0x34) + 0x14);
  param_1[0x26] = *(undefined4 *)(*(int *)(iStack0000001c + 0x34) + 0x18);
  param_1[0x27] = *(undefined4 *)(*(int *)(iStack0000001c + 0x34) + 0x1c);
  param_1[0x28] = *(undefined4 *)(*(int *)(iStack0000001c + 0x34) + 0x10);
  param_1[0x29] = *(undefined4 *)(*(int *)(iStack0000001c + 0x34) + 8);
  param_1[0x2a] = *(undefined4 *)(*(int *)(iStack0000001c + 0x34) + 0x24);
  param_1[0x2b] = 1;
  param_1[0x2c] = 1;
  param_1[0x2d] = 0xffffffff;
  param_1[0x2e] = 0xffffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  fn_82297DB0(puStack_78,0,0,iStack0000001c,iStack0000001c);
  puVar2 = puStack_78;
  fn_82297DB0(puStack_78 + 7,0,0);
  fn_82297DB0(puVar2 + 0xe,0,0);
  uVar5 = lbl_821CC160;
  param_1[0x5b] = lbl_821CC160;
  param_1[0x5c] = uVar5;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  iVar6 = *(int *)(*(int *)(iVar1 + 0x34) + 0x20);
  if (iVar6 != 0) {
    param_1[1] = iVar6;
  }
  param_1[0x33] = 0;
  iVar6 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar6 = fn_82250A18();
  }
  if (*(char *)(iVar6 + 4) != '\0') {
    uVar3 = (ulonglong)lbl_83297810;
    if (uVar3 == 0) {
      uVar3 = fn_82511928();
    }
    fn_825138E0(&puStack_78,uVar3,1);
    if ((puStack_78 != (undefined4 *)0x0) &&
       (cVar7 = fn_828AD740(puStack_78[2]), cVar7 == '\0')) {
      param_1[0x33] = 1;
    }
    if (iStack_74 != 0) {
      fn_822315A0();
    }
  }
  if (*(int *)(iVar1 + 0x2c) != 0) {
    fn_824C7740(iVar1 + 0x2c,param_1[0x2a],*(undefined4 *)(iVar1 + 0x30));
  }
  pppuStack_60 = &ppuStack_70;
  ppuStack_70 = &lbl_821B25B4;
  puStack_6c = param_1;
  uVar4 = fn_8225C590();
  fn_8225DBF8(uVar4,&ppuStack_70);
  return param_1;
}

