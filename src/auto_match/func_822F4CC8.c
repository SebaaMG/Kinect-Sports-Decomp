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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_822F9B78();
extern int fn_824CCFC8();
extern unsigned int iStack_2c;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CCE10;


double fn_822F4CC8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)fn_822F9B78(auStack_30,*(undefined4 *)(param_1 + 0x18));
    dVar7 = (double)(**(code **)(*(int *)*puVar3 + 0xc))();
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  else {
    if (param_2 == 0) {
      piVar1 = *(int **)(iVar2 + 0x104);
    }
    else {
      piVar1 = *(int **)(iVar2 + 0x100);
    }
    dVar5 = (double)lbl_821CC160;
    dVar7 = (double)lbl_821CA460;
    dVar6 = dVar5;
    if ((piVar1 != (int *)0x0) && (iVar2 = fn_824CCFC8(), dVar6 = dVar5, iVar2 != 0)) {
      dVar5 = (double)(**(code **)(*piVar1 + 0x14))(piVar1);
      dVar5 = (double)(float)(dVar5 * (double)lbl_821916FC - dVar7);
    }
    dVar4 = (double)(float)((double)(float)(dVar5 * (double)lbl_831CCE10) - (double)lbl_82192734);
    dVar5 = (double)(float)(dVar5 * (double)lbl_831CCE10);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar4 < dVar6) << 2) | (uint)(NAN(dVar4) || NAN(dVar6)) << 2)) <
        0.0) {
      dVar5 = (double)lbl_82192734;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar5 - dVar7) < dVar6) << 2) |
                  (uint)(NAN((double)(float)(dVar5 - dVar7)) || NAN(dVar6)) << 2)) < 0.0) {
      dVar7 = dVar5;
    }
  }
  return dVar7;
}

