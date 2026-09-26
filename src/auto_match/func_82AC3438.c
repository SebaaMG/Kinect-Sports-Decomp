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
extern int fn_82F68CC0();


undefined8 fn_82AC3438(int *param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = param_1[1] + 1;
  param_1[1] = uVar4;
  if (uVar4 < 0x10000) {
    puVar5 = (uint *)(param_1 + uVar4 * 4 + 3);
    if (((param_2 < 0x2000) && (param_3 < 5)) && (param_4 < 5)) {
      uVar1 = *puVar5;
      param_2 = param_2 << 0x13;
      iVar2 = *param_1;
      uVar3 = ((param_3 & 7) << 3 | param_4 & 7) << 0xd;
      *puVar5 = uVar3 | param_2 | uVar1 & 0x1fff;
      if ((int)param_5 != 0) {
        fn_82F68CC0(param_1 + uVar4 * 4 + 4,param_5,9);
        uVar4 = param_1[iVar2 * 4 + 3];
        *puVar5 = uVar4 & 0x1000 | uVar3 | param_2 | uVar1 & 0xfff;
        *puVar5 = uVar4 & 0x1000 | uVar3 | param_2 | uVar1 & 0x7ff | param_1[iVar2 * 4 + 3] & 0x800U
        ;
        *puVar5 = *puVar5 & 0xfffffbff | param_1[iVar2 * 4 + 3] & 0x400U;
        *puVar5 = *puVar5 & 0xfffffdff | param_1[iVar2 * 4 + 3] & 0x200U;
        *puVar5 = *puVar5 & 0xfffffeff | param_1[iVar2 * 4 + 3] & 0x100U;
        *puVar5 = *puVar5 & 0xffffff7f | param_1[iVar2 * 4 + 3] & 0x80U;
        *puVar5 = *puVar5 & 0xffffffbf | param_1[iVar2 * 4 + 3] & 0x40U;
        return 0;
      }
    }
  }
  return 0xffffffff80004005;
}

