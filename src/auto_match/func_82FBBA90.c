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
extern unsigned int *auStack_50;
extern unsigned int fStack_40;
extern unsigned int *fStack_44;
extern int fn_82A1EFC0();
extern int fn_82F64A40();
extern int fn_82FBAA10();
extern int fn_82FBAB20();
extern unsigned int lbl_8216C63C;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;
extern unsigned int uStack_54;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82FBBA90(int param_1,uint *param_2)

{
  undefined4 *puVar2;
  ulonglong uVar1;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  double dVar6;
  undefined4 uStack_54;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 uStack_3c;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar2 = &uStack_54;
  lVar5 = 6;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uStack_3c = *(undefined1 *)(param_1 + 0x41);
  if (fStack_44 != *(float *)(param_1 + 0x34)) {
    *(float *)(param_1 + 0x34) = fStack_44;
    dVar6 = (double)fn_82F64A40((double)(lbl_8216C63C /
                                         ((float)*(uint *)(param_1 + 0x18) * fStack_44)));
    *(float *)(param_1 + 0x38) = (float)dVar6;
  }
  fStack_44 = *(float *)(param_1 + 0x38);
  uStack_48 = *(undefined4 *)(param_1 + 0x3c);
  if (param_2[2] == 0x11) {
    uVar1 = (ulonglong)*(ushort *)(param_2 + 3) - (ulonglong)*(ushort *)((int)param_2 + 0xe);
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x30);
    if ((uVar1 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0x30)) {
      uVar4 = uVar1;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0((ulonglong)*(ushort *)((int)param_2 + 0xe) * 4 + (ulonglong)*param_2,0,
                        (uVar4 & 0x3fffffff) << 2);
    }
    *(short *)((int)param_2 + 0xe) = *(short *)((int)param_2 + 0xe) + (short)uVar4;
    lVar5 = *(uint *)(param_1 + 0x30) - uVar4;
    *(int *)(param_1 + 0x30) = (int)lVar5;
    if (lVar5 != 0) {
      param_2[2] = 0x2d;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  }
  (**(code **)(param_1 + 4))(param_1,param_2,auStack_50);
  if (fStack_40 == *(float *)(param_1 + 0xc)) {
    fn_82FBAB20(param_1,param_2);
  }
  else {
    dVar6 = (double)fn_82FBAA10();
    *(float *)(param_1 + 0xc) = (float)dVar6;
  }
  return;
}

