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


undefined8 fn_82C180B8(int *param_1,longlong param_2,ushort *param_3,ulonglong param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  iVar2 = *param_1;
  uVar3 = param_1[0x5a];
  uVar1 = *param_3;
  trapWord(6,(ulonglong)uVar3,0);
  trapWord(6,(ulonglong)*(uint *)(iVar2 + 0x58),0);
  if (((param_4 & 0xffffffff) / (ulonglong)*(uint *)(iVar2 + 0x58)) / (ulonglong)uVar3 >> 1 <
      (ulonglong)uVar1) {
    uVar5 = 0xffffffff80070057;
  }
  else {
    iVar12 = 0;
    if (0 < (int)uVar3) {
      iVar9 = 0;
      iVar10 = ((uint)uVar1 * 2 + -1) * uVar3;
      iVar11 = (uVar1 - 1) * uVar3;
      do {
        iVar4 = *(int *)(iVar2 + 0x58);
        lVar14 = (longlong)iVar11 * (longlong)iVar4 + param_2;
        uVar15 = (longlong)iVar10 * (longlong)iVar4 + param_2;
        uVar6 = (**(code **)(iVar2 + 0x20c))(lVar14,iVar4,*(undefined2 *)(iVar2 + 0x6e),0);
        uVar13 = (longlong)(int)(iVar12 + uVar3) * (longlong)*(int *)(iVar2 + 0x58) + param_2;
        uVar5 = uVar6;
        uVar7 = uVar6;
        if ((uVar13 & 0xffffffff) < (uVar15 & 0xffffffff)) {
          do {
            (**(code **)(iVar2 + 0x208))(uVar5,uVar15,iVar2,0);
            lVar8 = (longlong)*(int *)(iVar2 + 0x58) * (longlong)(int)uVar3;
            lVar14 = lVar14 - lVar8;
            lVar8 = uVar15 - lVar8;
            uVar7 = (**(code **)(iVar2 + 0x20c))
                              (lVar14,*(int *)(iVar2 + 0x58),*(undefined2 *)(iVar2 + 0x6e),0);
            (**(code **)(iVar2 + 0x208))
                      ((longlong)((int)uVar5 >> 1) + (longlong)((int)uVar7 >> 1),lVar8,iVar2,0);
            uVar15 = lVar8 - (longlong)(int)uVar3 * (longlong)*(int *)(iVar2 + 0x58);
            uVar5 = uVar7;
          } while ((uVar13 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        (**(code **)(iVar2 + 0x208))(uVar7,uVar15,iVar2,0);
        (**(code **)(iVar2 + 0x208))
                  ((longlong)(*(int *)(iVar9 + param_1[0x56]) >> 1) + (longlong)((int)uVar7 >> 1),
                   uVar15 - (longlong)(int)uVar3 * (longlong)*(int *)(iVar2 + 0x58),iVar2,0);
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 1;
        *(int *)(iVar9 + param_1[0x56]) = (int)uVar6;
        iVar9 = iVar9 + 4;
      } while (iVar12 < (int)uVar3);
    }
    uVar5 = 0;
    *param_3 = *param_3 << 1;
  }
  return uVar5;
}

