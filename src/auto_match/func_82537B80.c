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
extern int fn_82A1E740();


undefined4 fn_82537B80(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      if (*(int *)(param_1 + 0x20) == 0) {
LAB_82537bd0:
        bVar1 = true;
      }
      else {
        iVar2 = fn_82A1E740(param_1,0,1);
        if (iVar2 != 0x3e4) {
          *(int *)(param_1 + 0x1c) = iVar2;
          goto LAB_82537bd0;
        }
        bVar1 = false;
      }
    } while (!bVar1);
    if ((((*(int *)(param_1 + 0x1c) == 0) && (**(int **)(param_1 + 0x20) != 0)) &&
        (iVar2 = (*(int **)(param_1 + 0x20))[1], *(int *)(iVar2 + 0x10) == 0x63e80044)) &&
       ((*(char *)(iVar2 + 0x18) == '\x06' && (*(int *)(iVar2 + 0x20) == 1000)))) {
      return *(undefined4 *)(iVar2 + 0x24);
    }
  }
  return 0;
}

