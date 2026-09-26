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
extern int fn_8267B890();
extern int fn_8267C4F0();
extern unsigned int lbl_831E7E64;


void fn_827ABF70(int param_1,uint *param_2,int *param_3)

{
  int *piVar3;
  char cVar4;
  longlong lVar1;
  undefined8 uVar2;
  
  piVar3 = (int *)(**(code **)(*param_3 + 4))
                            (param_3,((ulonglong)*param_2 & 0xfffffffc) + 8,0x21,0x1b6);
  if (piVar3 != (int *)0x0) {
    cVar4 = (**(code **)(*piVar3 + 8))(piVar3);
    if (cVar4 != '\0') {
      lVar1 = (**(code **)(*piVar3 + 0x18))(piVar3);
      *(int *)(param_1 + 0x10) = (int)lVar1;
      if ((int)lVar1 != 0) {
        uVar2 = fn_8267B890(lbl_831E7E64,lVar1 + 2,0);
        *(int *)(param_1 + 0xc) = (int)uVar2;
        (**(code **)(*piVar3 + 0x28))(piVar3,uVar2,*(undefined4 *)(param_1 + 0x10));
        *(undefined1 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) + 1) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10)) = 0;
      }
    }
    fn_8267C4F0(piVar3);
  }
  return;
}

