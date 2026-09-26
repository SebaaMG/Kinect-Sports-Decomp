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
extern unsigned int *auStack_58;
extern unsigned int *auStack_78;
extern unsigned int *auStack_9c;
extern unsigned int *auStack_a0;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_8223C610();
extern int fn_82429898();
extern int fn_82447388();
extern int fn_828ABF58();
extern int fn_828E5538();
extern unsigned int lbl_821B9BCC;
extern unsigned int lbl_821B9BE4;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_5c;
extern unsigned int uStack_7c;


void fn_82447040(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  int in_r0;
  longlong lVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_a0 [4];
  uint auStack_9c [3];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [24];
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [88];
  
  uVar3 = 0;
  uStack_7c = 0;
  ppuStack_80 = &lbl_821B9BCC;
  fn_828ABF58(auStack_78,0,0,3);
  fn_82429898(&ppuStack_80,param_2,auStack_9c);
  auStack_a0[0] = 0;
  dVar5 = (double)lbl_821CC160;
  if (auStack_9c[0] == 0) {
    lVar2 = fn_8223C610(param_2,1,0,0);
    uVar3 = (uint)(lVar2 != 0);
  }
  else if (auStack_9c[0] < 3) {
    puVar1 = (undefined4 *)((int)&fStack_90 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    dVar4 = (double)fn_828E5538(param_2,9,8);
    fStack_90 = (float)dVar4;
    dVar4 = (double)fn_828E5538(param_2,9,8);
    fStack_8c = (float)dVar4;
    dVar4 = (double)fn_828E5538(param_2,9,8);
    fStack_88 = (float)dVar4;
    puVar1 = (undefined4 *)((int)&fStack_90 + in_r0 & 0xfffffff0);
    in_register_000104d0 = *puVar1;
    in_register_000104d4 = puVar1[1];
    in_register_000104d8 = puVar1[2];
    in_vr77 = puVar1[3];
    if (auStack_9c[0] == 1) {
      dVar5 = (double)fn_828E5538(param_2,5,10);
    }
    else {
      uStack_5c = 0;
      ppuStack_60 = &lbl_821B9BE4;
      fn_828ABF58(auStack_58,0,0,8);
      fn_82447388(&ppuStack_60,param_2,auStack_a0);
    }
  }
  if (param_3 != 0) {
    *(float *)(param_3 + 0x20) = (float)dVar5;
    *(uint *)(param_3 + 8) = auStack_9c[0];
    *(uint *)(param_3 + 0xc) = uVar3;
    *(undefined1 *)(param_3 + 0x24) = auStack_a0[0];
    puVar1 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  return;
}

