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
extern int fn_82FA5060();
extern int fn_8301A5D0();
extern unsigned int lbl_831BC768;


undefined8 fn_8303F240(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_1 + 0x1c);
  uVar1 = *(uint *)*param_2;
  *param_2 = (int)((uint *)*param_2 + 1);
  if (uVar1 != 0) {
    iVar5 = fn_82FA5060(lbl_831BC768,uVar1 << 2);
    *piVar8 = iVar5;
    *(int *)(param_1 + 0x20) = iVar5;
    if (iVar5 != 0) {
      *(uint *)(param_1 + 0x24) = uVar1;
    }
  }
  uVar7 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (int)((undefined4 *)*param_2 + 1);
      uVar4 = *(int *)(param_1 + 0x20) - *piVar8 >> 2;
      if (((*(uint *)(param_1 + 0x24) <= uVar4) &&
          (cVar6 = fn_8301A5D0(piVar8,8), cVar6 == '\0')) ||
         (*(uint *)(param_1 + 0x24) <= uVar4)) {
        return 2;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x20);
      *(undefined4 **)(param_1 + 0x20) = puVar3 + 1;
      if (puVar3 == (undefined4 *)0x0) {
        return 2;
      }
      uVar7 = uVar7 + 1;
      *puVar3 = uVar2;
    } while (uVar7 < uVar1);
  }
  return 1;
}

