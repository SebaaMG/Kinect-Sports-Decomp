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
extern int fn_82672C20();


void fn_82374C88(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 0x344) = param_2;
  if ((((param_2 == 0) || (*(int *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x14) + 0x14) != 0)) ||
      (*(int *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x18) + 0xc) != 0)) ||
     ((*(int *)(param_1 + 0x9d8) != 0 || (bVar1 = true, *(int *)(param_1 + 0x54) == 0xb)))) {
    bVar1 = false;
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xd4) + 0xc);
  if (!bVar1) {
    if (puVar2[0x16] == 0) {
      return;
    }
    if (puVar2[4] != 0) {
      fn_82672C20(*puVar2,0xffffffff821a8498,0,0);
      puVar2[4] = 0;
      puVar2 = puVar2 + 0x1c;
      lVar3 = 8;
      do {
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    return;
  }
  if (puVar2[0x16] != 0) {
    return;
  }
  if (puVar2[4] == 0) {
    fn_82672C20(*puVar2,0xffffffff821a8484,0,0);
    puVar2[4] = 1;
    puVar2 = puVar2 + 0x1c;
    lVar3 = 8;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

