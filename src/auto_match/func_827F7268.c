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
extern int fn_827F6AB8();
extern int fn_827FA1E8();


void fn_827F7268(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x32) * 0x30 + *(int *)(param_1 + 0x84);
    if ((*(int *)(param_1 + 0x14) != 0) && (iVar3 != 0)) {
      uVar4 = 0;
      iVar1 = fn_827F6AB8();
      if (iVar1 != 0) {
        iVar1 = 0;
        do {
          uVar4 = uVar4 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1) = *(undefined4 *)(iVar1 + iVar3);
          iVar1 = iVar1 + 4;
          uVar2 = fn_827F6AB8(param_1);
        } while (uVar4 < uVar2);
      }
    }
    iVar3 = ((uint)*(ushort *)(param_1 + 0x2e) + (uint)*(ushort *)(param_1 + 0x32) * 0xc) * 4 +
            *(int *)(param_1 + 0x84);
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar3 != 0)) {
      uVar4 = 0;
      iVar1 = fn_827FA1E8(param_1);
      if (iVar1 != 0) {
        iVar1 = 0;
        do {
          uVar4 = uVar4 + 1;
          *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x18)) = *(undefined4 *)(iVar1 + iVar3);
          iVar1 = iVar1 + 4;
          uVar2 = fn_827FA1E8(param_1);
        } while (uVar4 < uVar2);
      }
    }
  }
  return;
}

