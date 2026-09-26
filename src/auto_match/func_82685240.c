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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82680AC8();
extern unsigned int lbl_831E7E64;


int fn_82685240(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar3;
  char cVar8;
  int iVar4;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  piVar3 = (int *)(**(code **)(*param_1 + 4))();
  if (piVar3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    cVar8 = (**(code **)(*piVar3 + 0x28))(piVar3);
    if ((cVar8 == '\0') && (iVar4 = (**(code **)(*piVar3 + 8))(piVar3), iVar4 != 0)) {
      uVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
      uVar2 = (**(code **)(*piVar3 + 0x18))(piVar3);
      iVar5 = fn_82680AC8(1,uVar2,uVar1,param_3);
      if (iVar5 != 0) {
        uVar12 = (ulonglong)*(uint *)(iVar5 + 0xc);
        iVar4 = fn_8267B890(lbl_831E7E64,uVar12 * 3,0);
        uVar11 = 0;
        iVar6 = (**(code **)(*piVar3 + 0x14))(piVar3);
        if (iVar6 != 0) {
          do {
            iVar6 = (**(code **)(*piVar3 + 0x1c))(piVar3,iVar4);
            if (iVar6 == 0) {
              fn_8267C498(iVar5);
              iVar5 = 0;
              break;
            }
            if (uVar12 != 0) {
              puVar10 = (undefined1 *)
                        (*(int *)(iVar5 + 0x14) * uVar11 + *(int *)(iVar5 + 0x18) + -1);
              puVar9 = (undefined1 *)(iVar4 + -1);
              uVar13 = uVar12;
              do {
                puVar10[1] = puVar9[1];
                puVar10[2] = puVar9[2];
                puVar9 = puVar9 + 3;
                puVar10[3] = *puVar9;
                puVar10 = puVar10 + 4;
                *puVar10 = 0xff;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar11 = uVar11 + 1;
            uVar7 = (**(code **)(*piVar3 + 0x14))(piVar3);
          } while (uVar11 < uVar7);
        }
        fn_8267BE38(iVar4);
      }
      (**(code **)(*piVar3 + 0x10))(piVar3);
    }
    (**(code **)*piVar3)(piVar3,1);
  }
  return iVar5;
}

