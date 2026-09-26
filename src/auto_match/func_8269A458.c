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
extern int fn_826BD928();


undefined8 fn_8269A458(int param_1)

{
  int iVar2;
  int *piVar3;
  undefined8 uVar1;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    do {
      iVar2 = (**(code **)(*(int *)(iVar4 + 0x68) + 8))(iVar4 + 0x68);
      if (iVar2 == 2) break;
      iVar4 = *(int *)(iVar4 + 0x20);
    } while (iVar4 != 0);
    if (iVar4 != 0) {
      piVar3 = (int *)fn_826BD928(iVar4 + 0x68);
      uVar1 = (**(code **)(*piVar3 + 0x5c))();
      return uVar1;
    }
  }
  return 0;
}

