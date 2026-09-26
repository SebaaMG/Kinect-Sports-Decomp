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
extern int fn_82FF35A8();


void fn_82FEFA98(int param_1)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xec);
  lVar2 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      fn_82FF35A8(piVar1);
      (**(code **)(*piVar1 + 0x10))(piVar1,0xffffffff831bc7f4);
      piVar3[-1] = -1;
      *piVar3 = 0;
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 4;
  } while (lVar2 != 0);
  piVar3 = *(int **)(param_1 + 300);
  if (piVar3 != (int *)0x0) {
    fn_82FF35A8(piVar3);
    (**(code **)(*piVar3 + 0x10))(piVar3,0xffffffff831bc7f4);
    *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
    *(undefined4 *)(param_1 + 300) = 0;
  }
  return;
}

