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


void fn_829BEF70(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  
  iVar14 = 0;
  iVar3 = *param_4;
  if (0 < *(int *)(param_1 + 0x13c)) {
    do {
      iVar12 = 0;
      piVar13 = (int *)(iVar14 * 4 + iVar3 + -4);
      do {
        if (iVar12 == 0) {
          pbVar4 = (byte *)param_3[-1];
        }
        else {
          pbVar4 = (byte *)param_3[1];
        }
        iVar14 = iVar14 + 1;
        pbVar1 = (byte *)*param_3 + 1;
        pbVar2 = pbVar4 + 1;
        lVar9 = (ulonglong)*(byte *)*param_3 * 3 + (ulonglong)*pbVar4;
        iVar6 = (int)lVar9;
        lVar10 = (ulonglong)*pbVar1 * 3 + (ulonglong)*pbVar2;
        piVar13 = piVar13 + 1;
        puVar5 = (undefined1 *)*piVar13;
        *puVar5 = (char)((iVar6 + 2) * 4 >> 4);
        puVar5[1] = (char)(iVar6 * 3 + (int)lVar10 + 7 >> 4);
        lVar8 = (ulonglong)*(uint *)(param_2 + 0x28) - 2;
        while( true ) {
          puVar5 = puVar5 + 2;
          iVar7 = (int)lVar10;
          if (lVar8 == 0) break;
          pbVar1 = pbVar1 + 1;
          pbVar2 = pbVar2 + 1;
          iVar6 = iVar7 + (int)(lVar10 << 1);
          lVar11 = (ulonglong)*pbVar1 * 3 + (ulonglong)*pbVar2;
          *puVar5 = (char)(iVar6 + (int)lVar9 + 8 >> 4);
          puVar5[1] = (char)(iVar6 + (int)lVar11 + 7 >> 4);
          lVar8 = lVar8 + -1;
          lVar9 = lVar10;
          lVar10 = lVar11;
          iVar6 = iVar7;
        }
        iVar12 = iVar12 + 1;
        *puVar5 = (char)(iVar7 + (int)(lVar10 << 1) + iVar6 + 8 >> 4);
        puVar5[1] = (char)((int)(lVar10 << 2) + 7 >> 4);
      } while (iVar12 < 2);
      param_3 = param_3 + 1;
    } while (iVar14 < *(int *)(param_1 + 0x13c));
  }
  return;
}

