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
extern int fn_827C36D8();
extern int fn_827C4488();
extern int fn_827C46D0();
extern int fn_827C4928();
extern int fn_827C4A38();


void fn_827C4E40(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  
  iVar2 = param_1[0x66];
  bVar5 = false;
  bVar4 = param_1[0x5b] != 0;
  iVar7 = param_1[0x5c];
  if (bVar4) {
    if ((iVar7 < param_1[0x5b]) || (0x3f < iVar7)) {
      bVar5 = true;
    }
    bVar1 = param_1[0x49] == 1;
  }
  else {
    bVar1 = iVar7 == 0;
  }
  if (!bVar1) {
    bVar5 = true;
  }
  if ((param_1[0x5d] != 0) && (param_1[0x5e] != param_1[0x5d] + -1)) {
    bVar5 = true;
  }
  if (0xd < param_1[0x5e]) {
    bVar5 = true;
  }
  if (bVar5) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x5b];
    *(int *)(*param_1 + 0x1c) = param_1[0x5c];
    *(int *)(*param_1 + 0x20) = param_1[0x5d];
    *(int *)(*param_1 + 0x24) = param_1[0x5e];
    (**(code **)*param_1)(param_1);
  }
  iVar7 = 0;
  if (0 < param_1[0x49]) {
    piVar10 = param_1 + 0x4a;
    do {
      iVar3 = *(int *)(*piVar10 + 4);
      piVar9 = (int *)(iVar3 * 0x100 + param_1[0x23]);
      if ((bVar4) && (*piVar9 < 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x73;
        *(int *)(*param_1 + 0x18) = iVar3;
        *(undefined4 *)(*param_1 + 0x1c) = 0;
        (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
      }
      iVar11 = param_1[0x5b];
      if (iVar11 <= param_1[0x5c]) {
        piVar9 = piVar9 + iVar11 + -1;
        do {
          if (param_1[0x5d] != (-(piVar9[1] >> 0x1f) - 1U & piVar9[1])) {
            *(undefined4 *)(*param_1 + 0x14) = 0x73;
            *(int *)(*param_1 + 0x18) = iVar3;
            *(int *)(*param_1 + 0x1c) = iVar11;
            (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
          }
          iVar11 = iVar11 + 1;
          piVar9 = piVar9 + 1;
          *piVar9 = param_1[0x5e];
        } while (iVar11 <= param_1[0x5c]);
      }
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar7 < param_1[0x49]);
  }
  if (param_1[0x5d] == 0) {
    if (bVar4) {
      pcVar6 = fn_827C46D0;
    }
    else {
      pcVar6 = fn_827C4488;
    }
  }
  else if (bVar4) {
    pcVar6 = fn_827C4A38;
  }
  else {
    pcVar6 = fn_827C4928;
  }
  *(code **)(iVar2 + 4) = pcVar6;
  iVar7 = 0;
  if (0 < param_1[0x49]) {
    puVar8 = (undefined4 *)(iVar2 + 0x14);
    piVar10 = param_1 + 0x4a;
    do {
      if (bVar4) {
        iVar3 = *(int *)(*piVar10 + 0x18);
        puVar12 = (undefined4 *)((iVar3 + 0xb) * 4 + iVar2);
        fn_827C36D8(param_1,0,iVar3,puVar12);
        *(undefined4 *)(iVar2 + 0x3c) = *puVar12;
      }
      else if (param_1[0x5d] == 0) {
        iVar3 = *(int *)(*piVar10 + 0x14);
        fn_827C36D8(param_1,1,iVar3,(iVar3 + 0xb) * 4 + iVar2);
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = 0;
      piVar10 = piVar10 + 1;
    } while (iVar7 < param_1[0x49]);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x28) = param_1[0x3f];
  return;
}

