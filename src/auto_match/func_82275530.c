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
extern int fn_82230040();
extern int fn_82F64C00();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


undefined4 fn_82275530(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  if (**(int **)(param_1 + 0x10) == 0) {
    uVar1 = (*(int **)(param_1 + 0x10))[3];
    uVar3 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      if ((int)uVar1 < 0) {
        uVar3 = 0;
      }
      else if (0x1fffffff < uVar3) {
        uStack_2c = 0;
        ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_30);
      }
      iVar2 = 0;
      if (0 < (int)uVar3) {
        do {
          iVar2 = fn_82F64C00((uVar3 & 0x1fffffff) << 3,0xffffffff8326332e);
          if (iVar2 != 0) break;
          uVar3 = (longlong)((int)uVar3 >> 1) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0);
        } while (0 < (longlong)uVar3);
      }
      **(int **)(param_1 + 0x10) = iVar2;
      *(int *)(*(int *)(param_1 + 0x10) + 4) = iVar2;
      *(int *)(*(int *)(param_1 + 0x10) + 8) = iVar2;
      *(int *)(*(int *)(param_1 + 0x10) + 0xc) = (int)uVar3;
    }
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc);
}

