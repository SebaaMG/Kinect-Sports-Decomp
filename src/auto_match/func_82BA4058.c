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
extern int fn_82B7BD28();
extern int fn_82BA3FB0();
extern int fn_82BBFE28();


undefined4 fn_82BA4058(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar1 = fn_82BBFE28(param_1 + 0x80);
    uVar2 = fn_82B7BD28(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac),iVar1 * 4 + 4);
    *(undefined4 *)(param_1 + 0x9c) = uVar2;
    puVar3 = (undefined4 *)fn_82BA3FB0(param_1);
    **(undefined4 **)(param_1 + 0x9c) = *puVar3;
    if (0 < iVar1) {
      iVar4 = 4;
      puVar3 = puVar3 + iVar1 + 1;
      do {
        puVar3 = puVar3 + -1;
        *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x9c)) = *puVar3;
        iVar4 = iVar4 + 4;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return *(undefined4 *)(param_1 + 0x9c);
}

