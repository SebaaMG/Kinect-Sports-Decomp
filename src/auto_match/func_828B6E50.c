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
extern int fn_828B6AB8();
extern int fn_828B9180();


undefined4 * fn_828B6E50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  double dVar9;
  double dVar10;
  
  uVar2 = (int)param_3 - (int)param_2 >> 3;
  puVar6 = param_2 + (((int)param_3 - (int)param_2 >> 4) +
                     (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0)) * 2;
  fn_828B6AB8(param_2,puVar6,param_3 + -2);
  puVar7 = puVar6;
  if (param_2 < puVar6) {
    while( true ) {
      uVar1 = *puVar7;
      puVar5 = puVar7 + -2;
      dVar9 = (double)fn_828B9180(puVar7[-2]);
      dVar10 = (double)fn_828B9180(uVar1);
      if (dVar10 < dVar9) break;
      uVar1 = *puVar5;
      dVar9 = (double)fn_828B9180(*puVar7);
      dVar10 = (double)fn_828B9180(uVar1);
      if ((dVar10 < dVar9) || (puVar7 = puVar5, puVar5 <= param_2)) break;
    }
  }
  do {
    puVar6 = puVar6 + 2;
    puVar5 = puVar6;
    puVar4 = puVar7;
    if (param_3 <= puVar6) break;
    uVar1 = *puVar7;
    dVar9 = (double)fn_828B9180(*puVar6);
    dVar10 = (double)fn_828B9180(uVar1);
    if (dVar10 < dVar9) break;
    uVar1 = *puVar6;
    dVar9 = (double)fn_828B9180(*puVar7);
    dVar10 = (double)fn_828B9180(uVar1);
  } while (dVar9 <= dVar10);
joined_r0x828b6fa0:
  do {
    if (param_3 <= puVar5) {
joined_r0x828b7044:
      while (puVar3 = puVar4, param_2 < puVar3) {
        uVar1 = *puVar7;
        puVar4 = puVar3 + -2;
        dVar9 = (double)fn_828B9180(puVar3[-2]);
        dVar10 = (double)fn_828B9180(uVar1);
        if (dVar9 <= dVar10) {
          uVar1 = *puVar4;
          dVar9 = (double)fn_828B9180(*puVar7);
          dVar10 = (double)fn_828B9180(uVar1);
          if (dVar10 < dVar9) break;
          puVar8 = puVar7 + -2;
          uVar1 = puVar7[-1];
          puVar7[-1] = puVar3[-1];
          puVar3[-1] = uVar1;
          uVar1 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
          puVar7 = puVar8;
        }
      }
      if (puVar3 == param_2) {
        if (puVar5 == param_3) {
          *param_1 = puVar7;
          param_1[1] = puVar6;
          return param_1;
        }
        if (puVar6 != puVar5) {
          uVar1 = puVar7[1];
          puVar7[1] = puVar6[1];
          puVar6[1] = uVar1;
          uVar1 = *puVar7;
          *puVar7 = *puVar6;
          *puVar6 = uVar1;
        }
        uVar1 = puVar7[1];
        puVar7[1] = puVar5[1];
        puVar5[1] = uVar1;
        uVar1 = *puVar7;
        *puVar7 = *puVar5;
        *puVar5 = uVar1;
        puVar6 = puVar6 + 2;
        puVar5 = puVar5 + 2;
        puVar7 = puVar7 + 2;
        puVar4 = puVar3;
      }
      else {
        puVar4 = puVar3 + -2;
        if (puVar5 == param_3) {
          puVar8 = puVar7 + -2;
          if (puVar4 != puVar8) {
            uVar1 = puVar3[-1];
            puVar3[-1] = puVar7[-1];
            puVar7[-1] = uVar1;
            uVar1 = *puVar4;
            *puVar4 = *puVar8;
            *puVar8 = uVar1;
          }
          puVar3 = puVar6 + -2;
          uVar1 = puVar7[-1];
          puVar7[-1] = puVar6[-1];
          puVar6[-1] = uVar1;
          uVar1 = *puVar8;
          *puVar8 = *puVar3;
          *puVar3 = uVar1;
          puVar6 = puVar3;
          puVar7 = puVar8;
        }
        else {
          uVar1 = puVar5[1];
          puVar5[1] = puVar3[-1];
          puVar3[-1] = uVar1;
          uVar1 = *puVar5;
          *puVar5 = *puVar4;
          *puVar4 = uVar1;
          puVar5 = puVar5 + 2;
        }
      }
      goto joined_r0x828b6fa0;
    }
    uVar1 = *puVar5;
    dVar9 = (double)fn_828B9180(*puVar7);
    dVar10 = (double)fn_828B9180(uVar1);
    puVar3 = puVar6;
    if (dVar9 <= dVar10) {
      uVar1 = *puVar7;
      dVar9 = (double)fn_828B9180(*puVar5);
      dVar10 = (double)fn_828B9180(uVar1);
      if (dVar10 < dVar9) goto joined_r0x828b7044;
      puVar3 = puVar6 + 2;
      uVar1 = puVar6[1];
      puVar6[1] = puVar5[1];
      puVar5[1] = uVar1;
      uVar1 = *puVar6;
      *puVar6 = *puVar5;
      *puVar5 = uVar1;
    }
    puVar6 = puVar3;
    puVar5 = puVar5 + 2;
  } while( true );
}

