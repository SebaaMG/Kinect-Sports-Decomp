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
extern float fRam831d2be0;
extern int fn_82397D50();
extern int fn_82397F88();
extern unsigned int lbl_831D2980;
extern unsigned int uRam831d29d0;
extern unsigned int uRam831d29d4;
extern unsigned int uRam831d29d8;
extern unsigned int uRam831d29dc;
extern unsigned int uRam831d29e0;
extern unsigned int uRam831d29e4;
extern unsigned int uRam831d29e8;
extern unsigned int uRam831d29ec;
extern unsigned int uRam831d29f0;
extern unsigned int uRam831d29f4;
extern unsigned int uRam831d29f8;
extern unsigned int uRam831d29fc;
extern unsigned int uRam831d2a00;
extern unsigned int uRam831d2a04;
extern unsigned int uRam831d2a08;
extern unsigned int uRam831d2a0c;
extern unsigned int uRam831d2a10;
extern unsigned int uRam831d2a14;
extern unsigned int uRam831d2a18;
extern unsigned int uRam831d2a1c;
extern unsigned int uRam831d2a20;
extern unsigned int uRam831d2a24;
extern unsigned int uRam831d2a28;
extern unsigned int uRam831d2a2c;
extern unsigned int uRam831d2a30;
extern unsigned int uRam831d2a34;
extern unsigned int uRam831d2a38;
extern unsigned int uRam831d2a3c;
extern unsigned int uRam831d2a40;
extern unsigned int uRam831d2a44;
extern unsigned int uRam831d2a48;
extern unsigned int uRam831d2a4c;
extern unsigned int uRam831d2a50;
extern unsigned int uRam831d2a54;
extern unsigned int uRam831d2a58;
extern unsigned int uRam831d2a5c;
extern unsigned int uRam831d2a60;
extern unsigned int uRam831d2a64;
extern unsigned int uRam831d2a68;
extern unsigned int uRam831d2a6c;
extern unsigned int uRam831d2a70;
extern unsigned int uRam831d2a74;
extern unsigned int uRam831d2a78;
extern unsigned int uRam831d2a7c;
extern unsigned int uRam831d2a80;


void fn_8239E318(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  iVar4 = *(int *)(param_1 + 0x240);
  iVar1 = *(int *)(param_1 + 0x10);
  if (((*(int *)(iVar4 + 0x2e0) == 0) || (iVar3 = fn_82397D50(iVar4), iVar3 == 0)) ||
     (iVar1 = *(int *)(iVar1 + 0x2c), iVar4 = (**(code **)(**(int **)(iVar4 + 0x2e0) + 4))(),
     iVar4 != iVar1)) {
    if (*(int *)(param_1 + 0x294) == 0) {
      *(undefined4 *)(param_1 + 0x244) = uRam831d29d0;
      *(undefined4 *)(param_1 + 0x248) = uRam831d29d4;
      *(undefined4 *)(param_1 + 0x24c) = uRam831d29d8;
      *(undefined4 *)(param_1 + 0x250) = uRam831d29dc;
      *(undefined4 *)(param_1 + 0x254) = uRam831d29e0;
      *(undefined4 *)(param_1 + 600) = uRam831d29e4;
      *(undefined4 *)(param_1 + 0x25c) = uRam831d29e8;
      *(undefined4 *)(param_1 + 0x260) = uRam831d29ec;
      *(undefined4 *)(param_1 + 0x264) = uRam831d29f0;
      *(undefined4 *)(param_1 + 0x268) = uRam831d29f4;
      *(undefined4 *)(param_1 + 0x26c) = uRam831d29f8;
      *(undefined4 *)(param_1 + 0x270) = uRam831d29fc;
      *(undefined4 *)(param_1 + 0x274) = uRam831d2a00;
      *(undefined4 *)(param_1 + 0x278) = uRam831d2a04;
      uVar2 = uRam831d2a08;
    }
    else {
      *(undefined4 *)(param_1 + 0x244) = uRam831d2a48;
      *(undefined4 *)(param_1 + 0x248) = uRam831d2a4c;
      *(undefined4 *)(param_1 + 0x24c) = uRam831d2a50;
      *(undefined4 *)(param_1 + 0x250) = uRam831d2a54;
      *(undefined4 *)(param_1 + 0x254) = uRam831d2a58;
      *(undefined4 *)(param_1 + 600) = uRam831d2a5c;
      *(undefined4 *)(param_1 + 0x25c) = uRam831d2a60;
      *(undefined4 *)(param_1 + 0x260) = uRam831d2a64;
      *(undefined4 *)(param_1 + 0x264) = uRam831d2a68;
      *(undefined4 *)(param_1 + 0x268) = uRam831d2a6c;
      *(undefined4 *)(param_1 + 0x26c) = uRam831d2a70;
      *(undefined4 *)(param_1 + 0x270) = uRam831d2a74;
      *(undefined4 *)(param_1 + 0x274) = uRam831d2a78;
      *(undefined4 *)(param_1 + 0x278) = uRam831d2a7c;
      uVar2 = uRam831d2a80;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x244) = uRam831d2a0c;
    *(undefined4 *)(param_1 + 0x248) = uRam831d2a10;
    *(undefined4 *)(param_1 + 0x24c) = uRam831d2a14;
    *(undefined4 *)(param_1 + 0x250) = uRam831d2a18;
    *(undefined4 *)(param_1 + 0x254) = uRam831d2a1c;
    *(undefined4 *)(param_1 + 600) = uRam831d2a20;
    *(undefined4 *)(param_1 + 0x25c) = uRam831d2a24;
    *(undefined4 *)(param_1 + 0x260) = uRam831d2a28;
    *(undefined4 *)(param_1 + 0x264) = uRam831d2a2c;
    *(undefined4 *)(param_1 + 0x268) = uRam831d2a30;
    *(undefined4 *)(param_1 + 0x26c) = uRam831d2a34;
    *(undefined4 *)(param_1 + 0x270) = uRam831d2a38;
    *(undefined4 *)(param_1 + 0x274) = uRam831d2a3c;
    *(undefined4 *)(param_1 + 0x278) = uRam831d2a40;
    uVar2 = uRam831d2a44;
  }
  *(undefined4 *)(param_1 + 0x27c) = uVar2;
  dVar6 = (double)*(float *)(param_1 + 0x270);
  dVar5 = (double)*(float *)(param_1 + 0x264);
  iVar4 = fn_82397F88(*(undefined4 *)(param_1 + 0x240));
  if (iVar4 != 0) {
    dVar6 = (double)(float)((double)fRam831d2be0 * dVar6);
    dVar5 = (double)(float)((double)fRam831d2be0 * dVar5);
  }
  *(float *)(param_1 + 0x270) = (float)dVar6;
  *(undefined **)(param_1 + 0x284) = &lbl_831D2980;
  *(float *)(param_1 + 0x264) = (float)dVar5;
  return;
}

