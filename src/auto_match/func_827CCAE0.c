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
extern unsigned int lbl_82017E28;


void fn_827CCAE0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar1 = param_1[0x19];
  uVar13 = (ulonglong)uVar1;
  iVar2 = param_1[0x15];
  iVar11 = 1;
  iVar7 = 1;
  do {
    iVar10 = iVar7;
    iVar11 = iVar11 + 1;
    iVar7 = iVar10 + 1;
    iVar9 = iVar7;
    if (1 < (int)uVar1) {
      lVar8 = uVar13 - 1;
      do {
        iVar9 = iVar9 * iVar11;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  } while (iVar9 <= iVar2);
  if (iVar10 < 2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(int *)(*param_1 + 0x18) = iVar9;
    (**(code **)*param_1)(param_1);
  }
  uVar5 = 1;
  if (0 < (int)uVar1) {
    piVar6 = (int *)(param_2 + -4);
    uVar14 = uVar13;
    if (uVar1 != 0) {
      do {
        piVar6 = piVar6 + 1;
        *piVar6 = iVar10;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    do {
      uVar13 = uVar13 - 1;
      uVar5 = uVar5 * iVar10;
    } while (uVar13 != 0);
  }
  do {
    bVar4 = false;
    iVar7 = 0;
    piVar6 = &lbl_82017E28;
    if (0 < (int)uVar1) {
      do {
        iVar11 = iVar7;
        if (param_1[0xb] == 2) {
          iVar11 = *piVar6;
        }
        uVar3 = *(uint *)(iVar11 * 4 + param_2);
        trapWord(6,(ulonglong)uVar3,0);
        uVar12 = ((int)uVar5 / (int)uVar3) * (uVar3 + 1);
        trapWord(5,(ulonglong)uVar3 &
                   ~((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)(uVar5 >> 0x1f)) - 1),0xffff
                );
        if (iVar2 < (int)uVar12) break;
        iVar7 = iVar7 + 1;
        *(uint *)(iVar11 * 4 + param_2) = uVar3 + 1;
        bVar4 = true;
        uVar5 = uVar12;
        piVar6 = piVar6 + 1;
      } while (iVar7 < (int)uVar1);
    }
    if (!bVar4) {
      return;
    }
  } while( true );
}

