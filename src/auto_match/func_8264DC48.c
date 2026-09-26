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
extern int fn_82643A48();


void fn_8264DC48(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  longlong lVar9;
  
  iVar4 = fn_82643A48(param_1,0x905);
  *(undefined4 *)(iVar4 + 4) = 0x11921;
  iVar7 = 0;
  puVar8 = (ushort *)(param_2 + -2);
  *(undefined4 *)(iVar4 + 8) = 0;
  lVar9 = 0x100;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(iVar4 + 0x10) = 0x1927;
  piVar6 = (int *)(iVar4 + 0x14);
  *piVar6 = 7;
  do {
    uVar1 = puVar8[0x201];
    uVar2 = puVar8[0x101];
    puVar8 = puVar8 + 1;
    uVar3 = *puVar8;
    piVar6[1] = 0x1925;
    uVar5 = ((uVar3 & 0xffc0) << 10 | uVar2 & 0x3ffffc0) << 4 | (uint)(uVar1 >> 6);
    piVar6[2] = uVar5;
    iVar7 = iVar7 + 1;
    piVar6[3] = -0x3ffabb00;
    piVar6[4] = 7;
    piVar6[5] = 0x1925;
    piVar6[6] = uVar5;
    piVar6[7] = -1;
    piVar6[8] = 0x1922;
    piVar6 = piVar6 + 9;
    *piVar6 = iVar7;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(int **)(param_1 + 0x30) = piVar6;
  return;
}

