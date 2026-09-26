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
extern int fn_8255C820();
extern unsigned int stack0x00000020;


int fn_822B40A0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x10);
  piVar1 = *(int **)(param_1 + 0x14);
  do {
    if (piVar6 == piVar1) {
      return 0;
    }
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 0x20) == param_2) {
      uVar5 = *(uint *)(*(int *)(param_1 + 0x20) + 4);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x20) + 8);
      if (uVar5 < uVar3) {
        do {
          if ((uint)*(ushort *)(uVar5 + 8) == (*(uint *)(iVar2 + 0x24) & 0xffff)) goto LAB_822b4110;
          uVar5 = uVar5 + 0x50;
        } while (uVar5 < uVar3);
      }
      uVar5 = 0;
LAB_822b4110:
      iVar4 = fn_8255C820(&stack0x00000020,uVar5);
      if (iVar4 != 0) {
        return iVar2;
      }
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

