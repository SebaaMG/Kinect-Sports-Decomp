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
extern int fn_82F691F0();
extern unsigned int iStack_2c;
extern unsigned int lbl_82006848;


void fn_82FE62E8(int param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iStack_2c;
  
  iVar1 = *(int *)(param_1 + 8);
  param_2[2] = 0x2d;
  uVar4 = (longlong)(int)(uint)*(ushort *)(param_2 + 3) * (longlong)iVar1;
  if (*(short *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*param_2,0,uVar4);
  }
  fVar2 = *(float *)(*(int *)(param_1 + 0x1c) + 4) + *(float *)(param_1 + 0x10);
  if (fVar2 < lbl_82006848) {
    fVar2 = lbl_82006848;
  }
  iStack_2c = (int)(longlong)((float)*(uint *)(param_1 + 4) * fVar2);
  uVar3 = (longlong)(iStack_2c * *(short *)(param_1 + 0x14)) * (longlong)*(int *)(param_1 + 8);
  if ((uVar3 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0xc)) {
    param_2[2] = 0x11;
    return;
  }
  uVar3 = uVar3 - *(uint *)(param_1 + 0xc);
  if ((uVar4 & 0xffffffff) < (uVar3 & 0xffffffff)) {
    uVar3 = uVar4;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*param_2,0,uVar3);
}

