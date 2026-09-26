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
extern int fn_8267BE38();
extern int fn_82681F28();
extern int fn_82681F88();
extern int fn_826820F0();


undefined8 fn_82682298(uint *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  
  if (((param_1[6] & 0x1000000) == 0) && (uVar11 = (ulonglong)*param_1, uVar11 != 0)) {
    uVar10 = 0;
    uVar9 = 0;
    do {
      uVar12 = 0;
      uVar10 = uVar11 + uVar10;
      uVar14 = 0;
      if (uVar11 != 0) {
        do {
          uVar8 = (uint)(uVar14 >> 8) & 0xfffffc;
          uVar5 = (uint)((uVar14 & 0xffffffff) << 2) & 0xffc;
          puVar3 = *(undefined4 **)(*(int *)(param_1[3] + uVar8) + uVar5);
          if (((uint)puVar3 & 1) == 0) {
            uVar1 = puVar3[2];
            if ((uVar1 & 0x70000000) == 0x30000000) {
              puVar3[2] = uVar1 & 0x8fffffff | 0x10000000;
              (**(code **)*puVar3)(puVar3,1);
            }
            else {
              puVar3[3] = 0xffffffff;
              puVar3[2] = uVar1 & 0x7fffffff;
            }
            uVar1 = (uint)uVar12;
            uVar4 = uVar12 & 0xffffffff;
            uVar12 = uVar12 + 1;
            *(undefined4 *)
             (*(int *)((uVar1 >> 8 & 0xfffffc) + param_1[3]) + ((uint)(uVar4 << 2) & 0xffc)) =
                 *(undefined4 *)(*(int *)(param_1[3] + uVar8) + uVar5);
          }
          uVar14 = uVar14 + 1;
        } while ((uVar14 & 0xffffffff) < uVar11);
      }
      fn_82681F28(param_1,uVar12);
      uVar11 = 0;
      if ((uVar12 & 0xffffffff) != 0) {
        do {
          if (*(int *)(*(int *)(((uint)(uVar11 >> 8) & 0xfffffc) + param_1[3]) +
                      ((uint)((uVar11 & 0xffffffff) << 2) & 0xffc)) != 0) {
            fn_82681F88();
          }
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffffffff) < (uVar12 & 0xffffffff));
      }
      uVar11 = 0;
      if ((uVar12 & 0xffffffff) != 0) {
        do {
          iVar13 = *(int *)(*(int *)(((uint)(uVar11 >> 8) & 0xfffffc) + param_1[3]) +
                           ((uint)((uVar11 & 0xffffffff) << 2) & 0xffc));
          if (iVar13 != 0) {
            *(undefined4 *)(iVar13 + 0xc) = 0xffffffff;
            *(uint *)(iVar13 + 8) = *(uint *)(iVar13 + 8) & 0x7fffffff;
            fn_826820F0();
          }
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffffffff) < (uVar12 & 0xffffffff));
      }
      fn_82681F28(param_1,0);
      iVar13 = 0;
      param_1[4] = 0xffffffff;
      piVar6 = (int *)param_1[5];
      while (piVar6 != (int *)0x0) {
        piVar2 = (int *)piVar6[1];
        (**(code **)(*piVar6 + 4))(piVar6);
        fn_8267BE38(piVar6);
        iVar13 = iVar13 + 1;
        piVar6 = piVar2;
      }
      uVar11 = (ulonglong)*param_1;
      uVar9 = iVar13 + uVar9;
      param_1[5] = 0;
    } while (uVar11 != 0);
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)uVar10;
      uVar8 = (uint)uVar10;
      if ((ulonglong)uVar9 <= (uVar10 & 0xffffffff)) {
        uVar8 = uVar9;
      }
      param_2[1] = uVar8;
    }
    uVar7 = 1;
  }
  else {
    if (param_2 != (uint *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    uVar7 = 0;
  }
  return uVar7;
}

