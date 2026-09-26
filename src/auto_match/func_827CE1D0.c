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
extern int fn_827C1AC8();
extern int fn_827CE0C8();


void fn_827CE1D0(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar6;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  puVar6 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x68);
  *(undefined4 **)(param_1 + 0x148) = puVar6;
  *puVar6 = fn_827CE0C8;
  if (param_2 == '\0') {
    iVar8 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar9 = puVar6 + 5;
    lVar11 = 10;
    do {
      piVar9 = piVar9 + 1;
      *piVar9 = iVar8;
      iVar8 = iVar8 + 0x80;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar6[0x10] = 0;
  }
  else {
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x3c)) {
      puVar10 = (undefined4 *)(*(int *)(param_1 + 0x44) + -0x34);
      puVar6 = puVar6 + 0xf;
      do {
        uVar7 = puVar10[0x10];
        uVar1 = puVar10[0x14];
        uVar2 = puVar10[0xf];
        puVar10 = puVar10 + 0x15;
        iVar3 = *(int *)(param_1 + 4);
        uVar4 = fn_827C1AC8(*puVar10,uVar7);
        uVar5 = fn_827C1AC8(uVar1,uVar2);
        uVar7 = (**(code **)(iVar3 + 0x14))(param_1,1,0,uVar5,uVar4,uVar7);
        iVar8 = iVar8 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = uVar7;
      } while (iVar8 < *(int *)(param_1 + 0x3c));
    }
  }
  return;
}

