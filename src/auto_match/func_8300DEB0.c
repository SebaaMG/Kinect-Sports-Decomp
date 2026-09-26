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
extern int fn_82F69148();
extern int fn_8300D940();
extern int fn_83036908();


void fn_8300DEB0(int *param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar4;
  ulonglong uVar3;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  
  uVar2 = (param_4 & 0xffff) << 0x10;
  iVar7 = (param_2 & 0xff) + 1;
  puVar5 = (uint *)(param_1 + iVar7 * 3);
  for (puVar4 = (uint *)param_1[iVar7 * 3];
      (puVar4 != (uint *)puVar5[1] && ((ulonglong)*puVar4 != (uVar2 | param_3 & 0xffffffff)));
      puVar4 = puVar4 + 2) {
  }
  piVar6 = (int *)(-(uint)((uint *)puVar5[1] != puVar4) & (uint)(puVar4 + 1));
  if (piVar6 != (int *)0x0) {
    iVar7 = *param_1;
    if (iVar7 != param_1[1]) {
      do {
        fn_83036908(*(undefined4 *)(iVar7 + 4),param_2,uVar2 | param_3);
        iVar7 = iVar7 + 8;
      } while (iVar7 != param_1[1]);
    }
    if ((int *)*piVar6 != (int *)0x0) {
      (**(code **)(*(int *)*piVar6 + 0x28))();
      (**(code **)(*(int *)*piVar6 + 4))((int *)*piVar6,0xffffffff831bc7fc);
      *piVar6 = 0;
    }
    uVar3 = (ulonglong)puVar5[1];
    uVar1 = (ulonglong)*puVar5;
    if (uVar1 != uVar3) {
      do {
        if ((ulonglong)*(uint *)uVar1 == (uVar2 | param_3 & 0xffffffff)) break;
        uVar1 = uVar1 + 8;
      } while ((uVar1 & 0xffffffff) != uVar3);
      if ((uVar1 & 0xffffffff) != uVar3) {
        if ((uVar1 & 0xffffffff) < (uVar3 - 8 & 0xffffffff)) {
          fn_82F69148(uVar1,uVar1 + 8,
                       (((((uVar3 - 8) - uVar1) - 1 & 0xffffffff) >> 3) + 1) * 8 & 0xfffffff8);
        }
        puVar5[1] = puVar5[1] - 8;
      }
    }
    fn_8300D940(param_1);
  }
  return;
}

