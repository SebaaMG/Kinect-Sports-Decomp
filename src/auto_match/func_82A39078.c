extern int *piRam83219598;
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
extern int fn_82A384E8();


undefined8 fn_82A39078(undefined8 param_1,undefined4 *param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 * apuStack_40;

  piVar1 = piRam83219598;
  uVar2 = fn_82A384E8(piRam83219598 + 0x14,param_1,&apuStack_40);
  if ((apuStack_40 == (undefined4 *)0x0) && ((int)uVar2 != -0x3ffffee1)) {
    uVar2 = (**(code **)(*piVar1 + 8))(param_1,param_2,param_3);
    return uVar2;
  }
  if (((param_3 & 1) == 0) || (iVar3 = (*(code *)piVar1[1])(param_1), -1 < iVar3)) {
    if (apuStack_40 == (undefined4 *)0x0) {
      return uVar2;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *apuStack_40;
      return uVar2;
    }
    iVar3 = (*(code *)piVar1[1])(*apuStack_40);
    if (-1 < iVar3) {
      return uVar2;
    }
  }
  else if (apuStack_40 != (undefined4 *)0x0) {
    (*(code *)piVar1[1])(*apuStack_40);
  }
  return 0xffffffffc0000001;
}
