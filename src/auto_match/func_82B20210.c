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
extern int fn_82ABE250();


void fn_82B20210(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  
  *(undefined4 *)(param_2 + 0x28) = 0;
  uVar2 = *(uint *)(param_1 + 4);
  do {
    if (((uVar2 & 1) != 0) || (uVar2 == 0)) {
      bVar5 = (*(undefined4 **)(param_2 + 0x28))[1] != 0;
      *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe | (uint)bVar5;
      if (bVar5) {
        *(undefined4 *)(param_2 + 0x10) = 0;
      }
      else {
        *(undefined4 *)(param_2 + 0x10) = **(undefined4 **)(param_2 + 0x28);
      }
      if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0xc) == 0)) {
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0x10);
      }
      return;
    }
    uVar1 = (param_2 - *(int *)(param_1 + 0x268)) / 0x44;
    if ((*(uint *)(((uVar1 >> 5) + 0x15) * 4 + uVar2) >> (uVar1 & 0x1f) & 1) != 0) {
      for (piVar3 = *(int **)(uVar2 + 0xc); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if ((*(uint *)(((uVar1 >> 5) + 0x15) * 4 + *piVar3) >> (uVar1 & 0x1f) & 1) == 0) {
          if (*piVar3 != 0) {
            puVar4 = (uint *)fn_82ABE250(param_1,0x14,0x28);
            *puVar4 = uVar2;
            puVar4[1] = *(uint *)(param_2 + 0x28);
            *(uint **)(param_2 + 0x28) = puVar4;
          }
          break;
        }
      }
    }
    uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 4);
  } while( true );
}

