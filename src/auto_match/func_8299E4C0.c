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
extern int fn_8299E060();


undefined8 fn_8299E4C0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x234);
      if (((*(int *)(iVar4 + iVar1) != 0) &&
          ((((**(uint **)(iVar4 + iVar1) & 0xfff00000) == 0x60500000 ||
            ((**(uint **)(iVar4 + iVar1) & 0xfff00000) == 0x60000000)) &&
           (iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + iVar1) + 8) +
                                     (**(uint **)(iVar4 + iVar1) & 0xfffff) * 4) * 4 +
                            *(int *)(param_1 + 0x14)),
           *(int *)(iVar1 + 4) == *(int *)(param_1 + 0x88))))) &&
         (uVar2 = fn_8299E060(param_1,*(undefined4 *)(param_1 + 0x230),
                                *(undefined4 *)(param_1 + 0x224),*(undefined4 *)(iVar1 + 0xc)),
         (int)uVar2 < 0)) {
        return uVar2;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(uint *)(param_1 + 0x4c));
  }
  return 0;
}

