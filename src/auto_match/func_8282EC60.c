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
extern int fn_82F63CA0();


void fn_8282EC60(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_1 != param_2) && (piVar6 = param_1 + 1, piVar6 != param_2)) {
    do {
      iVar1 = *piVar6;
      uVar4 = *(int *)(iVar1 + 4) + *(int *)(iVar1 + 0xc);
      if (*(uint *)(*param_1 + 0xc) < uVar4) {
        iVar2 = piVar6[-1];
        piVar3 = piVar6;
        piVar5 = piVar6 + -1;
        while (uVar4 <= *(uint *)(iVar2 + 0xc)) {
          *piVar3 = iVar2;
          iVar2 = piVar5[-1];
          piVar3 = piVar5;
          piVar5 = piVar5 + -1;
          uVar4 = *(int *)(iVar1 + 4) + *(int *)(iVar1 + 0xc);
        }
        *piVar3 = iVar1;
      }
      else {
        fn_82F63CA0(piVar6 + (1 - ((int)piVar6 - (int)param_1 >> 2)),param_1);
        *param_1 = iVar1;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != param_2);
  }
  return;
}

