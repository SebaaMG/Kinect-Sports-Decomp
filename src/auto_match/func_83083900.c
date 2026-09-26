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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern unsigned int uStack_10;


void fn_83083900(int param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uStack_10;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x20) < 1) {
    return;
  }
  puVar2 = *(undefined2 **)(param_1 + 0x1c);
  do {
    uStack_10 = CONCAT22(puVar2[3],puVar2[7]);
    if (uStack_10 == param_2) {
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[2] = 0xffff;
      puVar2[1] = 0xffff;
      *puVar2 = 0xffff;
      return;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 8;
  } while (iVar1 < *(int *)(param_1 + 0x20));
  return;
}

