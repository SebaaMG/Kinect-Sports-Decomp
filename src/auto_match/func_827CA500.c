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


void fn_827CA500(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  iVar12 = 0;
  iVar3 = *param_4;
  if (0 < *(int *)(param_1 + 0x114)) {
    do {
      iVar10 = 0;
      piVar11 = (int *)(iVar12 * 4 + iVar3 + -4);
      do {
        if (iVar10 == 0) {
          pbVar4 = (byte *)param_3[-1];
        }
        else {
          pbVar4 = (byte *)param_3[1];
        }
        iVar12 = iVar12 + 1;
        pbVar1 = (byte *)*param_3 + 1;
        pbVar2 = pbVar4 + 1;
        piVar11 = piVar11 + 1;
        puVar5 = (undefined1 *)*piVar11;
        iVar7 = (uint)*(byte *)*param_3 * 3 + (uint)*pbVar4;
        iVar8 = (uint)*pbVar1 * 3 + (uint)*pbVar2;
        *puVar5 = (char)((iVar7 + 2) * 4 >> 4);
        puVar5[1] = (char)(iVar7 * 3 + iVar8 + 7 >> 4);
        for (lVar6 = (ulonglong)*(uint *)(param_2 + 0x28) - 2; puVar5 = puVar5 + 2, lVar6 != 0;
            lVar6 = lVar6 + -1) {
          pbVar1 = pbVar1 + 1;
          pbVar2 = pbVar2 + 1;
          iVar9 = (uint)*pbVar1 * 3 + (uint)*pbVar2;
          *puVar5 = (char)(iVar8 * 3 + iVar7 + 8 >> 4);
          puVar5[1] = (char)(iVar8 * 3 + iVar9 + 7 >> 4);
          iVar7 = iVar8;
          iVar8 = iVar9;
        }
        iVar10 = iVar10 + 1;
        *puVar5 = (char)(iVar8 * 3 + iVar7 + 8 >> 4);
        puVar5[1] = (char)(iVar8 * 4 + 7 >> 4);
      } while (iVar10 < 2);
      param_3 = param_3 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x114));
  }
  return;
}

