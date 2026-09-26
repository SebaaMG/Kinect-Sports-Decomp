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
extern int fn_8223C3D0();
extern int fn_828B3E88();
extern int fn_82F68CC0();


undefined8 fn_828B4718(int param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x18);
  *param_3 = uVar6;
  if ((ulonglong)uVar6 == 0) {
    uVar2 = 0;
  }
  else {
    fn_8223C3D0(param_2,(ulonglong)uVar6 * 0x2a);
    lVar5 = 0;
    piVar1 = *(int **)(param_1 + 8);
    for (uVar6 = *(uint *)(param_1 + 0x14);
        uVar6 != *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14); uVar6 = uVar6 + 1) {
      iVar3 = 0;
      if (piVar1 != (int *)0x0) {
        iVar3 = *piVar1;
      }
      uVar4 = uVar6;
      if (*(uint *)(iVar3 + 8) <= uVar6) {
        uVar4 = uVar6 - *(uint *)(iVar3 + 8);
      }
      fn_82F68CC0(lVar5 + (ulonglong)*param_2,
                   (ulonglong)*(uint *)(*(int *)(iVar3 + 4) + uVar4 * 4) + 0x18,0x2a);
      lVar5 = lVar5 + 0x2a;
    }
    fn_828B3E88((int *)(param_1 + 8));
    uVar2 = 1;
  }
  return uVar2;
}

