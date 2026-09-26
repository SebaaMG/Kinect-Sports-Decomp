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


ulonglong fn_82294BD8(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = (ushort *)**(int **)(param_1 + 0x20);
  if (puVar1 != (ushort *)0x0) {
    if (puVar1 < puVar1 + **(int **)(param_1 + 0x30)) {
      return (ulonglong)*puVar1;
    }
    if ((((*(uint *)(param_1 + 0x40) & 4) == 0) &&
        (puVar2 = (ushort *)**(undefined4 **)(param_1 + 0x24), puVar2 != (ushort *)0x0)) &&
       ((puVar1 < puVar2 || (puVar1 < *(ushort **)(param_1 + 0x3c))))) {
      if (*(ushort **)(param_1 + 0x3c) < puVar2) {
        *(ushort **)(param_1 + 0x3c) = puVar2;
      }
      **(int **)(param_1 + 0x30) = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x20) >> 1;
      return (ulonglong)*(ushort *)**(undefined4 **)(param_1 + 0x20);
    }
  }
  return 0xffffffffffffffff;
}

