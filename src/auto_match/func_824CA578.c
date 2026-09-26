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
extern int fn_82230218();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_824CAAE8();
extern int fn_824CABA8();
extern int fn_8265CA20();


int * fn_824CA578(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 != param_2) {
    puVar7 = (undefined4 *)*param_2;
    puVar6 = (undefined4 *)param_2[1];
    uVar2 = ((int)puVar6 - (int)puVar7) / 0x30;
    if (uVar2 == 0) {
      fn_824CAAE8();
    }
    else {
      iVar5 = *param_1;
      iVar9 = param_1[1];
      uVar1 = (iVar9 - iVar5) / 0x30;
      if (uVar1 < uVar2) {
        if ((uint)((param_1[2] - iVar5) / 0x30) < uVar2) {
          if (iVar5 != 0) {
            for (; iVar5 != iVar9; iVar5 = iVar5 + 0x30) {
              fn_82230300(iVar5,1,0);
            }
            fn_8265CA20(*param_1);
          }
          cVar3 = fn_824CABA8(param_1,(param_2[1] - *param_2) / 0x30);
          if (cVar3 != '\0') {
            iVar5 = param_2[1];
            iVar8 = *param_1;
            for (iVar9 = *param_2; iVar9 != iVar5; iVar9 = iVar9 + 0x30) {
              if (iVar8 != 0) {
                fn_8223B688(iVar8,iVar9);
                *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar9 + 0x1c);
                *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar9 + 0x20);
                *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar9 + 0x24);
                *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar9 + 0x28);
                *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(iVar9 + 0x2c);
              }
              iVar8 = iVar8 + 0x30;
            }
            param_1[1] = iVar8;
          }
        }
        else {
          puVar6 = puVar7 + uVar1 * 0xc;
          for (; puVar7 != puVar6; puVar7 = puVar7 + 0xc) {
            fn_82230218(iVar5,puVar7,0,0xffffffffffffffff);
            *(undefined4 *)(iVar5 + 0x1c) = puVar7[7];
            *(undefined4 *)(iVar5 + 0x20) = puVar7[8];
            *(undefined4 *)(iVar5 + 0x24) = puVar7[9];
            *(undefined4 *)(iVar5 + 0x28) = puVar7[10];
            *(undefined4 *)(iVar5 + 0x2c) = puVar7[0xb];
            iVar5 = iVar5 + 0x30;
          }
          puVar7 = (undefined4 *)param_2[1];
          iVar5 = param_1[1];
          if (puVar6 != puVar7) {
            puVar6 = puVar6 + 8;
            do {
              if (iVar5 != 0) {
                fn_8223B688(iVar5,puVar6 + -8);
                *(undefined4 *)(iVar5 + 0x1c) = puVar6[-1];
                *(undefined4 *)(iVar5 + 0x20) = *puVar6;
                *(undefined4 *)(iVar5 + 0x24) = puVar6[1];
                *(undefined4 *)(iVar5 + 0x28) = puVar6[2];
                *(undefined4 *)(iVar5 + 0x2c) = puVar6[3];
              }
              iVar5 = iVar5 + 0x30;
              puVar4 = puVar6 + 4;
              puVar6 = puVar6 + 0xc;
            } while (puVar4 != puVar7);
          }
          param_1[1] = iVar5;
        }
      }
      else {
        for (; puVar7 != puVar6; puVar7 = puVar7 + 0xc) {
          fn_82230218(iVar5,puVar7,0,0xffffffffffffffff);
          *(undefined4 *)(iVar5 + 0x1c) = puVar7[7];
          *(undefined4 *)(iVar5 + 0x20) = puVar7[8];
          *(undefined4 *)(iVar5 + 0x24) = puVar7[9];
          *(undefined4 *)(iVar5 + 0x28) = puVar7[10];
          *(undefined4 *)(iVar5 + 0x2c) = puVar7[0xb];
          iVar5 = iVar5 + 0x30;
        }
        iVar9 = param_1[1];
        for (; iVar5 != iVar9; iVar5 = iVar5 + 0x30) {
          fn_82230300(iVar5,1,0);
        }
        param_1[1] = ((param_2[1] - *param_2) / 0x30) * 0x30 + *param_1;
      }
    }
  }
  return param_1;
}

