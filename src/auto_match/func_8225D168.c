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
extern int fn_8225E3E0();


void fn_8225D168(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  puStack_10 = *(undefined4 **)(param_1 + 0x38);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x38))[1];
  while (*(char *)((int)puVar1 + 0x49) == '\0') {
    if ((uint)puVar1[4] < param_2) {
      puVar1 = (undefined4 *)puVar1[2];
    }
    else {
      puStack_10 = puVar1;
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  if ((puStack_10 == *(undefined4 **)(param_1 + 0x38)) || (param_2 < (uint)puStack_10[4])) {
    ppuVar2 = apuStack_c;
    apuStack_c[0] = *(undefined4 **)(param_1 + 0x38);
  }
  else {
    ppuVar2 = &puStack_10;
  }
  fn_8225E3E0(apuStack_c,param_1 + 0x34,*ppuVar2);
  return;
}

