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


ulonglong fn_8223D4D8(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)**(int **)(param_1 + 0x20);
  if (pbVar1 != (byte *)0x0) {
    if (pbVar1 < pbVar1 + **(int **)(param_1 + 0x30)) {
      return (ulonglong)*pbVar1;
    }
    if ((((*(uint *)(param_1 + 0x40) & 4) == 0) &&
        (pbVar2 = (byte *)**(undefined4 **)(param_1 + 0x24), pbVar2 != (byte *)0x0)) &&
       ((pbVar1 < pbVar2 || (pbVar1 < *(byte **)(param_1 + 0x3c))))) {
      if (*(byte **)(param_1 + 0x3c) < pbVar2) {
        *(byte **)(param_1 + 0x3c) = pbVar2;
      }
      **(int **)(param_1 + 0x30) = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x20);
      return (ulonglong)*(byte *)**(undefined4 **)(param_1 + 0x20);
    }
  }
  return 0xffffffffffffffff;
}

