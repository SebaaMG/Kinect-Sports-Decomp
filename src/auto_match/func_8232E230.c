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
extern int fn_82825AD0();


void fn_8232E230(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 0x118);
  puStack_10 = *(undefined4 **)(iVar1 + 0x18);
  puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 0x18))[1];
  while (*(char *)((int)puVar2 + 0x15) == '\0') {
    if ((uint)puVar2[3] < 0x14) {
      puVar2 = (undefined4 *)puVar2[2];
    }
    else {
      puStack_10 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  if ((puStack_10 == *(undefined4 **)(iVar1 + 0x18)) || (0x14 < (uint)puStack_10[3])) {
    ppuVar3 = apuStack_c;
    apuStack_c[0] = *(undefined4 **)(iVar1 + 0x18);
  }
  else {
    ppuVar3 = &puStack_10;
  }
  fn_82825AD0(apuStack_c,iVar1 + 0x14,*ppuVar3);
  return;
}

