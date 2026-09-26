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
extern int fn_8282EDA0();


undefined4 * fn_8282EE40(undefined4 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  uVar4 = (int)param_3 - (int)param_2 >> 2;
  piVar9 = param_2 + ((int)param_3 - (int)param_2 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0)
  ;
  fn_8282EDA0(param_2,piVar9,param_3 + -1);
  piVar8 = piVar9 + 1;
  while (piVar7 = piVar9, param_2 < piVar7) {
    uVar4 = *(uint *)(piVar7[-1] + 0xc);
    uVar1 = *(uint *)(*piVar7 + 0xc);
    if ((uVar4 + *(int *)(piVar7[-1] + 4) <= uVar1) ||
       (piVar9 = piVar7 + -1, uVar1 + *(int *)(*piVar7 + 4) <= uVar4)) break;
  }
  piVar5 = piVar7;
  piVar9 = piVar8;
  if (piVar8 < param_3) {
    do {
      iVar2 = *piVar8;
      uVar4 = *(uint *)(*piVar7 + 0xc);
      piVar9 = piVar8;
      if (((uint)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 4)) <= uVar4) ||
         (uVar4 + *(int *)(*piVar7 + 4) <= *(uint *)(iVar2 + 0xc))) break;
      piVar8 = piVar8 + 1;
      piVar9 = piVar8;
    } while (piVar8 < param_3);
  }
LAB_8282ef80:
  do {
    piVar6 = piVar5;
    if (piVar8 < param_3) {
      iVar2 = *piVar7;
      iVar3 = *piVar8;
      if (*(uint *)(iVar3 + 0xc) < (uint)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 4))) {
        if (*(uint *)(iVar3 + 0xc) + *(int *)(iVar3 + 4) <= *(uint *)(iVar2 + 0xc))
        goto joined_r0x8282ef8c;
        iVar2 = *piVar9;
        *piVar9 = iVar3;
        *piVar8 = iVar2;
        goto LAB_8282ef78;
      }
    }
    else {
joined_r0x8282ef8c:
      while (piVar5 = piVar6, param_2 < piVar5) {
        iVar2 = piVar5[-1];
        piVar6 = piVar5 + -1;
        uVar4 = *(uint *)(*piVar7 + 0xc);
        if (uVar4 < (uint)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 4))) {
          if (uVar4 + *(int *)(*piVar7 + 4) <= *(uint *)(iVar2 + 0xc)) break;
          piVar7 = piVar7 + -1;
          iVar2 = *piVar7;
          *piVar7 = *piVar6;
          *piVar6 = iVar2;
        }
      }
      if (piVar5 == param_2) {
        if (piVar8 == param_3) {
          *param_1 = piVar7;
          param_1[1] = piVar9;
          return param_1;
        }
        if (piVar9 != piVar8) {
          iVar2 = *piVar7;
          *piVar7 = *piVar9;
          *piVar9 = iVar2;
        }
        iVar2 = *piVar7;
        *piVar7 = *piVar8;
        *piVar8 = iVar2;
        piVar7 = piVar7 + 1;
LAB_8282ef78:
        piVar9 = piVar9 + 1;
      }
      else {
        piVar5 = piVar5 + -1;
        if (piVar8 == param_3) {
          piVar7 = piVar7 + -1;
          if (piVar5 != piVar7) {
            iVar2 = *piVar5;
            *piVar5 = *piVar7;
            *piVar7 = iVar2;
          }
          piVar9 = piVar9 + -1;
          iVar2 = *piVar7;
          *piVar7 = *piVar9;
          *piVar9 = iVar2;
          goto LAB_8282ef80;
        }
        iVar2 = *piVar8;
        *piVar8 = *piVar5;
        *piVar5 = iVar2;
      }
    }
    piVar8 = piVar8 + 1;
  } while( true );
}

