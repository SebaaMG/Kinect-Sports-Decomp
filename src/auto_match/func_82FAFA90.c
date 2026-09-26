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
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_82FAFA90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 4);
      fn_82FA5190(lbl_831BC768);
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    uVar3 = lbl_831BC768;
    puVar2 = *(undefined4 **)(param_1 + 0x9c);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      fn_82FA5190(uVar3,puVar2);
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}

