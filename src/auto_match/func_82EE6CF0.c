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
extern unsigned int *auStack_38;


uint fn_82EE6CF0(int param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piStack_40;
  int *piStack_3c;
  uint auStack_38 [14];
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x110) + 0xc))
                    (*(int **)(param_1 + 0x110),0xffffffff8202e618,auStack_38);
  if ((-1 < iVar1) && (uVar3 = 0, auStack_38[0] != 0)) {
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x110) + 0x10))
                        (*(int **)(param_1 + 0x110),0xffffffff8202e618,uVar3,&piStack_3c);
      if (-1 < iVar1) {
        piStack_40 = (int *)0x0;
        iVar1 = (**(code **)*piStack_3c)(piStack_3c,0xffffffff8214c740,&piStack_40);
        if ((-1 < iVar1) && ((**(code **)(*piStack_40 + 0x10))(), piStack_40 != (int *)0x0)) {
          (**(code **)(*piStack_40 + 8))();
          piStack_40 = (int *)0x0;
        }
        if (piStack_3c != (int *)0x0) {
          (**(code **)(*piStack_3c + 8))();
          piStack_3c = (int *)0x0;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)auStack_38[0]);
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x110) + 0x20))
                    (*(int **)(param_1 + 0x110),0xffffffff8202e618);
  return (int)uVar2 >> 0x1f & uVar2;
}

