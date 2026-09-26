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
extern int fn_8244CF38();
extern int fn_82529320();
extern int fn_82F63CA0();


void fn_82448410(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x48);
  uVar2 = 0;
  if (piVar3[1] - *piVar3 >> 2 != 0) {
    iVar1 = 0;
    do {
      fn_82529320(*(undefined4 *)(*piVar3 + iVar1),0);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      piVar3 = *(int **)(param_1 + 0x48);
    } while (uVar2 < (uint)(piVar3[1] - *piVar3 >> 2));
  }
  iVar1 = *piVar3;
  if (iVar1 != piVar3[1]) {
    fn_82F63CA0(iVar1,piVar3[1],0);
    piVar3[1] = iVar1;
  }
  fn_8244CF38(param_1);
  return;
}

