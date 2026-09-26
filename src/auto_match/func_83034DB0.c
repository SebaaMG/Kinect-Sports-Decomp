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
extern int fn_83019B78();
extern int fn_83034D00();


undefined8 fn_83034DB0(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar4;
  undefined8 uVar2;
  int iVar3;
  
  cVar4 = fn_83034D00();
  if (cVar4 == '\0') {
    uVar2 = 2;
  }
  else {
    for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[1] == *(int *)(param_2 + 0xc)) {
        if (puVar1 != (undefined4 *)0xfffffffc) {
          return 1;
        }
        break;
      }
    }
    iVar3 = fn_83019B78();
    uVar2 = 2;
    if (iVar3 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

