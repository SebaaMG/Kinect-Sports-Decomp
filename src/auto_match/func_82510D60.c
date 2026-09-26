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


void fn_82510D60(int param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  
  iVar2 = param_2;
  while( true ) {
    iVar5 = (iVar2 + 1) * 2;
    if (param_3 <= iVar5) break;
    puVar7 = (uint *)((iVar2 + 1) * 0x20 + param_1);
    if (*puVar7 < puVar7[-4]) {
      iVar5 = iVar5 + -1;
    }
    iVar1 = iVar5 * 0x10 + param_1;
    iVar4 = iVar2 * 0x10 + param_1;
    *(undefined4 *)(iVar2 * 0x10 + param_1) = *(undefined4 *)(iVar5 * 0x10 + param_1);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar4 = iVar2 * 0x10;
    iVar5 = param_3 * 0x10 + param_1;
    iVar1 = iVar4 + param_1;
    iVar2 = param_3 + -1;
    *(undefined4 *)(iVar4 + param_1) = *(undefined4 *)(iVar5 + -0x10);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + -0xc);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar5 + -8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar5 + -4);
  }
  uVar6 = iVar2 - 1;
  iVar5 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while (iVar1 = iVar5, param_2 < iVar2) {
    puVar7 = (uint *)(iVar1 * 0x10 + param_1);
    if (*param_4 <= *puVar7) break;
    puVar3 = (uint *)(iVar2 * 0x10 + param_1);
    uVar6 = iVar1 - 1;
    *puVar3 = *puVar7;
    puVar3[1] = puVar7[1];
    puVar3[2] = puVar7[2];
    puVar3[3] = puVar7[3];
    iVar5 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    iVar2 = iVar1;
  }
  iVar5 = iVar2 * 0x10 + param_1;
  *(uint *)(iVar2 * 0x10 + param_1) = *param_4;
  *(uint *)(iVar5 + 4) = param_4[1];
  *(uint *)(iVar5 + 8) = param_4[2];
  *(uint *)(iVar5 + 0xc) = param_4[3];
  return;
}

