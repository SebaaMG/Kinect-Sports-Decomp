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
extern int fn_8236C6A0();
extern int fn_823CC298();


void fn_8231A9D8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x2a1) != '\0') {
    bVar2 = false;
    if (*(char *)(param_1 + 0x2a0) == '\0') goto LAB_8231aa0c;
  }
  bVar2 = true;
LAB_8231aa0c:
  if ((bVar2) && (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0xe0) = 1;
  }
  if (*(int *)(param_1 + 0x2d8) != 0) {
    fn_823CC298(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x4b8),0x1b);
  }
  fn_8236C6A0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc));
  return;
}

