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
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F691F0();


undefined8 fn_82E54D90(int param_1,uint param_2,short param_3)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  fn_82E50CB8(param_1 + 8);
  if (*(uint *)(param_1 + 0x58) <= param_2) {
LAB_82e54dc4:
    uVar7 = 0xffffffff80070057;
    goto LAB_82e54ef8;
  }
  if (param_2 < *(uint *)(param_1 + 0x58)) {
    piVar2 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x54));
    uVar1 = piVar2[1];
    if (0x7e < uVar1) {
      uVar7 = 0xffffffffc00d36b2;
      goto LAB_82e54ef8;
    }
    uVar5 = 0;
    if (uVar1 != 0) {
      iVar6 = 0;
      do {
        if (*(short *)(iVar6 + *piVar2) == param_3) goto LAB_82e54dc4;
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 2;
      } while (uVar5 < (uint)piVar2[1]);
    }
    uVar5 = piVar2[2];
    if (uVar1 <= uVar5) {
      if (uVar1 == uVar5) {
        uVar8 = (ulonglong)(uVar5 * 3 >> 1) + 1;
        uVar3 = uVar8 * 2 & 0xfffffffe;
        if (0x7fffffff < uVar8) {
          uVar3 = 0xffffffffffffffff;
        }
        lVar4 = fn_82E50BE8(uVar3,0,0,0,0);
        if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(lVar4,0,uVar8 * 2 & 0xfffffffe);
        }
        uVar7 = 0xffffffff8007000e;
      }
      else {
        *(short *)(piVar2[1] * 2 + *piVar2) = param_3;
        piVar2[1] = piVar2[1] + 1;
      }
      goto LAB_82e54ef8;
    }
  }
  uVar7 = 0xffffffff8000ffff;
LAB_82e54ef8:
  fn_82E50F10(param_1 + 8);
  return uVar7;
}

