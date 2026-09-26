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
#define _uStack00000028 ((*(U64*)&uStack00000028))
extern unsigned int lbl_8318A744;
extern unsigned int uStack00000028;
extern unsigned int uStack0000002c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82EEF878(undefined4 *param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 in_stack_00000020;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined4 *apuStack_30 [12];
  
  puVar1 = (undefined4 *)0x0;
  for (puVar2 = param_1;
      (_uStack00000028 = param_4, puVar2 != (undefined4 *)0x0 && ((uint)puVar2[1] <= param_2));
      puVar2 = (undefined4 *)puVar2[0x58]) {
    apuStack_30[0] = puVar2;
    if (param_2 < puVar2[1] + 0x14) goto LAB_82eef920;
    puVar1 = puVar2;
  }
  apuStack_30[0] = (undefined4 *)0x0;
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff8000ffff;
  }
  else {
    uVar3 = (**(code **)*param_1)(param_1,apuStack_30);
    if (-1 < (int)uVar3) {
      apuStack_30[0][1] = (param_2 / 0x14) * 0x14;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[0x58] = apuStack_30[0];
      }
      apuStack_30[0][0x58] = puVar2;
LAB_82eef920:
      param_2 = param_2 - apuStack_30[0][1];
      iVar4 = param_2 + 2;
      uVar3 = 0;
      *(byte *)((int)apuStack_30[0] + (param_2 >> 3) + 0x1c) =
           (&lbl_8318A744)[param_2 & 7] | *(byte *)((int)apuStack_30[0] + (param_2 >> 3) + 0x1c);
      apuStack_30[0][iVar4 * 4] = in_stack_00000020;
      apuStack_30[0][iVar4 * 4 + 1] = param_3;
      apuStack_30[0][iVar4 * 4 + 2] = uStack00000028;
      apuStack_30[0][iVar4 * 4 + 3] = uStack0000002c;
    }
  }
  return uVar3;
}

