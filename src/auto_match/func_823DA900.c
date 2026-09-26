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


void fn_823DA900(int param_1,int param_2,int param_3,undefined4 *param_4,code *param_5)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2;
  while( true ) {
    iVar6 = (iVar5 + 1) * 2;
    if (param_3 <= iVar6) break;
    iVar1 = (iVar5 + 1) * 0x18 + param_1;
    cVar2 = (*param_5)(iVar1,iVar1 + -0xc);
    if (cVar2 != '\0') {
      iVar6 = iVar6 + -1;
    }
    puVar3 = (undefined4 *)(iVar6 * 0xc + param_1);
    iVar1 = iVar5 * 0xc + param_1;
    *(undefined4 *)(iVar5 * 0xc + param_1) = *puVar3;
    *(undefined4 *)(iVar1 + 4) = puVar3[1];
    *(undefined4 *)(iVar1 + 8) = puVar3[2];
    iVar5 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar1 = param_3 * 0xc + param_1;
    iVar6 = iVar5 * 0xc + param_1;
    *(undefined4 *)(iVar5 * 0xc + param_1) = *(undefined4 *)(iVar1 + -0xc);
    iVar5 = param_3 + -1;
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar1 + -8);
    *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar1 + -4);
  }
  uVar4 = iVar5 - 1;
  iVar6 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  while (param_2 < iVar5) {
    puVar3 = (undefined4 *)(iVar6 * 0xc + param_1);
    cVar2 = (*param_5)(puVar3,param_4);
    if (cVar2 == '\0') break;
    *(undefined4 *)(iVar5 * 0xc + param_1) = *puVar3;
    iVar5 = iVar5 * 0xc + param_1;
    uVar4 = iVar6 - 1;
    *(undefined4 *)(iVar5 + 4) = puVar3[1];
    *(undefined4 *)(iVar5 + 8) = puVar3[2];
    iVar5 = iVar6;
    iVar6 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  }
  *(undefined4 *)(iVar5 * 0xc + param_1) = *param_4;
  param_1 = iVar5 * 0xc + param_1;
  *(undefined4 *)(param_1 + 4) = param_4[1];
  *(undefined4 *)(param_1 + 8) = param_4[2];
  return;
}

