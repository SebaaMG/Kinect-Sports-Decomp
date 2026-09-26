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
extern unsigned int lbl_832975B0;


undefined4 fn_82360C18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) == '\0') {
    iVar1 = *(int *)(param_1 + 0x2b20);
    if ((*(int *)(iVar1 + 0x2b0) < 3) || (6 < *(int *)(iVar1 + 0x2b0))) {
      uVar2 = *(undefined4 *)(iVar1 + 0x18);
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 700);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

