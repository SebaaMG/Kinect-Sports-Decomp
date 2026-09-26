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


undefined8 fn_82A2D360(short *param_1,int param_2,ushort *param_3)

{
  undefined2 *puVar1;
  bool bVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pbVar9 = *(byte **)(param_3 + 2);
  puVar1 = *(undefined2 **)(param_1 + 2);
  bVar2 = false;
  pbVar6 = pbVar9 + *param_3;
  puVar5 = puVar1;
  if (pbVar9 < pbVar6) {
    iVar7 = (int)pbVar6 - (int)pbVar9;
    do {
      uVar3 = (uint)*pbVar9;
      pbVar10 = pbVar9 + 1;
      iVar8 = iVar7 + -1;
      if ((param_2 != 0) && (0x7f < uVar3)) {
        if (uVar3 < 0xc0) {
          return 0;
        }
        if (uVar3 < 0xe0) {
          if (iVar8 < 1) {
            return 0;
          }
          if (0x3f < *pbVar10 - 0x80) {
            return 0;
          }
          uVar3 = (uVar3 & 0x1f) << 6 | *pbVar10 - 0x80 & 0x3f;
          pbVar10 = pbVar9 + 2;
          iVar8 = iVar7 + -2;
        }
        else {
          if (0xef < uVar3) {
            return 0;
          }
          if (iVar8 < 2) {
            return 0;
          }
          if (0x3f < *pbVar10 - 0x80) {
            return 0;
          }
          if (0x3f < pbVar9[2] - 0x80) {
            return 0;
          }
          uVar3 = ((uVar3 & 0xf) << 6 | *pbVar10 - 0x80 & 0x3f) << 6 | pbVar9[2] - 0x80 & 0x3f;
          pbVar10 = pbVar9 + 3;
          iVar8 = iVar7 + -3;
        }
      }
      iVar7 = iVar8;
      pbVar9 = pbVar10;
      if (bVar2) {
        if (uVar3 != 0x2e) {
          return 0;
        }
        bVar2 = false;
      }
      if (uVar3 == 0x2a) {
        bVar2 = true;
        uVar4 = 0x2a;
      }
      else {
        uVar4 = RtlUpcaseUnicodeChar();
      }
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
    } while (pbVar9 < pbVar6);
  }
  *param_1 = (short)puVar5 - (short)puVar1;
  return 1;
}

