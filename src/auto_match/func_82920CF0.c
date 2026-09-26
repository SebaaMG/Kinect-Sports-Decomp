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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_829206C8();
extern int fn_82F68CC0();


undefined8 fn_82920CF0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  iVar7 = *param_1;
  iVar9 = param_1[1];
  uVar10 = *(uint *)(iVar7 + 4) ^ *(uint *)(iVar9 + 4);
  if (((((CONCAT44(uVar10,uVar10) & 0xfffffffffffffe3f) == 0) && (*(int *)(iVar7 + 0x18) == 0)) &&
      (*(int *)(iVar9 + 0x68) == *(int *)(iVar7 + 0x68))) &&
     (((*(int *)(iVar9 + 0x6c) == *(int *)(iVar7 + 0x6c) &&
       (*(int *)(iVar9 + 0x70) == *(int *)(iVar7 + 0x70))) &&
      (*(int *)(iVar9 + 0x10) == *(int *)(iVar7 + 0x10))))) {
    if (*(int *)(iVar9 + 0xc) == 0) {
      uVar3 = fn_829206C8();
      return uVar3;
    }
    if (*(int *)(iVar9 + 0x1c) != 0) {
      pbVar8 = *(byte **)(iVar9 + 0x38);
      pbVar6 = *(byte **)(iVar7 + 0x38);
      if (pbVar8 != pbVar6) {
        pbVar4 = pbVar8 + 0x400;
        do {
          bVar1 = *pbVar8;
          bVar2 = *pbVar6;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar8 = pbVar8 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar8 != pbVar4);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82920e70;
      }
    }
    *(undefined4 *)(iVar9 + 0x10) = 0;
    uVar10 = 0;
    *(undefined4 *)(*param_1 + 0x10) = 0;
    iVar7 = param_1[1];
    if (*(int *)(iVar7 + 0x70) != 0) {
      iVar9 = *param_1;
      uVar5 = *(uint *)(iVar7 + 0x6c);
      do {
        uVar13 = 0;
        lVar12 = (longlong)*(int *)(param_1[1] + 100) * (longlong)(int)uVar10 +
                 (ulonglong)*(uint *)(param_1[1] + 0x20);
        lVar11 = (longlong)*(int *)(iVar9 + 100) * (longlong)(int)uVar10 +
                 (ulonglong)*(uint *)(iVar9 + 0x20);
        if (uVar5 != 0) {
          do {
            fn_82F68CC0(lVar12,lVar11,*(undefined4 *)(iVar7 + 0x74));
            iVar7 = param_1[1];
            iVar9 = *param_1;
            uVar13 = uVar13 + 1;
            uVar5 = *(uint *)(iVar7 + 0x6c);
            lVar12 = (ulonglong)*(uint *)(iVar7 + 0x60) + lVar12;
            lVar11 = (ulonglong)*(uint *)(iVar9 + 0x60) + lVar11;
          } while (uVar13 < uVar5);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(iVar7 + 0x70));
    }
    uVar3 = 0;
  }
  else {
LAB_82920e70:
    uVar3 = 0xffffffff80004005;
  }
  return uVar3;
}

