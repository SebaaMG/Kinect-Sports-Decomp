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
extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_830273D8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;


undefined8
fn_830274B8(int param_1,ulonglong param_2,ulonglong param_3,uint *param_4,ulonglong param_5)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar5 = 1;
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_82FA5190(lbl_831BC768);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    fn_82FA5190(lbl_831BC768);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (((((param_3 & 0xffffffff) == 0) || ((param_5 & 0xffffffff) == 0)) ||
      ((param_2 & 0xffffffff) == 0)) || (param_4 == (uint *)0x0)) {
    uVar5 = 0x1f;
LAB_83027644:
    fn_830273D8(param_1);
  }
  else {
    lVar6 = (param_3 & 0xfffffff) << 4;
    uVar3 = fn_82FA5060(lbl_831BC768,lVar6);
    *(int *)(param_1 + 0x3c) = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
      fn_82A1DDC0(uVar3,param_2,lVar6);
      *(int *)(param_1 + 0x40) = (int)param_3;
      iVar4 = fn_82FA5060(lbl_831BC768,(param_5 & 0xfffffff) << 4);
      *(int *)(param_1 + 0x44) = iVar4;
      if (iVar4 != 0) {
        *(int *)(param_1 + 0x48) = (int)param_5;
        uVar2 = lbl_821AAD20;
        uVar3 = 0;
        if ((param_5 & 0xffffffff) != 0) {
          iVar4 = 0;
          do {
            *(uint *)(iVar4 + *(int *)(param_1 + 0x44) + 4) = param_4[1];
            uVar1 = *param_4;
            if ((param_3 & 0xffffffff) <= (ulonglong)uVar1) {
              fn_830273D8(param_1);
              return 2;
            }
            uVar3 = uVar3 + 1;
            param_4 = param_4 + 2;
            *(uint *)(iVar4 + *(int *)(param_1 + 0x44)) = uVar1 * 0x10 + *(int *)(param_1 + 0x3c);
            *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x44) + 8) = uVar2;
            *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x44) + 0xc) = uVar2;
            iVar4 = iVar4 + 0x10;
          } while ((uVar3 & 0xffffffff) < (param_5 & 0xffffffff));
          fn_830273D8(param_1);
          return 1;
        }
        goto LAB_83027644;
      }
    }
    fn_830273D8(param_1);
    uVar5 = 0x34;
  }
  return uVar5;
}

