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
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8257CED8(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 != 0) {
    uStack_20 = 0x45;
    uStack_1c = 8;
    do {
      (**(code **)(*(int *)(iVar4 + -0x40) + 0xc))(iVar4 + -0x40,&uStack_20);
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != 0);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  for (puVar1 = (undefined4 *)*puVar3; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
    piVar2 = (int *)puVar1[2];
    if (piVar2[2] == 1) {
      piVar2[2] = 2;
      (**(code **)(*piVar2 + 0xc))();
    }
    puVar3 = *(undefined4 **)(param_1 + 0x28);
  }
  return;
}

