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
extern int fn_82A3FF60();
extern int fn_82A4C958();
extern int fn_82A5ED20();
extern int fn_82F691F0();
extern unsigned int lbl_821AAD20;


ulonglong fn_82A4C9E0(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,int *param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar5 = fn_82A5ED20(param_1,1,param_3,1);
  if (-1 < (longlong)uVar5) {
    uVar7 = (ulonglong)*(ushort *)(*param_3 + 2);
    lVar6 = uVar7 * 0xc;
    if (0x3fffffff < uVar7 * 3) {
      lVar6 = -1;
    }
    lVar6 = fn_82A3FF60(0xffffffff83219d50,lVar6,0x2097000a,0);
    *(int *)(param_1 + 0x30) = (int)lVar6;
    uVar5 = -(ulonglong)(lVar6 == 0) & 0xffffffff8007000e;
  }
  uVar4 = lbl_821AAD20;
  if (-1 < (int)uVar5) {
    uVar2 = *(uint *)(*param_3 + 4);
    uVar3 = *(uint *)(*param_5 + 4);
    *(int *)(param_1 + 0x48) = (int)uVar7;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    fVar1 = (float)((double)uVar2 / (double)uVar3);
    *(float *)(param_1 + 0x58) = fVar1;
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 100) * fVar1;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(param_1 + 0x30),0,uVar7 * 0xc);
  }
  fn_82A4C958(param_1);
  return uVar5;
}

