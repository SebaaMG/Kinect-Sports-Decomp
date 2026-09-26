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
extern int fn_82A1DDC0();
extern unsigned int lbl_821AAD20;


undefined8 fn_8301AB88(int param_1,uint param_2,ulonglong param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  piVar5 = *(int **)((param_2 % 0xc1 + 10) * 4 + param_1);
  if (piVar5 != (int *)0x0) {
    while (piVar5[1] != param_2) {
      piVar5 = (int *)*piVar5;
      if (piVar5 == (int *)0x0) {
        return 2;
      }
    }
    if (piVar5 + 2 != (int *)0x0) {
      iVar1 = piVar5[2];
      if (param_4 < 5) {
        if (((param_3 & 0xffffffff) != 0) && (param_4 != 0)) {
          fn_82A1DDC0(iVar1 + 0x14,param_3,param_4 & 0x1fffffff);
        }
        uVar2 = lbl_821AAD20;
        if ((int)param_4 < 4) {
          iVar4 = 4 - param_4;
          puVar6 = (undefined4 *)((param_4 + 2) * 8 + iVar1);
          do {
            puVar6[1] = 0;
            puVar6 = puVar6 + 2;
            *puVar6 = uVar2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
      return uVar3;
    }
  }
  return 2;
}

