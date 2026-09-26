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
extern int fn_82CE5410();
extern int fn_82E14BC8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int uStack_38;


void fn_82E15478(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  
  iStack_40 = 0;
  iStack_3c = 0;
  uStack_38 = 0x80000000;
  fn_82E14BC8(param_1,&iStack_40);
  iVar1 = 0;
  if (0 < iStack_3c) {
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(iVar2 + iStack_40) + 0x34))(*(int **)(iVar2 + iStack_40),param_2);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < iStack_3c);
  }
  iVar1 = fn_82CE5410();
  iStack_3c = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar1 + 0x10) + 0x10))
              (*(int **)(iVar1 + 0x10),iStack_40,uStack_38 & 0x3fffffff,4);
  }
  return;
}

