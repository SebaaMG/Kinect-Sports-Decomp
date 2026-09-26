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
extern unsigned int *auStack_28;
extern int fn_82881290();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82882DD8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puStack_2c;
  undefined4 auStack_28 [4];
  
  puVar3 = (undefined4 *)(param_1 + 8);
  auStack_28[0] = *puVar3;
  puStack_2c = puVar3;
  fn_82881290(auStack_28,&puStack_2c,0);
  puVar2 = (undefined4 *)*puVar3;
  while (puVar2 != puVar3) {
    puVar1 = (undefined4 *)*puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar1;
  }
  *(undefined4 **)(param_1 + 0xc) = puVar3;
  *puVar3 = puVar3;
  return;
}

