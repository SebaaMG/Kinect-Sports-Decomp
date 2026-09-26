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


longlong fn_829BBAA8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  
  iVar1 = *(int *)(param_1 + 0x144);
  iVar2 = *(int *)(param_1 + 0x1b0);
  while ((*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x9c) ||
         ((*(int *)(param_1 + 0x94) == *(int *)(param_1 + 0x9c) &&
          (*(uint *)(param_1 + 0x98) <= *(uint *)(param_1 + 0xa0)))))) {
    lVar4 = (*(code *)**(undefined4 **)(param_1 + 0x1b8))(param_1);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
  }
  iVar7 = 0;
  iVar13 = *(int *)(param_1 + 0xdc);
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar8 = 0;
    do {
      if (*(int *)(iVar13 + 0x30) != 0) {
        puVar5 = (uint *)(**(code **)(*(int *)(param_1 + 4) + 0x20))
                                   (param_1,*(undefined4 *)(iVar2 + 0x48 + iVar8),
                                    (longlong)*(int *)(param_1 + 0xa0) *
                                    (longlong)*(int *)(iVar13 + 0xc),*(int *)(iVar13 + 0xc),0);
        if (*(uint *)(param_1 + 0xa0) < iVar1 - 1U) {
          uVar9 = (ulonglong)*(uint *)(iVar13 + 0xc);
        }
        else {
          uVar6 = *(uint *)(iVar13 + 0xc);
          trapWord(6,(ulonglong)uVar6,0);
          uVar9 = (ulonglong)*(uint *)(iVar13 + 0x20) -
                  (longlong)(int)(*(uint *)(iVar13 + 0x20) / uVar6) * (longlong)(int)uVar6;
          if (uVar9 == 0) {
            uVar9 = (ulonglong)uVar6;
          }
        }
        uVar10 = (ulonglong)*(uint *)(iVar8 + param_2);
        pcVar3 = *(code **)(*(int *)(param_1 + 0x1c4) + iVar8 + 4);
        if (0 < (int)uVar9) {
          uVar6 = *(uint *)(iVar13 + 0x1c);
          do {
            uVar11 = (ulonglong)*puVar5;
            lVar4 = 0;
            uVar12 = 0;
            if (uVar6 != 0) {
              do {
                (*pcVar3)(param_1,iVar13,uVar11,uVar10,lVar4);
                uVar6 = *(uint *)(iVar13 + 0x1c);
                uVar12 = uVar12 + 1;
                uVar11 = uVar11 + 0x80;
                lVar4 = (ulonglong)*(uint *)(iVar13 + 0x24) + lVar4;
              } while (uVar12 < uVar6);
            }
            uVar9 = uVar9 - 1;
            puVar5 = puVar5 + 1;
            uVar10 = ((ulonglong)*(uint *)(iVar13 + 0x24) & 0x3fffffff) * 4 + uVar10;
          } while (uVar9 != 0);
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
      iVar13 = iVar13 + 0x54;
    } while (iVar7 < *(int *)(param_1 + 0x24));
  }
  uVar9 = (ulonglong)*(uint *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0xa0) = (int)uVar9;
  return 4 - (ulonglong)(uVar9 < *(uint *)(param_1 + 0x144));
}

