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
extern int fn_8277C100();
extern int fn_8277C2A0();
extern int fn_82782068();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_82782658(undefined8 param_1,double param_2)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong in_r6;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double extraout_f1;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar2 = fn_82F6A548();
  uVar4 = 0;
  dVar7 = extraout_f1;
  if ((ulonglong)*(uint *)(iVar2 + 0xbc) != 0) {
    do {
      dVar7 = (double)*(float *)(*(int *)(((uint)uVar4 >> 4 & 0xffffffc) + *(int *)(iVar2 + 200)) +
                                 ((uint)uVar4 & 0x3f) * 0xc + 8);
      if (extraout_f1 < dVar7) break;
      uVar4 = uVar4 + 1;
      in_r6 = 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 0xbc));
  }
  dVar6 = extraout_f1;
  uVar1 = fn_8277C2A0(iVar2,0,uVar4);
  if ((in_r6 & 0xffffffff) != 0) {
    fn_8277C100(uVar1,iVar2 + 0x98);
  }
  uVar3 = *(uint *)(iVar2 + 0xbc);
  if ((uVar4 & 0xffffffff) < (ulonglong)uVar3) {
    dVar8 = dVar7;
    do {
      uVar5 = uVar4;
      dVar7 = dVar8;
      if ((uVar4 & 0xffffffff) < (ulonglong)uVar3) {
        do {
          dVar7 = (double)*(float *)(*(int *)(((uint)uVar5 >> 4 & 0xffffffc) + *(int *)(iVar2 + 200)
                                             ) + ((uint)uVar5 & 0x3f) * 0xc + 8);
          if (dVar8 < dVar7) break;
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < (ulonglong)uVar3);
      }
      fn_8277C100(iVar2,iVar2 + 0x98);
      fn_82782068(dVar6,iVar2,iVar2 + 0x98);
      dVar6 = dVar8;
      fn_8277C2A0(iVar2,uVar4,uVar5);
      uVar3 = *(uint *)(iVar2 + 0xbc);
      uVar4 = uVar5;
      dVar8 = dVar7;
    } while ((uVar5 & 0xffffffff) < (ulonglong)uVar3);
  }
  fn_8277C100(iVar2,iVar2 + 0x8c);
  if (dVar7 < param_2) {
    fn_82782068(dVar7,iVar2,iVar2 + 0x8c);
  }
  fn_82F6A594();
  return;
}

