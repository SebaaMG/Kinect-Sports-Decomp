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
extern int fn_8248FCC8();
extern int fn_8257A9F0();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


void fn_8248F9F8(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iStack0000001c;
  
  if (*(int *)(param_1 + 0x1c) == -1) {
    *(int *)(param_1 + 0x20) = param_2;
  }
  else {
    if (*(int *)(param_1 + 0x20) < param_2) {
      *(int *)(param_1 + 0x20) = param_2;
      goto LAB_8248fa44;
    }
    if (*(int *)(param_1 + 0x1c) <= param_2) goto LAB_8248fa44;
  }
  *(int *)(param_1 + 0x1c) = param_2;
LAB_8248fa44:
  bVar2 = false;
  if ((*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10)) &&
     (param_2 < *(int *)(*(int *)(param_1 + 0x10) + -4))) {
    bVar2 = true;
  }
  iStack0000001c = param_2;
  fn_8257A9F0((int *)(param_1 + 0xc),&stack0x0000001c);
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0xc);
    fn_8248FCC8(iVar1,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x10) - iVar1 >> 2);
  }
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

