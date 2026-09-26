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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_30;
extern int fn_8239E318();
extern int fn_8239E540();
extern int fn_8239EAF8();
extern int fn_8239F668();
extern int fn_8239F7A8();
extern int fn_8239FA00();
extern int fn_8239FAD8();
extern int fn_82570840();
extern int fn_825709D8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D2980;
extern unsigned int lbl_831D2AC0;
extern unsigned int lbl_831D2AC4;
extern unsigned int lbl_831D2AC8;
extern unsigned int lbl_831D2ACC;
extern unsigned int lbl_831D2AD0;
extern unsigned int lbl_831D2AD4;
extern unsigned int lbl_831D2AD8;
extern unsigned int lbl_831D2ADC;
extern unsigned int lbl_831D2AE0;
extern unsigned int lbl_831D2AE4;
extern unsigned int lbl_831D2AE8;
extern unsigned int lbl_831D2AEC;
extern unsigned int lbl_831D2AF0;
extern unsigned int lbl_831D2AF4;
extern unsigned int lbl_831D2AF8;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_8239F4A8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 in_r0;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined1 auStack_30 [24];
  
  fn_8239FAD8();
  iVar1 = *(int *)(param_2 + 0x28c);
  if (iVar1 == 1) {
    fn_8239F668(param_2);
    goto LAB_8239f5a4;
  }
  if (iVar1 == 2) {
    *(undefined4 *)(param_2 + 0x244) = lbl_831D2AC0;
    *(undefined4 *)(param_2 + 0x248) = lbl_831D2AC4;
    *(undefined4 *)(param_2 + 0x24c) = lbl_831D2AC8;
    *(undefined4 *)(param_2 + 0x250) = lbl_831D2ACC;
    *(undefined4 *)(param_2 + 0x254) = lbl_831D2AD0;
    *(undefined4 *)(param_2 + 600) = lbl_831D2AD4;
    *(undefined4 *)(param_2 + 0x25c) = lbl_831D2AD8;
    *(undefined4 *)(param_2 + 0x260) = lbl_831D2ADC;
    *(undefined4 *)(param_2 + 0x264) = lbl_831D2AE0;
    *(undefined4 *)(param_2 + 0x268) = lbl_831D2AE4;
    *(undefined4 *)(param_2 + 0x26c) = lbl_831D2AE8;
    *(undefined4 *)(param_2 + 0x270) = lbl_831D2AEC;
    *(undefined4 *)(param_2 + 0x274) = lbl_831D2AF0;
    *(undefined4 *)(param_2 + 0x278) = lbl_831D2AF4;
    *(undefined4 *)(param_2 + 0x27c) = lbl_831D2AF8;
    *(undefined **)(param_2 + 0x284) = &lbl_831D2980;
  }
  else {
    if (iVar1 == 3) {
      fn_8239F7A8();
      goto LAB_8239f5a4;
    }
    if (iVar1 == 4) {
      fn_8239FA00();
      goto LAB_8239f5a4;
    }
    fn_8239E318();
  }
  fn_8239E540(param_2);
LAB_8239f5a4:
  iVar1 = *(int *)(param_2 + 0x2c4);
  if (iVar1 == -1) {
    if ((*(int *)(param_2 + 0x2b0) != 0) && (*(int *)(param_2 + 0x29c) != 0)) {
      uVar4 = fn_82570840(*(int *)(param_2 + 0x29c),param_2 + 0x2b0,1,param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x2c4) = uVar4;
    }
  }
  else {
    fVar3 = lbl_821CA460;
    if (*(int *)(param_2 + 0x28c) == 0) {
      fVar3 = lbl_821CC160;
    }
    uVar4 = *(undefined4 *)(param_2 + 0x29c);
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
    puVar2 = (undefined4 *)((uint)(auStack_30 + (int)in_r0) & 0xfffffff0);
    *puVar2 = in_register_00010000;
    puVar2[1] = in_ACC;
    puVar2[2] = in_register_00010008;
    puVar2[3] = in_vr0;
    fn_825709D8((double)fVar3,uVar4,iVar1,ZEXT48(&stack0x00000000) - 0x30);
  }
  uVar5 = 0xffffffff831d29b0;
  if (*(int *)(param_2 + 0x28c) != 4) {
    uVar5 = 0xffffffff831d2990;
  }
  fn_8239EAF8(param_1,param_2,uVar5);
  return;
}

