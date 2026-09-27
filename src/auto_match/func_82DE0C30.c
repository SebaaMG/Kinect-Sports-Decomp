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
extern int fn_82DDFC50();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern float lbl_820E1150;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_c;


void fn_82DE0C30(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  struct { undefined4 first; undefined4 second; } stack_pair_20;

  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(float *)(param_1 + 0x10) = lbl_82002AE0 / *(float *)(param_2 + 0x1c);
  puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = *param_3;
  fVar3 = *(float *)(param_1 + 0x10) * lbl_820E1150;
  *(undefined4 *)(param_1 + 0xb4) = param_3[1];
  *(undefined4 *)(param_1 + 0xb8) = param_3[2];
  fVar5 = lbl_82005344;
  fVar4 = lbl_82005340;
  lVar7 = 0xd;
  *(undefined4 *)(param_1 + 0xbc) = param_3[3];
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  stack_pair_20.first = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  pfVar6 = (float *)(param_1 + 0x40);
  stack_pair_20.second = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  do {
    pfVar6[1] = fVar3 * fVar4;
    pfVar6 = pfVar6 + 2;
    *pfVar6 = fVar3 * fVar5;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uStack_c = 0;
  fn_82DDFC50(param_1,&stack_pair_20.first,*(undefined4 *)(param_2 + 0x20));
  return;
}

