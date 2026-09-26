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
extern int fn_831424EC();
extern int fn_831424FC();
extern unsigned int lbl_832642E0;


void fn_83021668(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = lbl_832642E0;
  iVar3 = lbl_832642E0 + 0x674;
  fn_831424EC();
  iVar1 = (*(uint *)(param_1 + 0xc) % 0xc1) * 4;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + iVar2 + 0x690);
  *(int *)(iVar1 + iVar2 + 0x690) = param_1;
  *(int *)(iVar2 + 0x994) = *(int *)(iVar2 + 0x994) + 1;
  fn_831424FC(iVar3);
  return;
}

