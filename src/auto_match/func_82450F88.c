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
extern int fn_82441BD0();
extern int fn_82442578();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917C4;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821B8268;
extern unsigned int lbl_821B9B00;
extern unsigned int lbl_821B9B14;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined4 * fn_82450F88(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)(param_2 + 0x13c);
  fn_82441BD0(param_1,param_2 + 0x24,param_2 + 0x134,
                    (ulonglong)*(uint *)(*(int *)(param_2 + 300) + 0x174) + 8);
  param_1[3] = 0;
  param_1[2] = &lbl_821B8268;
  param_1[4] = 0;
  *param_1 = &lbl_821B9B00;
  param_1[2] = &lbl_821B9B14;
  uVar5 = fn_8265C9E0(0x1b0);
  if ((uVar5 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_82442578(uVar5,param_2 + 0x138);
  }
  param_1[5] = iVar6;
  *(undefined4 *)(iVar6 + 0x94) = uVar1;
  param_1[6] = lbl_821916FC;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = lbl_8218E8E8;
  param_1[10] = 0;
  uVar4 = lbl_821CC160;
  uVar3 = lbl_82192480;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar2 = lbl_821917C4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xb] = uVar1;
  param_1[0x14] = uVar1;
  param_1[0xd] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar4;
  param_1[0x15] = 0x2ee;
  uVar1 = *(undefined4 *)(param_2 + 0x140);
  param_1[0x1a] = 0;
  uVar2 = lbl_821CA460;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar2;
  param_1[0x18] = uVar4;
  param_1[0x19] = uVar4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  return param_1;
}

