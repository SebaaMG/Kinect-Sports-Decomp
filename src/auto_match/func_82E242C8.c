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
extern unsigned int *auStack_40;
extern unsigned int iStack_4c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


longlong fn_82E242C8(int param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int *piStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [16];
  
  uStack_48 = 0;
  piStack_50 = (int *)0x0;
  iStack_4c = 0;
  uStack_44 = 0;
  auStack_40[0] = 0;
  lVar1 = (**(code **)(*param_2 + 0x9c))(param_2,&uStack_48);
  if ((-1 < lVar1) && (uVar2 = 0, uStack_48 != 0)) {
    do {
      if (piStack_50 != (int *)0x0) {
        (**(code **)(*piStack_50 + 8))();
        piStack_50 = (int *)0x0;
      }
      lVar1 = (**(code **)(*param_2 + 0xa0))(param_2,uVar2,&piStack_50);
      if ((((lVar1 < 0) ||
           (lVar1 = (**(code **)(*piStack_50 + 0xc))(piStack_50,&iStack_4c,0,&uStack_44), lVar1 < 0)
           ) || (lVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x30))
                                   (*(int **)(param_1 + 0x104),iStack_4c,uStack_44,auStack_40),
                lVar1 < 0)) || (lVar1 = (**(code **)(*piStack_50 + 0x10))(), lVar1 < 0)) break;
      uVar2 = uVar2 + 1;
      iStack_4c = 0;
    } while ((uVar2 & 0xffffffff) < (ulonglong)uStack_48);
  }
  if (iStack_4c != 0) {
    if (piStack_50 == (int *)0x0) {
      return lVar1;
    }
    (**(code **)(*piStack_50 + 0x10))();
  }
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 8))();
  }
  return lVar1;
}

