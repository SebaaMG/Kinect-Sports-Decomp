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
extern unsigned int *auStack_20;
extern int fn_824AA3D8();
extern int fn_82539560();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821914C0;
extern unsigned int lbl_821916F4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_824AAA28(int param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_20 [16];
  
  iVar4 = fn_824AA3D8(auStack_20,param_1,param_2,(-(*(int *)(param_1 + 0x48) != 0) & 0xeU) + 6
                            ,0xffffffff824aaad8);
  puVar2 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  dVar5 = (double)lbl_821916F4;
  if ((double)*(float *)(param_1 + 0x58) <= dVar5) {
    dVar6 = (double)lbl_821CC160;
    dVar7 = dVar6;
    fVar1 = lbl_8218E8E8;
  }
  else {
    dVar6 = dVar5;
    dVar5 = (double)lbl_821914C0;
    dVar7 = (double)lbl_8218E8E8;
    fVar1 = lbl_821CA460;
  }
  fn_82539560((double)*(float *)(param_1 + 0x58),dVar6,dVar5,dVar7,(double)fVar1);
  return;
}

