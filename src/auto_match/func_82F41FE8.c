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


void fn_82F41FE8(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  
  iVar2 = param_2 + 1 >> 1;
  lVar7 = (longlong)(param_6 >> 1);
  if (0 < lVar7) {
    do {
      if (0 < iVar2) {
        puVar6 = (undefined1 *)(param_4 + -1);
        lVar9 = (longlong)iVar2;
        pbVar8 = param_1;
        do {
          pbVar3 = pbVar8 + param_3;
          pbVar4 = pbVar8 + param_3 + 1;
          pbVar5 = pbVar8 + 1;
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 2;
          puVar6 = puVar6 + 1;
          *puVar6 = (char)((int)((uint)*pbVar3 + (uint)*pbVar4 + (uint)*pbVar5 + (uint)bVar1 + 2) >>
                          2);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar7 = lVar7 + -1;
      param_1 = param_1 + param_3 * 2;
      param_4 = param_4 + param_5;
    } while (lVar7 != 0);
  }
  return;
}

