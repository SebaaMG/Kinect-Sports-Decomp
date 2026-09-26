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
extern int fn_8267C498();
extern int fn_826933E8();
extern int fn_826A8E58();
extern int fn_827741E8();
extern int fn_8278C110();
extern unsigned int iStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_826FE3C0(int param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  
  uVar6 = *(uint *)(param_1 + 0xb00) >> 0x14 & 1;
  if (((uVar6 == 0) || ((param_2 & 0xff) == 0)) && ((uVar6 != 0 || ((param_2 & 0xff) != 0)))) {
    if ((param_2 & 0xff) == 0) {
      uVar6 = *(uint *)(param_1 + 0xb00) & 0xffefffff;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0xb00) | 0x100000;
    }
    *(uint *)(param_1 + 0xb00) = uVar6;
    if ((param_2 & 0xff) == 0) {
      uVar4 = fn_826933E8();
      *(ulonglong *)(param_1 + 0xaa8) =
           (uVar4 / 1000 - *(longlong *)(param_1 + 0xab0)) + *(longlong *)(param_1 + 0xaa8);
    }
    else {
      uVar4 = fn_826933E8();
      *(ulonglong *)(param_1 + 0xab0) = uVar4 / 1000;
    }
    piVar3 = *(int **)(param_1 + 0xaf4);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[0x1c];
      (**(code **)(*piVar3 + 0xdc))(piVar3,param_2);
      piVar3 = piVar1;
    }
    if ((*(int **)(param_1 + 0x104) != (int *)0x0) && (**(int **)(param_1 + 0x104) != 0)) {
      fn_8278C110(&piStack_28,param_1 + 0x104);
      uStack_30 = 0;
      uStack_2c = 0;
      cVar5 = fn_826A8E58(&piStack_28,&uStack_30);
      if (cVar5 == '\0') {
        uStack_30 = 0;
        uStack_2c = 0;
        do {
          iVar7 = iStack_24 * 0xc + *piStack_28;
          iVar2 = *(int *)(iVar7 + 0x10);
          if (iVar2 != 0) {
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          }
          piVar3 = *(int **)(iVar7 + 0x10);
          (**(code **)(*piVar3 + 0x10))(piVar3,param_2);
          fn_8267C498(piVar3);
          fn_827741E8(&piStack_28);
          cVar5 = fn_826A8E58(&piStack_28,&uStack_30);
        } while (cVar5 == '\0');
      }
      fn_8267BE38(0);
    }
  }
  return;
}

