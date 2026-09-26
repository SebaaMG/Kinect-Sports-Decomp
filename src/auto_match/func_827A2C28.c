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
extern int fn_82799C20();
extern int fn_8279C588();
extern int fn_827AEE00();


void fn_827A2C28(int param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  uVar1 = fn_8279C588(*(undefined4 *)(*(int *)(param_1 + 0xc) + 8));
  uVar4 = 0;
  if (*(char *)(param_1 + 0xc0) != '\0') {
    puVar3 = (undefined4 *)(param_1 + 0x94);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = (undefined4 *)fn_827AEE00(uVar1,*puVar3);
      *puVar2 = 0;
      puVar2[1] = 0;
      fn_82799C20(*(undefined4 *)(*(int *)(param_1 + 0xc) + 8),puVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 0xc0));
  }
  *(undefined1 *)(param_1 + 0xc0) = 0;
  return;
}

