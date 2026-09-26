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
extern int fn_822ABA88();
extern int fn_8242C410();
extern int fn_8243E700();


ulonglong fn_82450238(int param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  
  dVar8 = (double)**(float **)(param_2 + 0x1a0);
  if (((dVar8 <= (double)**(float **)(param_1 + 0x44)) ||
      (*(int *)(*(int *)(param_2 + 0x2c) * 0x18 + (int)(*(float **)(param_1 + 0x44))[0x2e]) == 0))
     || (uVar2 = fn_8243E700((ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x148) * 0x18 +
                                   (ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x138),
                                   *(int *)(param_2 + 0x2c),0), (uVar2 & 0xffffffff) == 0)) {
    uVar2 = 1;
    lVar5 = 0;
    uVar6 = (ulonglong)**(uint **)(param_1 + 0x40);
    iVar3 = fn_8242C410(uVar6);
    if (0 < iVar3) {
      uVar4 = (ulonglong)*(uint *)(param_2 + 0x2c);
      lVar7 = 0;
      do {
        piVar1 = *(int **)(**(int **)((int)uVar6 + 8) + (int)lVar7);
        iVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
        if (((int)uVar4 != *(int *)(iVar3 + 0x2c)) && (dVar8 < (double)**(float **)(iVar3 + 0x1a0)))
        {
          uVar2 = uVar2 + 1;
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 4;
        iVar3 = fn_8242C410(uVar6);
      } while ((int)lVar5 < iVar3);
    }
  }
  return uVar2;
}

