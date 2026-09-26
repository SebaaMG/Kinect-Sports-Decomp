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
extern int fn_82566E58();


undefined8 fn_825708F0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  
  for (piVar8 = (int *)param_1[2]; (piVar8 != (int *)param_1[3] && (*piVar8 != param_2));
      piVar8 = piVar8 + 0xc) {
  }
  if (piVar8 == (int *)param_1[3]) {
    uVar3 = 0;
  }
  else {
    fn_82566E58(piVar8[1],*(undefined4 *)(*param_1 + 0x844));
    *piVar8 = -1;
    piVar1 = (int *)param_1[3];
    piVar2 = piVar8;
    while (piVar2 = piVar2 + 0xc, piVar2 != piVar1) {
      piVar5 = piVar2 + -2;
      piVar4 = piVar8 + -2;
      lVar9 = 6;
      do {
        piVar5 = piVar5 + 2;
        piVar4 = piVar4 + 2;
        *(undefined8 *)piVar4 = *(undefined8 *)piVar5;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      piVar8 = piVar8 + 0xc;
    }
    iVar7 = param_1[3] + -0x30;
    for (iVar6 = iVar7; iVar6 != param_1[3]; iVar6 = iVar6 + 0x30) {
    }
    param_1[3] = iVar7;
    uVar3 = 1;
  }
  return uVar3;
}

