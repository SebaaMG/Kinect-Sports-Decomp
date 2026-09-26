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
extern int fn_82963FA8();
extern int fn_829640A0();
extern int fn_82964628();
extern unsigned int lbl_82005710;


undefined8 fn_8294DE58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  
  if (((((**(uint **)(param_1 + 0x104) & 0xfffff) != 1) ||
       (iVar4 = *(int *)(*(int *)((*(uint **)(param_1 + 0x104))[2] + 4) * 4 +
                        *(int *)(param_1 + 0x14)),
       (*(uint *)(*(int *)(*(int *)(iVar4 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) == 0))
      || (*(int *)(iVar4 + 8) != -1)) || (*(double *)(iVar4 + 0x20) != lbl_82005710)) {
    return 1;
  }
  iVar4 = fn_82964628(param_1,0,0,0);
  if (iVar4 == -1) {
    return 0xffffffff8007000e;
  }
  iVar1 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x14));
  uVar2 = *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x104) + 8) * 4 + *(int *)(param_1 + 0x14));
  uVar3 = fn_82963FA8(iVar1,uVar2);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  uVar3 = fn_829640A0(iVar1,uVar2);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) ^ 0x80000;
  if (*(int *)(iVar1 + 0x38) == -1) {
    *(undefined4 *)(iVar1 + 0x38) = **(undefined4 **)(*(int *)(param_1 + 0x104) + 8);
  }
  *(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + 4) = iVar4;
  return 0;
}

