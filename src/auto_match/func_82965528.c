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


uint fn_82965528(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_5 == 0) {
    uVar3 = *(uint *)((*(int *)(param_2 + 0xc) * param_3 + param_4) * 4 + *(int *)(param_2 + 8));
  }
  else {
    uVar3 = *(uint *)(param_4 * 4 + *(int *)(param_2 + 8));
    uVar1 = *(uint *)((*(int *)(param_2 + 0xc) + param_4) * 4 + *(int *)(param_2 + 8));
    if (param_3 == 0) {
      if (uVar3 <= uVar1) goto code_r0x82965584;
    }
    else if (uVar1 < uVar3) goto code_r0x82965584;
    uVar3 = uVar1;
  }
code_r0x82965584:
  iVar2 = *(int *)(uVar3 * 4 + *(int *)(param_1 + 0x14));
  while (uVar1 = *(uint *)(iVar2 + 0x30), uVar3 != uVar1) {
    uVar3 = uVar1;
    iVar2 = *(int *)(uVar1 * 4 + *(int *)(param_1 + 0x14));
  }
  return uVar3;
}

