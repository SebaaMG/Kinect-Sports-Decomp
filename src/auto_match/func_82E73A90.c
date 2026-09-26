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
#define CONCAT26(h,l) ((U64)((((U16)(h)) << 48) | ((U64)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82E73080();
extern int fn_82E73380();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82E73A90(int param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1d8) + 0x28))(*(int **)(param_1 + 0x1d8),&uStack_40);
  if (-1 < iVar1) {
    uVar3 = *(ulonglong *)(param_1 + 0x1e0);
    uVar2 = uVar3 / 10000;
    uStack_40 = CONCAT44((((U64)(uStack_40) >> 0) & 0xFFFFFFFF),(int)uVar2);
    uStack_38 = CONCAT26((short)(param_2 / 10000),(((U64)(uStack_38) >> 16) & 0xFFFFFFFFFFFF));
    iVar1 = (**(code **)(**(int **)(param_1 + 0x1d8) + 0x14))(*(int **)(param_1 + 0x1d8),&uStack_40)
    ;
    if (-1 < iVar1) {
      iVar1 = fn_82E73380(param_1,param_2,uVar3);
      if (-1 < iVar1) {
        *(ulonglong *)(param_1 + 0x1f8) = uVar2;
        *(ulonglong *)(param_1 + 0x208) = param_2 / 10000;
        *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
        *(ulonglong *)(param_1 + 0x1e8) =
             (ulonglong)*(uint *)(param_1 + 4) + *(longlong *)(param_1 + 0x1e8);
        fn_82E73080(param_1);
      }
    }
  }
  return;
}

