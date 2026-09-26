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
extern int fn_82448A88();
extern unsigned int lbl_821CC160;


void fn_82448998(double param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  
  uVar6 = 0;
  uVar4 = (ulonglong)*(uint *)(*(int *)(param_2 + 0x48) + 0x1c);
  fVar2 = lbl_821CC160;
  if (uVar4 != 0) {
    do {
      dVar7 = (double)(*(float *)(*(int *)(param_2 + 0x48) + 0x18) * (float)(uVar6 & 0xffffffff) +
                      *(float *)(*(int *)(param_2 + 0x48) + 0x14));
      if (param_1 < dVar7) {
        fVar2 = (float)(dVar7 - param_1);
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < uVar4);
  }
  uVar5 = uVar4 - 1;
  fVar1 = lbl_821CC160;
  if (-1 < (longlong)uVar5) {
    do {
      dVar7 = (double)(*(float *)(*(int *)(param_2 + 0x48) + 0x18) * (float)(longlong)(int)uVar5 +
                      *(float *)(*(int *)(param_2 + 0x48) + 0x14));
      if (dVar7 < param_1) {
        fVar1 = (float)(param_1 - dVar7);
        break;
      }
      uVar5 = uVar5 - 1;
    } while (-1 < (longlong)uVar5);
  }
  uVar3 = uVar5;
  if ((((uVar6 & 0xffffffff) < uVar4) && (uVar3 = uVar6, -1 < (int)uVar5)) && (fVar1 < fVar2)) {
    uVar3 = uVar5;
  }
  fn_82448A88(param_2,param_4,uVar3 & 0xff);
  return;
}

