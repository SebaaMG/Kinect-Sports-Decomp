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
extern int fn_82C038C8();
extern unsigned int lbl_820ED0D8;
extern unsigned int uStack_50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82C13430(longlong *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  undefined8 uStack_50;
  
  uStack_50 = (ulonglong)(((U64)(uStack_50) >> 32) & 0xFFFFFFFF);
  if (param_1 == (longlong *)0x0) {
    uVar18 = 2;
  }
  else if ((param_2 - 0x18U < 0x50) ||
          (iVar19 = fn_82C038C8(param_1,*param_1,0x50,&uStack_50), iVar19 != 0x50)) {
    uVar18 = 3;
  }
  else {
    iVar20 = (((uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x23) * 0x100 +
              (uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x22)) * 0x100 +
             (uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x21)) * 0x100 +
             (uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x20);
    bVar1 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x37);
    bVar2 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x32);
    bVar3 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x36);
    bVar4 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x31);
    bVar5 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x30);
    bVar6 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x35);
    bVar7 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x33);
    bVar8 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x34);
    bVar9 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x3a);
    bVar10 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x39);
    bVar11 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x38);
    bVar12 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x3b);
    bVar13 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x42);
    bVar14 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x41);
    bVar15 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x40);
    bVar16 = *(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x43);
    iVar19 = (((uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x4b) * 0x100 +
              (uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x4a)) * 0x100 +
             (uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x49)) * 0x100 +
             (uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x48);
    if (((((uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x47) * 0x100 + (uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x46)
          ) * 0x100 + (uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x45)) * 0x100 +
         (uint)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x44) == iVar19) &&
       ((iVar20 != 0 ||
        ((((ulonglong)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x27) * 0x100 +
          (ulonglong)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x26)) * 0x100 +
         (ulonglong)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x25)) * 0x100 +
         (ulonglong)*(byte *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x24) != 0)))) {
      *(int *)((int)param_1 + 0x14) = iVar19;
      dVar17 = lbl_820ED0D8;
      *(int *)((int)param_1 + 0x1c) = iVar20;
      *(uint *)((int)param_1 + 0x24) =
           (((uint)bVar12 * 0x100 + (uint)bVar9) * 0x100 + (uint)bVar10) * 0x100 + (uint)bVar11;
      *(uint *)(param_1 + 7) =
           (((uint)bVar16 * 0x100 + (uint)bVar13) * 0x100 + (uint)bVar14) * 0x100 + (uint)bVar15;
      uVar18 = 0;
      *param_1 = (ulonglong)(param_2 - 0x18U) + *param_1;
      uStack_50 = ((((U64)(uStack_50)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)(longlong)
                 ((double)((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar3) * 0x100 + (ulonglong)bVar6
                           ) * 0x100 + (ulonglong)bVar8) * dVar17))) & ((U64)0xFFFFFFFF)) << 32));
      *(uint *)(param_1 + 4) =
           (((U64)(uStack_50) >> 32) & 0xFFFFFFFF) +
           (int)(((((ulonglong)bVar7 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar4) * 0x100
                 + (ulonglong)bVar5) / 10000);
    }
    else {
      uVar18 = 1;
    }
  }
  return uVar18;
}

