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
extern int fn_8265C990();
extern int fn_82ED4140();


longlong fn_82ED4510(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  
  if ((param_2 & 2) == 0) {
    fn_82ED4140(param_1);
    lVar4 = param_1;
    if ((param_2 & 1) != 0) {
      fn_8265C990(param_1,0x248c8000);
    }
  }
  else {
    uVar3 = (ulonglong)*(uint *)((int)param_1 + -4);
    lVar4 = param_1 + -4;
    lVar5 = uVar3 - 1;
    if (-1 < lVar5) {
      lVar6 = uVar3 * 0x402c + param_1 + 0xc;
      do {
        iVar2 = (int)lVar6;
        if (*(int *)(iVar2 + -0x4038) != 0) {
          fn_8265C990(*(int *)(iVar2 + -0x4038),0x248c8000);
          *(undefined4 *)(iVar2 + -0x4038) = 0;
        }
        if (*(int *)(iVar2 + -0x4034) != 0) {
          fn_8265C990(*(int *)(iVar2 + -0x4034),0x248c8000);
          *(undefined4 *)(iVar2 + -0x4034) = 0;
        }
        piVar7 = (int *)(lVar6 + -0x402c);
        iVar1 = *piVar7;
        if (iVar1 != 0) {
          fn_8265C990(iVar1,0x248c8000);
          *piVar7 = 0;
        }
        if (*(int *)(iVar2 + -0x4030) != 0) {
          fn_8265C990(*(int *)(iVar2 + -0x4030),0x248c8000);
          *(undefined4 *)(iVar2 + -0x4030) = 0;
        }
        lVar5 = lVar5 + -1;
        lVar6 = lVar6 + -0x402c;
      } while (-1 < lVar5);
    }
    if ((param_2 & 1) != 0) {
      fn_8265C990(lVar4,0x248c8000);
    }
  }
  return lVar4;
}

