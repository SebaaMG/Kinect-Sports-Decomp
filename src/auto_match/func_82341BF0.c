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
extern int fn_8242E560();
extern int fn_824CCFC8();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82341BF0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_8242E560(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0xc));
  iVar3 = **(int **)(param_1 + 0xc);
  fVar1 = lbl_821CC160;
  if (iVar2 == 0) {
    if (*(int *)(iVar3 + 0x24) == 0) {
      return;
    }
    iVar2 = fn_824CCFC8();
    iVar3 = **(int **)(param_1 + 0xc);
    fVar1 = lbl_821CC160;
    if (iVar2 != 0) {
      fVar1 = lbl_821CA460;
    }
  }
  iVar3 = *(int *)(iVar3 + 0x118);
  fn_827F57E8((double)fVar1,(double)lbl_8218E8FC,*(undefined4 *)(iVar3 + 0x10));
  iVar3 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)(iVar3 + 0x108) = *(undefined4 *)(iVar3 + 0x10c);
  return;
}

