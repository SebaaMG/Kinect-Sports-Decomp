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
extern int fn_830EFAB8();
extern int fn_830EFF58();
extern int fn_830F0790();
extern int fn_830F1780();
extern unsigned int uStack0000003c;


undefined8
fn_830F2798(int param_1,int param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5,
             uint param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uStack0000003c;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xe0);
  if (((*(int *)(param_1 + 0xecc) == 0) || ((ulonglong)*(uint *)(param_1 + 0xed0) == 0)) ||
     ((ulonglong)*(uint *)(param_1 + 0xed4) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x32) >> 1;
    iVar4 = (int)param_5;
    lVar7 = (longlong)(int)((uint)*(ushort *)(param_2 + 0x4c) << 3) * (longlong)iVar4;
    lVar5 = (longlong)(int)((uint)*(ushort *)(param_2 + 0x4a) << 4) * (longlong)iVar4;
    lVar10 = lVar5 + (ulonglong)*(uint *)(param_1 + 0xec0) + (ulonglong)*(uint *)(param_1 + 0xdc);
    puVar8 = (uint *)((uint)uVar1 * iVar4 * 0x18 + *(int *)(param_1 + 0x110));
    lVar11 = lVar7 + *(uint *)(param_1 + 0xec4) + uVar6;
    lVar5 = lVar5 + (ulonglong)*(uint *)(param_1 + 0xee4);
    lVar9 = lVar7 + *(uint *)(param_1 + 0xed0) + uVar6;
    lVar7 = lVar7 + *(uint *)(param_1 + 0xed4) + uVar6;
    uStack0000003c = param_6;
    if ((param_5 & 0xffffffff) < (ulonglong)param_6) {
      do {
        uVar6 = 0;
        if ((ulonglong)uVar1 != 0) {
          lVar12 = lVar10;
          lVar13 = lVar11;
          do {
            uVar2 = *puVar8 >> 8 & 7;
            if (uVar2 != 4) {
              if (uVar2 == 0) {
                fn_830EFAB8(param_2,uVar6,param_5,(lVar5 - lVar10) + lVar12,
                                (lVar9 - lVar11) + lVar13,(lVar7 - lVar11) + lVar13,lVar12,lVar13);
              }
              else if (uVar2 == 1) {
                fn_830F0790();
              }
              else if (uVar2 < 3) {
                fn_830EFF58();
              }
              else {
                fn_830F1780();
              }
            }
            uVar6 = uVar6 + 1;
            lVar12 = lVar12 + 0x10;
            lVar13 = lVar13 + 8;
            puVar8 = puVar8 + 6;
            param_6 = uStack0000003c;
          } while ((uVar6 & 0xffffffff) < (ulonglong)uVar1);
        }
        uVar6 = (ulonglong)*(uint *)(param_1 + 0xe8);
        param_5 = param_5 + 1;
        lVar11 = uVar6 + lVar11;
        lVar10 = (ulonglong)*(uint *)(param_1 + 0xe4) + lVar10;
        lVar5 = (ulonglong)*(uint *)(param_1 + 0xe4) + lVar5;
        lVar9 = uVar6 + lVar9;
        lVar7 = uVar6 + lVar7;
      } while ((param_5 & 0xffffffff) < (ulonglong)param_6);
    }
    uVar3 = 0;
  }
  return uVar3;
}

