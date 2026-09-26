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
extern int fn_82297DB0();
extern int fn_824C04E0();
extern int fn_824C2900();
extern int fn_824C2A28();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821C075C;
extern unsigned int lbl_821C0784;
extern unsigned int lbl_821C079C;
extern unsigned int lbl_821C07B4;
extern unsigned int lbl_821C07CC;
extern unsigned int lbl_821C07E4;
extern unsigned int lbl_821C07FC;
extern unsigned int lbl_821C0814;


int * fn_824C1DE0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined **ppuStack_70;
  int *piStack_6c;
  undefined ***pppuStack_60;
  undefined1 auStack_50 [80];
  
  fn_82230110(auStack_50,0xffffffff821c0718);
  fn_824C2900(param_1,auStack_50);
  *param_1 = (int)&lbl_821C075C;
  fn_82230300(auStack_50,1,0);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 1;
  param_1[0x15] = 0xfe;
  param_1[0x16] = param_2;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  fn_82297DB0(param_1 + 0x1c,0,0);
  puStack_7c = (undefined4 *)fn_8265C9E0(0x38);
  if (puStack_7c == (undefined4 *)0x0) {
    puStack_7c = (undefined4 *)0x0;
  }
  else {
    *puStack_7c = &lbl_821A8D8C;
    puStack_7c[1] = 1;
    puStack_7c[2] = 1;
    if (puStack_7c + 4 != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C0784;
      piStack_6c = param_1;
      fn_824C2A28(puStack_7c + 4,1,&ppuStack_70);
    }
  }
  puStack_80 = puStack_7c + 4;
  (**(code **)(*param_1 + 4))(param_1,&puStack_80);
  puVar1 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821A8D8C;
    puVar1[1] = 1;
    puVar1[2] = 1;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C079C;
      piStack_6c = param_1;
      fn_824C2A28(puVar1 + 4,2,&ppuStack_70);
    }
  }
  puStack_7c = puVar1;
  puStack_80 = puStack_7c + 4;
  (**(code **)(*param_1 + 4))(param_1,&puStack_80);
  puVar1 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821A8D8C;
    puVar1[1] = 1;
    puVar1[2] = 1;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C07B4;
      piStack_6c = param_1;
      fn_824C2A28(puVar1 + 4,3,&ppuStack_70);
    }
  }
  puStack_7c = puVar1;
  puStack_80 = puStack_7c + 4;
  (**(code **)(*param_1 + 4))(param_1,&puStack_80);
  puVar1 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821A8D8C;
    puVar1[1] = 1;
    puVar1[2] = 1;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C07CC;
      piStack_6c = param_1;
      fn_824C2A28(puVar1 + 4,4,&ppuStack_70);
    }
  }
  puStack_7c = puVar1;
  puStack_80 = puStack_7c + 4;
  (**(code **)(*param_1 + 4))(param_1,&puStack_80);
  puVar1 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821A8D8C;
    puVar1[1] = 1;
    puVar1[2] = 1;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C07E4;
      piStack_6c = param_1;
      fn_824C2A28(puVar1 + 4,6,&ppuStack_70);
    }
  }
  puStack_7c = puVar1;
  puStack_80 = puStack_7c + 4;
  (**(code **)(*param_1 + 4))(param_1,&puStack_80);
  puVar1 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821A8D8C;
    puVar1[1] = 1;
    puVar1[2] = 1;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C07FC;
      piStack_6c = param_1;
      fn_824C2A28(puVar1 + 4,7,&ppuStack_70);
    }
  }
  puStack_7c = puVar1;
  puStack_80 = puStack_7c + 4;
  (**(code **)(*param_1 + 4))(param_1,&puStack_80);
  puVar1 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821A8D8C;
    puVar1[1] = 1;
    puVar1[2] = 1;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C0814;
      piStack_6c = param_1;
      fn_824C2A28(puVar1 + 4,5,&ppuStack_70);
    }
  }
  puStack_7c = puVar1;
  puStack_80 = puStack_7c + 4;
  (**(code **)(*param_1 + 4))(param_1,&puStack_80);
  fn_824C04E0(param_1,1);
  return param_1;
}

