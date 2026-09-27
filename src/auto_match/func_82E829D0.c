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
extern unsigned int lbl_82005730;
extern float lbl_82015618;
extern unsigned int lbl_820FBB20;
extern unsigned int lbl_8215F5F8;
extern unsigned int lbl_8215F60C;
extern unsigned int lbl_8215F620;
extern unsigned int lbl_8215F634;
extern unsigned int lbl_8215F648;


void fn_82E829D0(int param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  double dVar7;
  
  bVar1 = *(int *)(param_1 + 0x6f4c) != 0;
  uVar2 = (uint)bVar1;
  iVar4 = (*(int *)(param_1 + 800) + 0xf >> 4) * (*(int *)(param_1 + 0x31c) + 0xf >> 4);
  uVar5 = (uint)(*(double *)(param_1 + 0x1e08) + lbl_820FBB20);
  uVar3 = (ulonglong)uVar5;
  if (bVar1 < 4) {
    piVar6 = (int *)(&lbl_8215F648 + uVar2 * 4);
    do {
      if ((int)(iVar4 * uVar5) <= *piVar6) {
        if ((int)uVar2 < 4) {
          piVar6 = (int *)(&lbl_8215F634 + uVar2 * 4);
          goto LAB_82e82a78;
        }
        break;
      }
      piVar6 = piVar6 + 1;
      uVar2 = uVar2 + 1;
    } while ((int)piVar6 < -0x7dea09a8);
  }
  goto LAB_82e82a98;
  while( true ) {
    piVar6 = piVar6 + 1;
    uVar2 = uVar2 + 1;
    if (-0x7dea09bd < (int)piVar6) break;
LAB_82e82a78:
    if (iVar4 <= *piVar6) break;
  }
LAB_82e82a98:
  if (*(int *)(param_1 + 0x1dac) == 2) {
    if (*(int *)(param_1 + 0x1d94) < 3) {
      uVar2 = uVar2 + 2;
    }
    else if (*(int *)(param_1 + 0x1d94) < 8) {
      uVar2 = uVar2 + 1;
    }
    if (4 < (int)uVar2) {
      uVar2 = 4;
    }
    goto LAB_82e82b88;
  }
  if (*(int *)(param_1 + 0x1dac) == 3) {
    dVar7 = *(double *)(param_1 + 0x1ed8);
    iVar4 = (int)*(double *)(param_1 + 0x1ed0) * 10000;
    if (*(double *)(param_1 + 0x1ed0) * lbl_82015618 < dVar7) goto LAB_82e82b40;
  }
  else {
    dVar7 = *(double *)(param_1 + 0x1ed0);
LAB_82e82b40:
    iVar4 = (int)(dVar7 * lbl_82005730) * *(int *)(param_1 + 0x1f00);
  }
  if ((int)uVar2 < 4) {
    piVar6 = (int *)(&lbl_8215F620 + uVar2 * 4);
    do {
      if (iVar4 + 1000 >> 10 < *piVar6) break;
      piVar6 = piVar6 + 1;
      uVar2 = uVar2 + 1;
    } while ((int)piVar6 < -0x7dea09d0);
  }
LAB_82e82b88:
  *(uint *)(param_1 + 0x88c) = uVar2;
  *(int *)(param_1 + 0x894) = *(int *)(&lbl_8215F60C + uVar2 * 4) << 0xb;
  if ((int)uVar5 < 1) {
    uVar3 = 1;
  }
  trapWord(6,uVar3,0);
  iVar4 = *(int *)(&lbl_8215F5F8 + uVar2 * 4);
  *(undefined4 *)(param_1 + 0x890) = 0;
  uVar5 = iVar4 * 0x1e848;
  *(int *)(param_1 + 0x898) = (int)uVar5 / (int)uVar3;
  trapWord(5,uVar3 & ~((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)(uVar5 >> 0x1f)) - 1),
           0xffff);
  return;
}

