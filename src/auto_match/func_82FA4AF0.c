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
extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;


undefined8 fn_82FA4AF0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0x1f;
  }
  else {
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)(param_1 + 8) = param_2[1];
    *(undefined4 *)(param_1 + 0xc) = param_2[2];
    dVar8 = (double)lbl_82005718;
    uVar3 = lbl_82015618;
    dVar7 = (double)fn_82F655D8(lbl_82015618,
                                      (double)(float)((double)(float)param_2[3] * dVar8));
    *(float *)(param_1 + 0x10) = (float)dVar7;
    dVar7 = (double)fn_82F655D8(uVar3,(double)(float)((double)(float)param_2[4] * dVar8));
    *(float *)(param_1 + 0x14) = (float)dVar7;
    *(undefined4 *)(param_1 + 0x18) = param_2[5];
    bVar1 = *(byte *)(param_2 + 6);
    *(uint *)(param_1 + 0x1c) = (uint)bVar1 + (-(uint)(bVar1 == 0) - (bVar1 - 1));
    piVar5 = (int *)((int)param_2 + 0x19);
    iVar2 = *piVar5;
    *(int *)(param_1 + 0x20) = iVar2;
    if ((iVar2 == 1) && (uVar6 = 0, *(int *)(param_1 + 0xc) != 0)) {
      piVar4 = (int *)(param_1 + 0x20);
      do {
        piVar5 = piVar5 + 1;
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 1;
        *piVar4 = *piVar5;
      } while (uVar6 < *(uint *)(param_1 + 0xc));
    }
    uVar3 = 1;
  }
  return uVar3;
}

