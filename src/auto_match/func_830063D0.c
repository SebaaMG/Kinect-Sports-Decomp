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


undefined8 fn_830063D0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    piVar2 = (int *)(iVar1 + 0x24);
    iVar1 = *(int *)(iVar1 + 0x28) - *piVar2;
    while (iVar1 >> 4 != 0) {
      (**(code **)(*param_1 + 0xd8))(param_1,*(undefined4 *)*piVar2);
      piVar2 = (int *)(param_1[8] + 0x24);
      iVar1 = *(int *)(param_1[8] + 0x28) - *piVar2;
    }
  }
  return 1;
}

