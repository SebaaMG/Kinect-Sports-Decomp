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


void fn_83024BA0(int param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  
  if (*(int *)(param_1 + 0x74) == 1) {
    pbVar4 = (byte *)(param_1 + 0x2c);
    lVar3 = 4;
    do {
      if (*(int *)(param_1 + 0x74) == 1) {
        piVar1 = *(int **)(pbVar4 + -8);
        if (piVar1 != (int *)0x0) {
          bVar2 = *(byte *)(param_1 + 0x6c) | *pbVar4;
          if ((bVar2 & 0x80) == 0) {
            (**(code **)(*piVar1 + 0x10))(piVar1,param_1 + 0x100);
          }
          else if ((bVar2 & 0x40) == 0) {
            (**(code **)(*piVar1 + 8))();
          }
          *pbVar4 = *pbVar4 >> 1 & 0x40 | *pbVar4 & 0xbf;
        }
      }
      lVar3 = lVar3 + -1;
      pbVar4 = pbVar4 + 0x14;
    } while (lVar3 != 0);
  }
  return;
}

