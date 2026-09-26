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
extern int fn_822315A0();
extern int fn_822888F0();
extern int fn_82289670();
extern int fn_8266F628();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


void fn_8228BA00(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iStack_20;
  int iStack_1c;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(uint *)(iVar1 + 0x600) < 2) {
    iVar2 = *(int *)(iVar1 + 0x69c);
    if ((((*(int *)(iVar2 + 0x44) != 0) && (*(int *)(iVar2 + 0x44) != 2)) &&
        (*(int *)(iVar2 + 0x8c) == 0)) && (*(int *)(iVar2 + 0x6c) == 0)) {
      lVar3 = 1;
      *(undefined4 *)(iVar1 + 0x7bc) = 1;
      fn_822888F0(&iStack_20,iVar1);
      if (iStack_20 != 0) {
        fn_8266F628(iStack_20,1);
      }
      *(undefined4 *)(iVar1 + 0x7c0) = 1;
      do {
        fn_82289670(iVar1,lVar3);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < 4);
      *(undefined4 *)(iVar1 + 0x7c0) = 0;
      if (iStack_1c != 0) {
        fn_822315A0();
      }
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x604) = 1;
  }
  return;
}

