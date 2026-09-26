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


undefined8 fn_82C7B980(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 0xd40);
  uVar5 = *(uint *)(param_1 + 0xbc) / uVar7;
  uVar3 = *(uint *)(param_1 + 200) / uVar7;
  uVar1 = *(uint *)(param_1 + 0x8c) / uVar7;
  trapWord(6,uVar7,0);
  uVar8 = *(uint *)(param_1 + 0x88) / uVar7;
  trapWord(6,uVar7,0);
  *(undefined4 *)(param_1 + 0xf24) = 0;
  trapWord(6,uVar7,0);
  iVar6 = (int)uVar5;
  *(int *)(param_1 + 0xf28) = iVar6;
  trapWord(6,uVar7,0);
  *(undefined4 *)(param_1 + 0xf2c) = 0;
  iVar4 = (int)uVar3;
  *(int *)(param_1 + 0xf30) = iVar4;
  iVar2 = (int)uVar1;
  *(int *)(param_1 + 0xf1c) = iVar2;
  *(int *)(param_1 + 0xf20) = (int)uVar8;
  *(int *)(param_1 + 0xf34) = *(int *)(param_1 + 0xdc);
  *(int *)(param_1 + 0xf38) = *(int *)(param_1 + 0xe0);
  if (1 < uVar7) {
    *(int *)(param_1 + 0xf48) = iVar6;
    *(int *)(param_1 + 0xf50) = iVar4;
    *(int *)(param_1 + 0xf4c) = (int)(uVar5 << 1);
    *(int *)(param_1 + 0xf54) = (int)(uVar3 << 1);
    *(int *)(param_1 + 0xf3c) = iVar2;
    *(int *)(param_1 + 0xf58) = *(int *)(param_1 + 0xcc) * iVar6 + *(int *)(param_1 + 0xdc);
    *(int *)(param_1 + 0xf5c) = *(int *)(param_1 + 0xd0) * iVar4 + *(int *)(param_1 + 0xe0);
    if (uVar7 == 4) {
      *(int *)(param_1 + 0xf40) = (int)(uVar1 << 1);
      *(int *)(param_1 + 0xf44) = (int)(uVar8 << 1);
    }
    else {
      *(uint *)(param_1 + 0xf40) = *(uint *)(param_1 + 0x8c);
      *(uint *)(param_1 + 0xf44) = *(uint *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x3b80) = *(int *)(param_1 + 0xcc) * iVar2 * 0x10;
    *(int *)(param_1 + 0x3b84) = *(int *)(param_1 + 0xd0) * iVar2 * 8;
  }
  return 0;
}

