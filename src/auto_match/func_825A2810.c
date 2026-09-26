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
extern unsigned int *auStack_60;
extern int fn_82520158();
extern int fn_82560100();
extern unsigned int lbl_82192480;
extern unsigned int lbl_821C7F50;
extern unsigned int lbl_821CC160;
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825A2810(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  int iVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_60 [96];
  
  if (*(int *)(param_2 + 0x93c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x304) == 0) {
    fn_82520158(0xffffffff821c7f60,param_1 + 0x304,0);
  }
  if (*(int *)(param_1 + 0x624) == 0) {
    iVar4 = 0;
  }
  else {
    if (*(float *)(param_1 + 0x62c) < lbl_82192480) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x308);
    if (3 < (int)uVar5) {
      return;
    }
    uVar6 = *(uint *)(param_1 + 0x630);
    uVar1 = *(uint *)(param_1 + 0x634);
    if (uVar6 < uVar1) {
      dVar7 = (double)lbl_821CC160;
      do {
        if ((uVar5 & 3) == 0) {
          puVar2 = (undefined4 *)((uint)(&lbl_821C7F50 + (int)in_r0) & 0xfffffff0);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];{ V16 _vt0 = vectorAddFloatingPoint(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
          puVar3 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          fn_82560100(dVar7,param_2,param_1 + 0x304,auStack_60,auStack_60,0,0,0,0);
        }
        uVar6 = uVar6 + 0x20;
        uVar5 = uVar5 + 1;
      } while (uVar6 < uVar1);
    }
    iVar4 = *(int *)(param_1 + 0x308) + 1;
  }
  *(int *)(param_1 + 0x308) = iVar4;
  return;
}

