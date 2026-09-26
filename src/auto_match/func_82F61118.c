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
extern int fn_82A1E300();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E810();


void fn_82F61118(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if ((((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 4) != 0)) &&
      (*(int *)(param_1 + 0x24) != 0)) && (*(int *)(param_1 + 0x28) != 0)) {
    fn_82A1E810();
    do {
      fn_82A1E810(*(undefined4 *)(param_1 + 0x24));
      bVar1 = false;
      uVar3 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        piVar4 = (int *)(param_1 + 0xc);
        do {
          if (*piVar4 != 0) {
            iVar2 = fn_82A1E650(*piVar4,1);
            if (iVar2 == 0) {
              fn_82A1E658(*piVar4);
              *piVar4 = 0;
            }
            else {
              bVar1 = true;
              fn_82A1E300();
            }
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar3 < *(uint *)(param_1 + 4));
      }
    } while (bVar1);
  }
  return;
}

