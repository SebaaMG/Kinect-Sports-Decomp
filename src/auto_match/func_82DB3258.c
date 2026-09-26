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


void fn_82DB3258(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uStack_10;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  if (*(char *)(param_1 + 9) == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + -8) + 0x20);
  iVar2 = 0;
  if (iVar1 < 1) {
    return;
  }
  puVar3 = *(undefined2 **)(*(int *)(param_1 + -8) + 0x1c);
  do {
    uStack_10 = (int *)CONCAT22(puVar3[3],puVar3[7]);
    if (uStack_10 == (int *)(param_2 + 0x10)) {
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[2] = 0xffff;
      puVar3[1] = 0xffff;
      *puVar3 = 0xffff;
      return;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 8;
  } while (iVar2 < iVar1);
  return;
}

