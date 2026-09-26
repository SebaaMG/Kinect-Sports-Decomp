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
extern int fn_8227EB10();
extern unsigned int lbl_821CC160;


void fn_8227E950(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = param_1[0xb];
  if (iVar1 != -1) {
    if (iVar1 != param_3) {
      iVar1 = *(int *)(iVar1 * 4 + param_1[3]);
      if (*(code **)(iVar1 + 4) != (code *)0x0) {
        (**(code **)(iVar1 + 4))(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0xc),0);
      }
      piVar3 = *(int **)(iVar1 + 0x10);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(piVar3,*(undefined4 *)(iVar1 + 0x14),0);
      }
      *(uint *)(iVar1 + 0x6c) = *(uint *)(iVar1 + 0x6c) & 0xfffffffb;
    }
    fn_8227EB10(param_1,0);
    uVar2 = lbl_821CC160;
    if ((param_2 != (int *)0x0) && (piVar3 = (int *)param_2[0x13], piVar3 != (int *)param_2[0x14]))
    {
      do {
        iVar1 = *piVar3;
        piVar3 = piVar3 + 1;
        *(undefined4 *)((*param_2 + 0xf) * 4 + iVar1) = uVar2;
      } while (piVar3 != (int *)param_2[0x14]);
    }
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  param_1[0xb] = param_3;
  return;
}

