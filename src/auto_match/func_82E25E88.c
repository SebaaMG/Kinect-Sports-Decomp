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
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int lbl_83187448;
extern unsigned int lbl_83187510;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E25E88(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  uVar4 = lbl_8208E058;
  uVar3 = lbl_8208E054;
  iVar6 = 0;
  uVar7 = 0;
  puVar8 = (undefined4 *)0x83187514;
  do {
    pbVar9 = (byte *)*puVar8;
    if (pbVar9 == lbl_83187448) break;
    pbVar10 = param_2;
    do {
      bVar1 = *pbVar10;
      bVar2 = *pbVar9;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar9 = pbVar9 + 1;
    } while (pbVar10 != param_2 + 0x10);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      uVar5 = (&lbl_83187510)[iVar6 * 9];
      param_1[3] = lbl_8208E05C;
      param_1[2] = uVar4;
      param_1[1] = uVar3;
      *param_1 = uVar5;
      return;
    }
    uVar7 = uVar7 + 0x24;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 9;
  } while ((uVar7 & 0xffffffff) != 0x804);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  return;
}

