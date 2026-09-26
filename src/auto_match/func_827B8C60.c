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
extern int fn_827B78D8();
extern int fn_827B7978();
extern int fn_827B8AD0();


void fn_827B8C60(undefined8 param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  piVar3 = *(int **)(param_4 + 8);
  if (*piVar3 == 0) {
    uVar5 = (param_2 & 0x7fffffff) << 1;
    if (uVar5 < *(ushort *)(param_4 + 0x24)) {
      if ((piVar3[4] == 0) && (piVar3[5] == 0)) {
        fn_827B78D8(param_1,param_4,param_2);
      }
      else if ((piVar3[5] == 0) &&
              ((*(short *)((int)piVar3 + 0x1e) == *(short *)(*(int *)(param_4 + 0x1c) + 4) &&
               (uVar5 < *(ushort *)(piVar3 + 7))))) {
        uVar2 = *(ushort *)(piVar3 + 6);
        uVar1 = *(ushort *)(param_4 + 0x22);
        if ((uVar1 == uVar2) !=
            ((uint)uVar1 + (uint)*(ushort *)(param_4 + 0x24) ==
            (uint)uVar2 + (uint)*(ushort *)(piVar3 + 7))) {
          fn_827B7978(param_1,param_4,uVar1 == uVar2,param_2);
        }
      }
    }
  }
  iVar4 = fn_827B8AD0(param_1,param_2,param_3,*(undefined4 *)(param_4 + 8));
  if (iVar4 == 0) {
    *(short *)(param_4 + 0x26) = *(short *)(param_4 + 0x26) + 1;
  }
  uVar2 = *(ushort *)(param_4 + 0x26);
  if (uVar2 < 0x11) {
    if ((uVar2 != 0) && (iVar4 != 0)) {
      *(ushort *)(param_4 + 0x26) = uVar2 - 1;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_4 + 0x14) + 0x18) = *(undefined4 *)(param_4 + 0x18);
    *(undefined4 *)(*(int *)(param_4 + 0x18) + 0x14) = *(undefined4 *)(param_4 + 0x14);
    *(ushort *)(param_4 + 0x20) = *(ushort *)(param_4 + 0x20) | 0x4000;
  }
  return;
}

