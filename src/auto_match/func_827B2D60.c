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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern int fn_827B18F8();
extern int fn_827B2C80();
extern unsigned int uStack_40;


void fn_827B2D60(int param_1,short param_2,short param_3,undefined8 param_4,undefined8 param_5)

{
  short sVar1;
  short sVar2;
  uint uVar4;
  longlong lVar3;
  int iVar5;
  undefined4 uStack_40;
  
  uVar4 = *(int *)(param_1 + 0x28) - 1;
  sVar1 = (short)param_4;
  sVar2 = (short)param_5;
  if (*(int *)(*(int *)((uVar4 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x34)) + (uVar4 * 8 & 0x1f8) +
              4) != 0) {
    uVar4 = *(int *)(param_1 + 0x18) - 1;
    uStack_40 = *(undefined4 *)
                 (*(int *)((uVar4 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) + (uVar4 * 4 & 0xfc)
                 );
    lVar3 = (longlong)((int)param_2 - (int)sVar1) * (longlong)((int)sVar2 - (int)(((U64)(uStack_40) >> 16) & 0xFFFF)) -
            (longlong)((int)param_3 - (int)sVar2) *
            (longlong)((int)sVar1 - (int)(short)((int)uStack_40 >> 0x11));
    if (lVar3 < 0) {
      lVar3 = -lVar3;
    }
    if ((int)lVar3 < 6) {
      fn_827B2C80(param_1,param_4,param_5);
      return;
    }
  }
  uStack_40 = CONCAT22(param_2 << 1,param_3) | 0x10000;
  fn_827B18F8(param_1 + 0x18,&uStack_40);
  uStack_40 = CONCAT22(sVar1 << 1,sVar2) | 0x10000;
  fn_827B18F8(param_1 + 0x18,&uStack_40);
  uVar4 = *(int *)(param_1 + 0x28) - 1;
  iVar5 = *(int *)((uVar4 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x34)) + (uVar4 * 8 & 0x1f8);
  *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 2;
  return;
}

