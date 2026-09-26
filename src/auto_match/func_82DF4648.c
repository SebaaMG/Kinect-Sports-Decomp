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
extern int fn_82CE4118();


void fn_82DF4648(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = 0;
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      if ((*(byte *)(*(int *)(iVar4 + *(int *)(param_1 + 0x2c)) + 0xc) & 1) != 0) {
        fn_82CE4118();
        iVar1 = *(int *)(param_1 + 0x30) + -1;
        *(int *)(param_1 + 0x30) = iVar1;
        if (iVar1 != iVar3) {
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x2c)) =
               *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 0x2c));
        }
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + -1;
        iVar4 = iVar4 + -4;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < iVar2);
  }
  return;
}

