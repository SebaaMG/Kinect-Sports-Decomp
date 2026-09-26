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
extern int fn_82809CB0();
extern int fn_828599B0();
extern int fn_828611B8();
extern int fn_82F68CC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_83211320;
extern unsigned int lbl_83211328;


void fn_82859A30(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar2 = fn_82F6A548();
  iVar5 = lbl_83211328;
  fn_82F68CC0(lbl_83211328 + 8,param_5,0xa8);
  fn_828599B0(param_3,param_2,iVar5 + 200,iVar5 + 0xd0);
  dVar6 = (double)fn_82809CB0((double)*param_4);
  dVar7 = (double)fn_82809CB0((double)param_4[1]);
  dVar8 = (double)fn_82809CB0((double)param_4[2]);
  dVar9 = (double)fn_82809CB0((double)param_4[3]);
  iVar5 = 1;
  if (1 < lbl_83211320) {
    iVar1 = (int)param_5;
    iVar4 = 0xd8;
    do {
      iVar3 = iVar4 + lbl_83211328;
      *(float *)(iVar3 + 0xb0) = (float)((double)*(float *)(iVar3 + 0xd4) * dVar6);
      *(float *)(iVar3 + 0xb4) = (float)((double)*(float *)(iVar3 + 0xcc) * dVar7);
      *(float *)(iVar3 + 0xb8) = (float)((double)*(float *)(iVar3 + 200) * dVar8);
      *(float *)(iVar3 + 0xbc) = (float)(dVar9 * (double)*(float *)(iVar3 + 0xd0));
      *(float *)(iVar3 + 0xc0) = param_4[4];
      *(float *)(iVar3 + 0xc4) = param_4[5];
      *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(iVar1 + 0x30);
      *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(iVar1 + 0x34);
      *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar1 + 0x38);
      *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar1 + 0x3c);
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(iVar1 + 0x88);
      *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar1 + 0x8c);
      *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(iVar1 + 0x90);
      *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(iVar1 + 0x94);
      *(undefined4 *)(iVar3 + 0xa0) = *(undefined4 *)(iVar1 + 0x98);
      *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar1 + 0x9c);
      *(undefined4 *)(iVar3 + 0xa8) = *(undefined4 *)(iVar1 + 0xa0);
      *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar1 + 0xa4);
      fn_828611B8(iVar3 + 0xb0,uVar2,0xf0,0xf0,iVar3 + 8);
      fn_828599B0(param_3,param_2,iVar3 + 200,iVar3 + 0xd0);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xd8;
    } while (iVar5 < (int)(uint)lbl_83211320);
  }
  fn_82F6A594();
  return;
}

