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
extern int fn_825ACB58();
extern int fn_828B00A0();


longlong fn_825ABB28(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  lVar9 = 0;
  lVar11 = 0;
  lVar8 = 0;
  lVar10 = 0;
  uVar3 = fn_828B00A0((ulonglong)*(uint *)(param_1 + 0x10) + 0x278);
  uVar1 = *(uint *)(param_1 + 0xf4);
  uVar13 = 1;
  if (1 < uVar1) {
    param_1 = param_1 + 0xe4;
    do {
      iVar4 = fn_825ACB58(param_1,uVar13);
      if (uVar3 <= *(longlong *)(iVar4 + 0x40) + 3000U) {
        lVar11 = lVar11 + 1;
        iVar4 = fn_825ACB58(param_1,uVar13);
        uVar2 = *(uint *)(iVar4 + 0x50);
        iVar4 = fn_825ACB58(param_1,uVar13);
        lVar9 = ((ulonglong)uVar2 - *(longlong *)(iVar4 + 0x40)) + lVar9;
        pfVar5 = (float *)fn_825ACB58(param_1,uVar13);
        lVar12 = uVar13 - 1;
        pfVar6 = (float *)fn_825ACB58(param_1,lVar12);
        if (*pfVar5 == *pfVar6) {
          iVar4 = fn_825ACB58(param_1,uVar13);
          iVar7 = fn_825ACB58(param_1,lVar12);
          if (*(float *)(iVar4 + 4) == *(float *)(iVar7 + 4)) {
            iVar4 = fn_825ACB58(param_1,uVar13);
            iVar7 = fn_825ACB58(param_1,lVar12);
            if (*(float *)(iVar4 + 8) == *(float *)(iVar7 + 8)) goto LAB_825abc6c;
          }
        }
        lVar10 = lVar10 + 1;
        iVar4 = fn_825ACB58(param_1,lVar12);
        iVar7 = fn_825ACB58(param_1,uVar13);
        lVar8 = (*(longlong *)(iVar7 + 0x40) - *(longlong *)(iVar4 + 0x40)) + lVar8;
      }
LAB_825abc6c:
      uVar13 = uVar13 + 1;
    } while ((uVar13 & 0xffffffff) < (ulonglong)uVar1);
    if (1 < lVar11) goto LAB_825abc88;
  }
  lVar11 = 1;
LAB_825abc88:
  if (lVar10 < 2) {
    lVar10 = 1;
  }
  return (longlong)(int)(lVar8 / lVar10) + (longlong)(int)(lVar9 / lVar11);
}

