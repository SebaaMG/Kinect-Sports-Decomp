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
extern int fn_8248F890();
extern int fn_8248F8E8();
extern int fn_824967B0();
extern int fn_82F622A8();
extern int fn_82F68CC0();


uint * fn_82496080(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  bool bVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (param_1 != param_2) {
    puVar9 = (undefined2 *)*param_2;
    puVar5 = (undefined2 *)param_2[1];
    uVar1 = ((int)puVar5 - (int)puVar9) / 0x1c;
    if (uVar1 == 0) {
      fn_824967B0();
    }
    else {
      puVar6 = (undefined2 *)*param_1;
      uVar4 = ((int)param_1[1] - (int)puVar6) / 0x1c;
      if (uVar4 < uVar1) {
        if ((uint)((int)(param_1[2] - (int)puVar6) / 0x1c) < uVar1) {
          if (puVar6 != (undefined2 *)0x0) {
            if (puVar6 != (undefined2 *)param_1[1]) {
              puVar9 = puVar6;
              do {
                puVar9 = puVar9 + 0xe;
              } while (puVar9 != (undefined2 *)param_1[1]);
            }
            fn_8248F8E8(puVar6);
          }
          uVar1 = param_2[1];
          bVar3 = false;
          uVar4 = *param_2;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          uVar1 = (int)(uVar1 - uVar4) / 0x1c;
          if (uVar1 != 0) {
            if (0x9249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
              fn_82F622A8(0xffffffff82196fd4);
            }
            uVar4 = fn_8248F890((longlong)(int)uVar1 * 0x1c);
            bVar3 = true;
            *param_1 = uVar4;
            param_1[1] = uVar4;
            param_1[2] = (int)((longlong)(int)uVar1 * 0x1c) + uVar4;
          }
          if (bVar3) {
            uVar1 = param_2[1];
            uVar10 = (ulonglong)*param_1;
            for (uVar11 = (ulonglong)*param_2; (uVar11 & 0xffffffff) != (ulonglong)uVar1;
                uVar11 = uVar11 + 0x1c) {
              if ((uVar10 & 0xffffffff) != 0) {
                fn_82F68CC0(uVar10,uVar11,0x1c);
              }
              uVar10 = uVar10 + 0x1c;
            }
            param_1[1] = (uint)uVar10;
          }
        }
        else {
          puVar5 = puVar9 + uVar4 * 0xe;
          if (puVar9 != puVar5) {
            puVar7 = puVar6 + -1;
            puVar8 = puVar9 + -1;
            puVar6 = puVar6 + -0xe;
            do {
              uVar2 = *puVar9;
              puVar9 = puVar9 + 0xe;
              puVar6 = puVar6 + 0xe;
              *puVar6 = uVar2;
              puVar7[2] = puVar8[2];
              puVar7[3] = puVar8[3];
              puVar7[4] = puVar8[4];
              *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar8 + 5);
              puVar7[7] = puVar8[7];
              puVar7[8] = puVar8[8];
              puVar7[9] = puVar8[9];
              puVar7[10] = puVar8[10];
              puVar7[0xb] = puVar8[0xb];
              puVar7[0xc] = puVar8[0xc];
              puVar7[0xd] = puVar8[0xd];
              puVar8 = puVar8 + 0xe;
              puVar7 = puVar7 + 0xe;
              *puVar7 = *puVar8;
            } while (puVar9 != puVar5);
          }
          puVar9 = (undefined2 *)param_2[1];
          uVar10 = (ulonglong)param_1[1];
          for (; puVar5 != puVar9; puVar5 = puVar5 + 0xe) {
            if ((uVar10 & 0xffffffff) != 0) {
              fn_82F68CC0(uVar10,puVar5,0x1c);
            }
            uVar10 = uVar10 + 0x1c;
          }
          param_1[1] = (uint)uVar10;
        }
      }
      else {
        if (puVar9 != puVar5) {
          puVar7 = puVar6 + -1;
          puVar8 = puVar9 + -1;
          do {
            uVar2 = *puVar9;
            puVar9 = puVar9 + 0xe;
            *puVar6 = uVar2;
            puVar6 = puVar6 + 0xe;
            puVar7[2] = puVar8[2];
            puVar7[3] = puVar8[3];
            puVar7[4] = puVar8[4];
            *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar8 + 5);
            puVar7[7] = puVar8[7];
            puVar7[8] = puVar8[8];
            puVar7[9] = puVar8[9];
            puVar7[10] = puVar8[10];
            puVar7[0xb] = puVar8[0xb];
            puVar7[0xc] = puVar8[0xc];
            puVar7[0xd] = puVar8[0xd];
            puVar8 = puVar8 + 0xe;
            puVar7 = puVar7 + 0xe;
            *puVar7 = *puVar8;
          } while (puVar9 != puVar5);
        }
        for (; puVar6 != (undefined2 *)param_1[1]; puVar6 = puVar6 + 0xe) {
        }
        param_1[1] = ((int)(param_2[1] - *param_2) / 0x1c) * 0x1c + *param_1;
      }
    }
  }
  return param_1;
}

