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
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern int fn_82E3BDF8();
extern int fn_82E3C690();


longlong fn_82E3D8B0(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piStack_60;
  int *piStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [80];
  
  param_1 = param_1 + 0x1ac;
  piStack_60 = (int *)0x0;
  piStack_5c = (int *)0x0;
  lVar3 = 0;
  iVar2 = fn_82E3BDF8(param_1,auStack_58);
  if ((iVar2 != 0) && (iVar2 = fn_82E3C690(param_1,auStack_58,auStack_50,&piStack_5c), iVar2 != 0)
     ) {
    do {
      piVar1 = piStack_5c;
      lVar3 = (**(code **)(*piStack_5c + 0xc))(piStack_5c,&piStack_60);
      piVar4 = piStack_60;
      if (lVar3 < 0) break;
      if (piStack_60 == param_2) {
        lVar3 = (**(code **)(*piVar1 + 0x14))(piVar1);
        piVar4 = piStack_60;
        break;
      }
      if (piStack_60 != (int *)0x0) {
        (**(code **)(*piStack_60 + 8))(piStack_60);
        piStack_60 = (int *)0x0;
      }
      piVar4 = piStack_60;
      iVar2 = fn_82E3C690(param_1,auStack_58,auStack_50,&piStack_5c);
    } while (iVar2 != 0);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  return lVar3;
}

