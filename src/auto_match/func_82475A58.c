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
extern int fn_82461E68();
extern int fn_8251FA58();
extern int fn_82529A38();
extern int fn_8252AFE0();
extern int fn_82587AC0();
extern int fn_8265CAA0();
extern unsigned int iStack_4c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_50;
extern U64 storeVectorElementWordIndexed();


void fn_82475A58(int param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  uint uStack_50;
  int iStack_4c;
  
  fn_82461E68(&uStack_50,param_3);
  uVar6 = (ulonglong)uStack_50;
  lVar5 = uVar6 + 0x98;
  uVar1 = (uint)lVar5;
  uVar4 = storeVectorElementWordIndexed(in_vs32,0,lVar5);
  *(undefined4 *)(uVar1 & 0xfffffffc) = uVar4;
  uVar4 = storeVectorElementWordIndexed(in_vs45,lVar5,4);
  *(undefined4 *)(uVar1 + 4 & 0xfffffffc) = uVar4;
  uVar4 = storeVectorElementWordIndexed(in_vs44,lVar5,8);
  *(undefined4 *)(uVar1 + 8 & 0xfffffffc) = uVar4;
  fVar2 = lbl_821CC160;
  uVar4 = lbl_821CA460;
  dVar7 = (double)lbl_821CC160;
  *(float *)(uStack_50 + 0xa4) = lbl_821CC160;
  *(float *)(uStack_50 + 0xa8) = fVar2;
  *(float *)(uStack_50 + 0xac) = fVar2;
  *(undefined4 *)(uStack_50 + 0xb0) = uVar4;
  *(undefined4 *)(uStack_50 + 0x84) = *(undefined4 *)(param_1 + 0x50);
  uVar3 = fn_82587AC0(uVar6 + 0x4b);
  uVar4 = fn_82529A38(uVar3,uVar6,0);
  param_2[1] = (float)dVar7;
  *param_2 = uVar4;
  fn_8252AFE0(dVar7);
  fn_8265CAA0(uVar6);
  if (iStack_4c != 0) {
    fn_8251FA58();
  }
  return;
}

