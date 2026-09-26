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
extern int fn_82278950();
extern int fn_8263C7F0();
extern int fn_8263C910();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined4 * fn_82278260(double param_1,double param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar5 = (ulonglong)param_2;
  uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)uVar5)) & ((U64)0xFFFFFFFF)) << 32));
  iVar1 = (((U64)(uStack_40) >> 32) & 0xFFFFFFFF);
  uVar4 = (ulonglong)param_1;
  uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)uVar4)) & ((U64)0xFFFFFFFF)) << 32));
  param_3[8] = iVar1;
  param_3[7] = (((U64)(uStack_40) >> 32) & 0xFFFFFFFF);
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 2;
  param_3[0xe] = 0;
  if ((uVar4 & 0x1f) != 0) {
    param_3[7] = (-(((U64)(uStack_40) >> 32) & 0xFFFFFFFF) & 0x1fU) + (((U64)(uStack_40) >> 32) & 0xFFFFFFFF);
  }
  if ((uVar5 & 0x1f) != 0) {
    param_3[8] = (-iVar1 & 0x1fU) + iVar1;
  }
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[9] = (((U64)(uStack_40) >> 32) & 0xFFFFFFFF);
  param_3[5] = param_3[7];
  param_3[6] = param_3[8];
  param_3[10] = iVar1;
  if ((uVar4 & 0x1f) != 0) {
    param_3[9] = (-(((U64)(uStack_40) >> 32) & 0xFFFFFFFF) & 0x1fU) + (((U64)(uStack_40) >> 32) & 0xFFFFFFFF);
  }
  if ((uVar5 & 0x1f) != 0) {
    param_3[10] = (-iVar1 & 0x1fU) + iVar1;
  }
  uStack_38 = 0;
  uStack_34 = 0;
  uVar3 = 0x800 - (int)((((longlong)(int)(param_3[10] + 0xf & 0xfffffff0) *
                          (longlong)(int)(((param_3[9] + 0x4f) / 0x50) * 0x50) & 0x3fffffffU) << 2)
                       / 0x1400);
  uStack_40 = (ulonglong)uVar3 << 0x20;
  uVar2 = fn_8263C910(param_3[9],param_3[10],0x18280186,0,&uStack_40);
  param_3[1] = uVar2;
  uStack_40 = (ulonglong)
              (uVar3 - (int)((((longlong)(int)(param_3[10] + 0xf & 0xfffffff0) *
                               (longlong)(int)(((param_3[9] + 0x4f) / 0x50) * 0x50) & 0x3fffffffU)
                             << 2) / 0x1400)) << 0x20;
  uVar2 = fn_8263C910(param_3[9],param_3[10],0x1a220197,0,&uStack_40);
  param_3[2] = uVar2;
  uVar2 = fn_8263C7F0(param_3[9],param_3[10],1,1,0,0x18280186,0,3);
  *param_3 = uVar2;
  fn_82278950(param_3);
  param_3[0xe] = 0;
  return param_3;
}

