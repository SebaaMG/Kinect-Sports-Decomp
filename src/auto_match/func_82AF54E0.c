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


void fn_82AF54E0(undefined8 param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  piVar1 = *(int **)(param_2 + 0x20);
  uVar3 = 0;
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    uVar4 = 0;
    uVar2 = *(uint *)*piVar1;
    if ((uVar2 & 0x1fff) != 0) {
      puVar5 = (uint *)*piVar1 + 6;
      do {
        if (param_3 == *puVar5) {
          uVar2 = uVar2 >> 0xd & 0xffff;
          if (uVar3 < uVar2) {
            uVar3 = uVar2;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 < (uVar2 & 0x1fff));
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}

