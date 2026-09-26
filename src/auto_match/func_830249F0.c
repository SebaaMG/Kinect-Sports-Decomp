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


void fn_830249F0(int param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x74) == 1) {
    iVar3 = param_2 * 0x14 + param_1;
    piVar1 = *(int **)(iVar3 + 0x24);
    if (piVar1 != (int *)0x0) {
      bVar2 = *(byte *)(param_1 + 0x6c) | *(byte *)(iVar3 + 0x2c);
      if ((bVar2 & 0x80) == 0) {
        (**(code **)(*piVar1 + 0x10))(piVar1,param_1 + 0x100);
      }
      else if ((bVar2 & 0x40) == 0) {
        (**(code **)(*piVar1 + 8))();
      }
      *(byte *)(iVar3 + 0x2c) = *(byte *)(iVar3 + 0x2c) >> 1 & 0x40 | *(byte *)(iVar3 + 0x2c) & 0xbf
      ;
    }
  }
  return;
}

