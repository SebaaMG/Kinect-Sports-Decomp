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
extern int fn_82E62670();
extern unsigned int uStack_4c;


longlong fn_82E3AB90(undefined8 param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int *piStack_50;
  uint uStack_4c;
  int aiStack_48 [18];
  
  if ((param_2 == (int *)0x0) || (param_3 == (uint *)0x0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_3 = 1;
    piStack_50 = (int *)0x0;
    uStack_4c = 0;
    lVar1 = (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82154b18,&uStack_4c);
    piVar2 = piStack_50;
    if (-1 < lVar1) {
      iVar3 = 0;
      uVar4 = 0;
      do {
        if ((ulonglong)uStack_4c <= (uVar4 & 0xffffffff)) break;
        lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0xffffffff82154b18,uVar4,&piStack_50);
        piVar2 = piStack_50;
        if (lVar1 < 0) goto LAB_82e3aca4;
        aiStack_48[0] = 0;
        lVar1 = fn_82E62670(piStack_50,aiStack_48);
        piVar2 = piStack_50;
        if (lVar1 < 0) goto LAB_82e3aca4;
        if (aiStack_48[0] == -0x80000000) {
          iVar3 = 1;
        }
        if (piStack_50 != (int *)0x0) {
          (**(code **)(*piStack_50 + 8))();
          piStack_50 = (int *)0x0;
        }
        piVar2 = (int *)0x0;
        uVar4 = uVar4 + 1;
      } while (iVar3 == 0);
      *param_3 = (uint)LZCOUNT(iVar3) >> 5;
    }
LAB_82e3aca4:
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
  }
  return lVar1;
}

