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
extern int fn_8255BFC0();


undefined2 fn_8255C1D0(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar3 = (int *)fn_8255BFC0(param_1,param_2,param_2);
  iVar5 = -(((param_2 & 0xffff) < 10000) - 1);
  piVar7 = piVar3;
  if (piVar3 == (int *)0x0) {
LAB_8255c204:
    uVar4 = 0;
  }
  else {
    do {
      piVar2 = (int *)param_1;
      if (iVar5 == 0) {
        iVar6 = *piVar2;
      }
      else {
        iVar6 = piVar2[1];
      }
      piVar7 = (int *)(-(uint)((uint)((*piVar7 + (int)piVar7) - iVar6) < *(uint *)(iVar6 + 4)) &
                      *piVar7 + (int)piVar7);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)piVar2[1];
        if (piVar7 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar7;
        }
        if (((iVar5 != 0) || (piVar7 == (int *)0x0)) || (iVar6 == 0)) goto LAB_8255c204;
        iVar5 = 1;
        piVar7 = (int *)(-(uint)(*piVar7 != 0) & (uint)(piVar7 + 2));
      }
      if (*(short *)(piVar7 + 1) == 0x2a) {
        bVar1 = *(byte *)(piVar7 + 4);
        if ((piVar7[3] == 0) || ((uint)bVar1 + (-(uint)(bVar1 == 0) - (bVar1 - 1)) != 0)) break;
      }
    } while (piVar7 != piVar3);
    uVar4 = *(undefined2 *)((int)piVar7 + 6);
  }
  return uVar4;
}

