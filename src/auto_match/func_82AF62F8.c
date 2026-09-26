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
extern int fn_82ABDD90();
extern int fn_82B85910();


longlong fn_82AF62F8(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  int iVar8;
  longlong lVar7;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  
  if (param_1 == param_2) {
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar8 == iVar1) {
    iVar2 = *(int *)(*(int *)(param_1 & 0xfffff000) + 0x94);
    if ((iVar8 == *(int *)(iVar2 + 0x234)) && (iVar1 == *(int *)(iVar2 + 0x234))) {
      if (((*(uint *)(param_1 + 8) & 0x40000000) == 0) ||
         ((*(uint *)(param_2 + 8) & 0x40000000) == 0)) goto LAB_82af64cc;
      uVar11 = (ulonglong)(*(uint *)(param_1 + 0x14) >> 3);
      uVar10 = (ulonglong)(*(uint *)(param_2 + 0x14) >> 3);
    }
    else {
      uVar3 = *(uint *)(param_1 + 8) >> 7 & 0x7f;
      if ((uVar3 == 0x7d) || (bVar6 = false, uVar3 == 0x7c)) {
        bVar6 = true;
      }
      if (bVar6) {
        uVar4 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
        if ((uVar4 == 0x7d) || (bVar6 = false, uVar4 == 0x7c)) {
          bVar6 = true;
        }
        if (!bVar6) {
          return 1;
        }
        if (uVar3 == 0x7c) {
          if (uVar4 != 0x7c) {
            return 1;
          }
          uVar3 = *(uint *)(param_1 + 8);
          iVar8 = fn_82ABDD90(iVar2,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7);
          uVar3 = *(uint *)(param_2 + 8);
          puVar12 = (uint *)(iVar8 + (param_1 - 8));
          iVar8 = fn_82ABDD90(iVar2,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7);
          puVar5 = (uint *)(iVar8 + (param_2 - 8));
          if (((puVar12[1] & 0x100000) != 0) && ((puVar5[1] & 0x100000) != 0)) {
            uVar3 = *puVar12;
            uVar4 = *puVar5;
            lVar7 = ((ulonglong)uVar3 & 0x7fff) - ((ulonglong)uVar4 & 0x7fff);
            if (lVar7 != 0) {
              return lVar7;
            }
            uVar10 = (ulonglong)(uVar4 >> 0xf) & 0x3fff;
            uVar11 = (ulonglong)(uVar3 >> 0xf) & 0x3fff;
            goto LAB_82af6528;
          }
        }
        else {
          if (uVar4 == 0x7c) {
            return -1;
          }
          uVar3 = *(uint *)(param_1 + 8) >> 0xe;
          uVar11 = (ulonglong)uVar3 & 7;
          uVar10 = (ulonglong)(*(uint *)(param_2 + 8) >> 0xe) & 7;
          if (uVar11 != uVar10) {
            return uVar11 - uVar10;
          }
          uVar10 = 0;
          if ((uVar3 & 7) != 0) {
            puVar12 = (uint *)(param_2 + 0x2c);
            do {
              lVar7 = (ulonglong)*(uint *)((param_1 - param_2) + (int)puVar12) - (ulonglong)*puVar12
              ;
              if (lVar7 != 0) {
                return lVar7;
              }
              uVar10 = uVar10 + 1;
              puVar12 = puVar12 + 1;
            } while ((uVar10 & 0xffffffff) < uVar11);
          }
        }
LAB_82af64cc:
        cVar9 = fn_82B85910(param_1,param_2);
        return (-(ulonglong)(cVar9 != '\0') & 2) - 1;
      }
      uVar3 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
      if ((uVar3 == 0x7d) || (bVar6 = false, uVar3 == 0x7c)) {
        bVar6 = true;
      }
      if (bVar6) {
        return -1;
      }
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x10) & 0xffff;
      uVar10 = (ulonglong)*(uint *)(param_2 + 0x10) & 0xffff;
    }
  }
  else {
    uVar10 = (ulonglong)*(uint *)(iVar1 + 0x30) & 0x7ffff;
    uVar11 = (ulonglong)*(uint *)(iVar8 + 0x30) & 0x7ffff;
  }
LAB_82af6528:
  return uVar11 - uVar10;
}

