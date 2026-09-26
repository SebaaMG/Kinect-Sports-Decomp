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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_8308AAA8();


void fn_8308BA48(int param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  uint *puVar7;
  int *piVar8;
  ulonglong uVar9;
  int *piVar10;
  
  iVar1 = *(int *)(param_1 + 0xa4);
  piVar4 = (int *)fn_82CE5410();
  puVar2 = (uint *)*piVar4;
  *piVar4 = ((iVar1 >> 5) * 4 + 0x9fU & 0xffffff80) + (int)puVar2;
  piVar8 = (int *)(*param_2 * 0x10 + *(int *)(param_1 + 0xa0));
  fn_8308AAA8(param_1,iVar1,
                  *(undefined2 *)((uint)*(ushort *)(piVar8 + 2) * 4 + *(int *)(param_1 + 0xac)),
                  piVar8,*param_2 & 0xffff,puVar2);
  iVar1 = *(int *)(param_1 + 0xa4);
  piVar4 = *(int **)(param_1 + 0xa0);
  puVar7 = puVar2;
  do {
    if (puVar2 + (iVar1 >> 5) + 1 <= puVar7) {
      piVar4 = (int *)fn_82CE5410();
      *piVar4 = (int)puVar2;
      return;
    }
    uVar9 = (ulonglong)*puVar7;
    piVar10 = piVar4;
    while (uVar9 != 0) {
      if ((uVar9 & 0xff) == 0) {
        piVar10 = piVar10 + 0x20;
        uVar9 = uVar9 >> 8;
      }
      else {
        if ((((uVar9 & 1) != 0) &&
            (((piVar8[1] - *piVar10 | piVar10[1] - *piVar8) & 0x80008000U) == 0)) &&
           (uVar3 = piVar10[3], (uVar3 & 1) == 0)) {
          iVar5 = fn_82CE5410();
          if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_3,8);
          }
          puVar6 = (undefined8 *)(param_3[1] * 8 + *param_3);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = CONCAT44(param_2,uVar3);
          }
          param_3[1] = param_3[1] + 1;
        }
        piVar10 = piVar10 + 4;
        uVar9 = uVar9 >> 1;
      }
    }
    puVar7 = puVar7 + 1;
    piVar4 = piVar4 + 0x80;
  } while( true );
}

