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
extern int fn_8268B610();


void fn_826A70D0(byte *param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte abStack_130 [255];
  byte abStack_31 [49];
  
  pbVar4 = abStack_130;
  pbVar8 = param_1;
LAB_826a71b0:
  if (param_1 + param_2 <= pbVar8) {
    *pbVar4 = 0;
    fn_8268B610(param_3,abStack_130,0xffffffffffffffff);
    return;
  }
  bVar1 = *pbVar8;
  pbVar7 = pbVar8 + 1;
  if (abStack_31 <= pbVar4 + 1) {
    *pbVar4 = 0;
    fn_8268B610(param_3,abStack_130,0xffffffffffffffff);
    pbVar4 = abStack_130;
  }
  if (bVar1 == 0x25) goto code_r0x826a712c;
  *pbVar4 = bVar1;
  goto LAB_826a71ac;
code_r0x826a712c:
  bVar1 = *pbVar7;
  if ((bVar1 < 0x61) || (uVar3 = bVar1 - 0x20, 0x7a < bVar1)) {
    uVar3 = (uint)bVar1;
  }
  bVar1 = pbVar8[2];
  if ((bVar1 < 0x61) || (uVar2 = bVar1 - 0x20, 0x7a < bVar1)) {
    uVar2 = (uint)bVar1;
  }
  iVar5 = uVar3 - 0x30;
  pbVar7 = pbVar8 + 3;
  if (9 < iVar5) {
    iVar5 = uVar3 - 0x37;
  }
  iVar6 = uVar2 - 0x30;
  if (9 < iVar6) {
    iVar6 = uVar2 - 0x37;
  }
  pbVar8 = pbVar7;
  if ((iVar5 < 0x10) && (iVar6 < 0x10)) {
    *pbVar4 = (char)iVar5 * '\x10' + (char)iVar6;
LAB_826a71ac:
    pbVar4 = pbVar4 + 1;
    pbVar8 = pbVar7;
  }
  goto LAB_826a71b0;
}

