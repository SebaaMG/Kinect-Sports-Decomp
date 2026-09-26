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
extern int fn_8229CF08();
extern int fn_8229CFB8();
extern unsigned int lbl_832975B0;


void fn_823980B0(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x2d8) + 0x148);
  if (iVar1 == 1) {
    bVar3 = 1;
  }
  else {
    bVar3 = -(iVar1 == 2) & 2;
  }
  if (param_3 == 0) {
    fn_8229CFB8(*(undefined4 *)(*(int *)(param_1 + 0xd4) + 0xd4),
                      -(ulonglong)(*(char *)(iVar2 + 4) == '\0') & param_2,bVar3);
  }
  else {
    fn_8229CF08();
  }
  return;
}

