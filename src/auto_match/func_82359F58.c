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
extern int fn_82250A18();
extern int fn_82526358();
extern unsigned int lbl_832975B0;


void fn_82359F58(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    iVar1 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar1 = fn_82250A18();
    }
    if (*(char *)(iVar1 + 4) == '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xa0);
      if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) {
        if (*(char *)(param_2 + 0xd8) != '\0') {
          return;
        }
        uVar2 = 2;
      }
      else {
        if (*(char *)(param_2 + 0xd8) != '\0') {
          return;
        }
        uVar2 = 4;
      }
    }
    else {
      if (*(char *)(param_2 + 0xd8) != '\0') {
        return;
      }
      uVar2 = 1;
    }
    fn_82526358(param_2,0x8001,uVar2);
  }
  return;
}

