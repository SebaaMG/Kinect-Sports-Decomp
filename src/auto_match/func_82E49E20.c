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
extern int fn_82A2A4C8();
extern int fn_82A2A518();
extern int fn_82E50BE8();


ulonglong fn_82E49E20(int *param_1,uint param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  int *piVar8;
  
  piVar8 = param_1 + 1;
  uVar7 = 0;
  puVar5 = (uint *)(-(uint)(piVar8 != (int *)param_1[1]) & (uint)param_1[1]);
  puVar3 = (uint *)0x0;
  if (puVar5 != (uint *)0x0) {
    do {
      puVar6 = (uint *)(-(uint)(piVar8 != (int *)*puVar5) & *puVar5);
      if (puVar5[2] == 0) {
        if (param_2 <= puVar5[4]) {
          puVar5[2] = 1;
          *param_3 = puVar5[3];
          return 0;
        }
        if (puVar3 == (uint *)0x0) {
          puVar3 = puVar5;
        }
      }
      puVar5 = puVar6;
    } while (puVar6 != (uint *)0x0);
    if (puVar3 != (uint *)0x0) {
      fn_82A2A518(puVar3[3],0,0x8000);
      puVar3[3] = 0;
      goto LAB_82e49f3c;
    }
  }
  puVar3 = (uint *)fn_82E50BE8(0x14,0,0,0,0);
  if (puVar3 == (uint *)0x0) {
    return 0xffffffff8007000e;
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar1 = (undefined4 *)param_1[2];
  puVar3[1] = (uint)puVar1;
  *puVar3 = (uint)piVar8;
  *puVar1 = puVar3;
  param_1[2] = (int)puVar3;
  *param_1 = *param_1 + 1;
LAB_82e49f3c:
  uVar2 = ((param_2 >> 0xc) + 1) * 0x1000;
  uVar4 = fn_82A2A4C8(0,uVar2,0x1000,4);
  puVar3[3] = uVar4;
  if (uVar4 == 0) {
    uVar7 = thunk_FUN_82a2b798();
    if (0 < (int)uVar7) {
      uVar7 = uVar7 & 0xffff | 0x80070000;
    }
  }
  else {
    puVar3[4] = uVar2;
    puVar3[2] = 1;
    *param_3 = uVar4;
  }
  return uVar7;
}

