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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_822F9B78();
extern int fn_82539560();
extern unsigned int iStack_1c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CD2E4;
extern unsigned int lbl_831CD2E8;


double fn_822F1BD0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  double dVar5;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x178);
  if (iVar2 == 1) {
    dVar5 = (double)lbl_821CC160;
  }
  else {
    if (iVar2 == 2) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x1bc);
      iVar3 = *(int *)(iVar2 + 0x2d8);
      fVar1 = *(float *)(iVar3 + 0x174);
                    /* WARNING: Subroutine does not return */
      fn_82539560((double)(*(float *)(*(int *)(iVar2 + 0x2e0) + 0x94) + *(float *)(iVar3 + 0x170)),
                   (double)(fVar1 * lbl_831CD2E4),(double)(fVar1 * lbl_831CD2E8),
                   (double)lbl_821CC160,(double)lbl_821CA460);
    }
    puVar4 = (undefined4 *)fn_822F9B78(auStack_20,*(undefined4 *)(param_1 + 0x18));
    dVar5 = (double)(**(code **)(*(int *)*puVar4 + 0x10))();
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  return dVar5;
}

