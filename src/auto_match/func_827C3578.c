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
extern int fn_827C2640();
extern int fn_827C2650();
extern int fn_827C2878();
extern int fn_827C2880();
extern int fn_827C2A78();
extern int fn_827C3500();


void fn_827C3578(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  code *pcVar10;
  code *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  
  puVar5 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x74);
  *(undefined4 **)(param_1 + 0x188) = puVar5;
  iVar7 = 0;
  puVar5[0x1c] = 0;
  *puVar5 = fn_827C2640;
  puVar5[2] = fn_827C3500;
  if (param_2 == '\0') {
    iVar7 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar9 = puVar5 + 7;
    lVar14 = 10;
    do {
      piVar9 = piVar9 + 1;
      *piVar9 = iVar7;
      iVar7 = iVar7 + 0x80;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    puVar5[4] = 0;
    pcVar11 = fn_827C2878;
    pcVar10 = fn_827C2650;
  }
  else {
    if (0 < *(int *)(param_1 + 0x24)) {
      puVar13 = (undefined4 *)(*(int *)(param_1 + 0xc4) + -0x34);
      puVar12 = puVar5 + 0x11;
      do {
        uVar8 = (ulonglong)(uint)puVar13[0x10];
        if (*(char *)(param_1 + 200) != '\0') {
          uVar8 = uVar8 * 3;
        }
        uVar6 = puVar13[0x14];
        uVar1 = puVar13[0xf];
        puVar13 = puVar13 + 0x15;
        iVar2 = *(int *)(param_1 + 4);
        uVar3 = fn_827C1AC8(*puVar13);
        uVar4 = fn_827C1AC8(uVar6,uVar1);
        uVar6 = (**(code **)(iVar2 + 0x14))(param_1,1,1,uVar4,uVar3,uVar8);
        iVar7 = iVar7 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = uVar6;
      } while (iVar7 < *(int *)(param_1 + 0x24));
    }
    pcVar11 = fn_827C2880;
    pcVar10 = fn_827C2A78;
    puVar5[4] = puVar5 + 0x12;
  }
  puVar5[3] = pcVar10;
  puVar5[1] = pcVar11;
  return;
}

