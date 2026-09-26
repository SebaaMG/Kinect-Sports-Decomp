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
extern int fn_822ABAF8();
extern int fn_8235D350();
extern int fn_823608F8();
extern int fn_823609C0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82419810(int *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = 0;
  uVar4 = (ulonglong)*(uint *)(*param_1 + 0x1ba8);
  if (uVar4 != 0) {
    piVar3 = (int *)(*(int *)(*param_1 + 0x1ba4) + 0x48);
    uVar5 = 0;
    do {
      if ((piVar3[-2] == 5) && (*piVar3 != 0)) {
        uVar5 = uVar5 + 1;
      }
      piVar3 = piVar3 + 0x13;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  piVar3 = param_1 + 2;
  uVar6 = 1;
  uVar4 = (ulonglong)
          (uint)(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                     (float)(longlong)(int)uVar5);
  if (1 < (uint)((param_1[3] - param_1[2]) / 0x1ac)) {
    iVar7 = 0x1ac;
    do {
      fn_823608F8(*param_1,*(undefined4 *)(*piVar3 + iVar7),0);
      piVar1 = *(int **)(*(int *)(*piVar3 + iVar7) * 4 + **(int **)(*param_1 + 8));
      fn_822ABAF8(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0xffffffff821b82e4);
      uVar2 = fn_8235D350(*param_1,5,0,1,uVar4);
      fn_823609C0(*param_1,*(undefined4 *)(*piVar3 + iVar7),uVar2);
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x1ac;
      uVar4 = (uVar4 + 1) -
              (longlong)(int)((uVar4 + 1 & 0xffffffff) / (ulonglong)uVar5) * (longlong)(int)uVar5;
    } while (uVar6 < (uint)((param_1[3] - *piVar3) / 0x1ac));
  }
  return;
}

