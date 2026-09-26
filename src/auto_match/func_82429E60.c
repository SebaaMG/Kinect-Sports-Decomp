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
extern unsigned int *auStack_48;
extern unsigned int *auStack_60;
extern int fn_8223C610();
extern int fn_82429898();
extern int fn_828ABF58();
extern int fn_82F622E0();
extern unsigned int lbl_821B8C0C;
extern unsigned int uStack_4c;


/* WARNING: Type propagation algorithm not settling */

void fn_82429E60(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint auStack_60 [4];
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [72];
  
  uVar4 = 0;
  uStack_4c = 0;
  ppuStack_50 = &lbl_821B8C0C;
  fn_828ABF58(auStack_48,0,0,3);
  fn_82429898(&ppuStack_50,param_2,auStack_60 + 1);
  auStack_60[0] = 0;
  do {
    lVar3 = fn_8223C610(param_2,1,0,0);
    if (9 < uVar4) {
                    /* WARNING: Subroutine does not return */
      fn_82F622E0(0xffffffff821b5f00);
    }
    uVar1 = 1 << (uVar4 & 0x1f);
    if (lVar3 == 0) {
      uVar2 = uVar4 >> 3 & 0x1ffffffc;
      *(uint *)((int)auStack_60 + uVar2) = *(uint *)((int)auStack_60 + uVar2) & ~uVar1;
    }
    else {
      uVar2 = uVar4 >> 3 & 0x1ffffffc;
      *(uint *)((int)auStack_60 + uVar2) = uVar1 | *(uint *)((int)auStack_60 + uVar2);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 10);
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = auStack_60[1];
    *(uint *)(param_3 + 0xc) = auStack_60[0];
  }
  return;
}

