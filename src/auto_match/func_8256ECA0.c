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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8265CA20();


void fn_8256ECA0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  fn_8251FA58(param_1[0x2f]);
  uVar3 = 0;
  piVar4 = (int *)*param_1;
  if (piVar4[1] - *piVar4 >> 2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar2 + *piVar4);
      fn_82522ED8(*(undefined4 *)(iVar1 + 0x58));
      fn_82522ED8(*(undefined4 *)(iVar1 + 0x5c));
      fn_82522ED8(*(undefined4 *)(iVar1 + 0x60));
      fn_82522ED8(*(undefined4 *)(iVar1 + 100));
      fn_82522ED8(iVar1);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
      piVar4 = (int *)*param_1;
    } while (uVar3 < (uint)(piVar4[1] - *piVar4 >> 2));
  }
  if (piVar4 != (int *)0x0) {
    if (*piVar4 != 0) {
      fn_8265CA20();
    }
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    fn_8265CA20(piVar4);
  }
  fn_82522ED8(param_1);
  return;
}

