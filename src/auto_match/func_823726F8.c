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
extern int fn_82230040();
extern int fn_82230110();
extern int fn_823728C0();
extern int fn_824E6890();
extern int fn_824E6FB0();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int iStack_68;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B379C;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;


void fn_823726F8(undefined8 param_1,double param_2,int param_3)

{
  undefined4 *puVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 *puStack_60;
  undefined1 auStack_50 [80];
  
  *(float *)(param_3 + 0x654) = (float)param_2;
  *(undefined4 *)(param_3 + 0x648) = 1;
  *(undefined4 *)(param_3 + 0x64c) = 0;
  uStack_7c = 0;
  ppuStack_80 = (undefined **)fn_823728C0;
  uStack_70 = 0x823728c000000000;
  iStack_68 = param_3;
  puVar3 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &lbl_821B379C;
    fn_82F68CC0(puVar3 + 2,&uStack_70,0x18);
    puStack_60 = puVar3;
    uVar1 = fn_824E6890(*(int *)(param_3 + 0x7e0),
                              (ulonglong)*(uint *)(*(int *)(param_3 + 0x7e0) + 0xd54) + 0x20);
    uVar2 = fn_82230110(auStack_50,0xffffffff821b35b4);
    fn_824E6FB0(param_1,uVar1,uVar2);
    return;
  }
  uStack_7c = 0;
  ppuStack_80 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_80);
}

