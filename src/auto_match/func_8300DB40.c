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
extern int fn_82FA5190();
extern int fn_83013B98();
extern int fn_83036628();
extern int fn_83036C28();
extern int fn_83036C30();
extern unsigned int lbl_831BC770;


ulonglong fn_8300DB40(undefined4 *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  for (puVar4 = (uint *)*param_1;
      (puVar4 != (uint *)param_1[1] && ((ulonglong)*puVar4 != (param_2 & 0xffffffff)));
      puVar4 = puVar4 + 2) {
  }
  uVar5 = (uint)((uint *)param_1[1] != puVar4);
  puVar4 = (uint *)(-(uint)(uVar5 != 0) & (uint)(puVar4 + 1));
  if (puVar4 == (uint *)0x0) {
    uVar1 = fn_82FA5060(lbl_831BC770,0x10,param_3,-uVar5);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_83036628();
      iVar3 = fn_83013B98(param_1,param_2,uVar1);
      if (iVar3 != 0) goto LAB_8300dbfc;
      fn_83036C28(uVar1);
      fn_82FA5190(lbl_831BC770,uVar1);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = (ulonglong)*puVar4;
LAB_8300dbfc:
    uVar5 = 0;
    if (*(char *)((int)param_1 + 0x4d) != '\0') {
      do {
        iVar3 = uVar5 + 1;
        puVar6 = (undefined4 *)param_1[iVar3 * 3];
        if (puVar6 != (undefined4 *)param_1[iVar3 * 3 + 1]) {
          do {
            uVar2 = (**(code **)(*(int *)puVar6[1] + 0x38))();
            fn_83036C30(uVar1,uVar5,*puVar6,uVar2);
            puVar6 = puVar6 + 2;
          } while (puVar6 != (undefined4 *)param_1[iVar3 * 3 + 1]);
        }
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < *(byte *)((int)param_1 + 0x4d));
    }
  }
  return uVar1;
}

