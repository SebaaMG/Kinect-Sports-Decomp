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
extern unsigned int lbl_8218E30C;
extern unsigned int lbl_8218E310;


void fn_8257DE30(int param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  param_2 = param_2 * 0xc;
  iVar1 = *(int *)(param_3 + 0xc);
  iVar5 = *(int *)(&lbl_8218E30C + param_2);
  if (iVar5 < *(int *)(&lbl_8218E310 + param_2)) {
    piVar4 = (int *)(iVar5 * 8 + *(int *)(param_1 + 4) + 4);
    do {
      iVar2 = *piVar4;
      bVar3 = false;
      if (iVar2 != 0) {
        do {
          piVar6 = (int *)(iVar2 + -0x10);
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          if ((piVar6[iVar1 + 0xc] != 0) && (*(char *)((int)piVar6 + param_4 + 0x48) != '\0')) {
            if (!bVar3) {
              (**(code **)(*piVar6 + 0xc))(piVar6,param_3,param_5);
              bVar3 = true;
            }
            (**(code **)(*piVar6 + 0x10))(piVar6,param_3,param_4);
          }
          iVar2 = *(int *)(iVar2 + 4);
        } while (iVar2 != 0);
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar5 < *(int *)(&lbl_8218E310 + param_2));
  }
  return;
}

