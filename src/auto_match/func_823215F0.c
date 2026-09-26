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
extern unsigned int *auStack_40;
extern int fn_822B9390();
extern int fn_82528FA8();
extern int fn_8252AFE0();
extern int fn_8252CAF8();
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


int * fn_823215F0(int *param_1,int *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int in_r0;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [64];
  
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  *param_1 = param_4;
  uStack_50 = lbl_821CA1A0;
  uStack_48 = lbl_821CA1A8;
  uStack_4c = lbl_821CA1A4;
  uVar4 = fn_82528FA8((double)lbl_821CA460,param_3,param_2,auStack_40,&uStack_50,
                            0xffffffff821ca45c,0);
  param_1[1] = (int)uVar4;
  param_1[2] = param_2[2];
  param_1[3] = *param_2;
  param_1[4] = param_2[1];
  param_1[5] = param_2[2];
  param_1[6] = param_2[3];
  param_1[7] = 0;
  param_1[8] = 2;
  param_1[9] = 0;
  fn_822B9390(*(undefined4 *)(*param_1 + 0x11c),uVar4,*(undefined2 *)(param_2 + 1));
  lVar6 = 2;
  puVar5 = (uint *)(param_1[1] + 0x1dc);
  do {
    puVar3 = puVar5 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar3 | 8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar1 = param_1[1];
  if (*(float *)(iVar1 + 0x8bc) != lbl_82191FCC) {
    *(float *)(iVar1 + 0x8bc) = lbl_82191FCC;
    *(undefined4 *)(iVar1 + 0x170) = 0;
  }
  fn_8252CAF8(param_1[1],1,*(uint *)(param_4 + 0x2c) & 0xff);
  param_1[7] = 0;
  fn_8252AFE0((double)lbl_821CC160,param_1[1]);
  return param_1;
}

