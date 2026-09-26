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
extern unsigned int *auStack_20;
extern int fn_82FA9548();
extern int fn_82FA9B68();
extern int fn_82FA9B98();


void fn_82FA9600(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_20 [8];
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = puVar1[1];
  while( true ) {
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 == param_1) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (*(char *)(iVar2 + 0x10) != '\0') {
      fn_82FA9548(iVar2);
      cVar3 = fn_82FA9B68(iVar2);
      if (cVar3 != '\0') {
        if (iVar2 == puVar1[5]) {
          (**(code **)*puVar1)(puVar1,auStack_20);
        }
        fn_82FA9B98(iVar2);
      }
    }
  }
  return;
}

