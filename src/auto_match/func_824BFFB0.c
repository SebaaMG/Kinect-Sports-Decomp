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
extern int fn_824C01C0();
extern int fn_824C04E0();
extern int fn_824C0870();
extern int fn_824C0E08();
extern int fn_8265C9E0();
extern int fn_828A1D58();
extern int fn_828C03E8();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821C0678;
extern unsigned int lbl_821C0688;
extern unsigned int lbl_821C06D0;
extern unsigned int lbl_821C06E8;
extern unsigned int lbl_821C0700;
extern unsigned int uStack_84;


int * fn_824BFFB0(int *param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  undefined **ppuStack_90;
  code *pcStack_8c;
  int *piStack_88;
  undefined4 uStack_84;
  undefined ***pppuStack_80;
  undefined **ppuStack_70;
  int *piStack_6c;
  undefined ***pppuStack_60;
  undefined1 auStack_50 [80];
  
  fn_82230110(auStack_50,0xffffffff821c0620);
  fn_824C0870(param_1,auStack_50);
  *param_1 = (int)&lbl_821C0678;
  fn_82230300(auStack_50,1,0);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  pcStack_8c = (code *)fn_8265C9E0(0x38);
  if (pcStack_8c == (code *)0x0) {
    pcStack_8c = (code *)0x0;
  }
  else {
    *(undefined ***)pcStack_8c = &lbl_821A8D8C;
    *(undefined4 *)((int)pcStack_8c + 4) = 1;
    *(undefined4 *)((int)pcStack_8c + 8) = 1;
    if ((undefined4 *)((int)pcStack_8c + 0x10) != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C06D0;
      piStack_6c = param_1;
      fn_824C0E08((undefined4 *)((int)pcStack_8c + 0x10),1,&ppuStack_70);
    }
  }
  ppuStack_90 = (undefined **)((int)pcStack_8c + 0x10);
  (**(code **)(*param_1 + 4))(param_1,&ppuStack_90);
  puVar2 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &lbl_821A8D8C;
    puVar2[1] = 1;
    puVar2[2] = 1;
    if (puVar2 + 4 != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C06E8;
      piStack_6c = param_1;
      fn_824C0E08(puVar2 + 4,2,&ppuStack_70);
    }
  }
  pcStack_8c = (code *)puVar2;
  ppuStack_90 = (undefined **)((int)pcStack_8c + 0x10);
  (**(code **)(*param_1 + 4))(param_1,&ppuStack_90);
  puVar2 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &lbl_821A8D8C;
    puVar2[1] = 1;
    puVar2[2] = 1;
    if (puVar2 + 4 != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C0700;
      piStack_6c = param_1;
      fn_824C0E08(puVar2 + 4,3,&ppuStack_70);
    }
  }
  pcStack_8c = (code *)puVar2;
  ppuStack_90 = (undefined **)((int)pcStack_8c + 0x10);
  (**(code **)(*param_1 + 4))(param_1,&ppuStack_90);
  fn_824C04E0(param_1,1);
  pppuStack_80 = &ppuStack_90;
  uStack_84 = piStack_88;
  ppuStack_90 = &lbl_821C0688;
  pcStack_8c = fn_824C01C0;
  piStack_88 = param_1;
  uVar1 = fn_828A1D58();
  fn_828C03E8(uVar1,&ppuStack_90);
  return param_1;
}

