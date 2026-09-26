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
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_83084210();
extern int fn_830982F0();
extern unsigned int iStack_5c;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a8;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82187C08;
extern unsigned int lbl_8309C9D8;
extern unsigned int lbl_8326570C;
extern unsigned int uStack_60;
extern unsigned int uStack_90;
extern unsigned int uStack_94;


void fn_8309BF18(ulonglong param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [20];
  int iStack_a8;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 *puStack_50;
  
  if ((param_1 & 0xffffffff) != 0) {
    fn_830982F0(auStack_c0);
    uStack_94 = *(undefined4 *)(param_2 + 0x30);
    uStack_60 = *(undefined4 *)(param_2 + 0x24);
    if ((*(char *)(param_2 + 0x20) == '\0') || (param_3 == 0)) {
      iStack_5c = 0;
    }
    else {
      iStack_5c = param_3 + 0x10;
    }
    if (*(char *)(param_2 + 0x3c) == '\0') {
      puStack_50 = (undefined4 *)0x0;
    }
    else if (param_4 == (undefined4 *)0x0) {
      puStack_50 = (undefined4 *)0x0;
      lbl_8326570C = &lbl_8309C9D8;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x34);
      uVar2 = *(undefined4 *)(param_2 + 0x30);
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[1] = lbl_82002AE0;
      *param_4 = &lbl_82187C08;
      param_4[2] = uVar2;
      param_4[3] = uVar2;
      param_4[4] = uVar1;
      lbl_8326570C = &lbl_8309C9D8;
      puStack_50 = param_4;
    }
    iStack_a8 = param_3;
    iStack_9c = param_2;
    iStack_98 = param_2;
    uStack_90 = uStack_94;
    fn_83084210(auStack_d0,param_1,param_2,param_2 + 0x10,auStack_bc);
  }
  return;
}

