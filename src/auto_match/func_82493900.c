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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8242E858();
extern int fn_8243D2D8();
extern int fn_82490EA0();
extern int fn_82490F58();
extern int fn_82522588();
extern unsigned int iStack_4c;
extern unsigned int lbl_821929B0;
extern unsigned int lbl_82193CF0;
extern unsigned int lbl_82195E64;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82493900(double param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar5;
  undefined8 uVar4;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_50 [4];
  int iStack_4c;
  
  fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x40));
  dVar9 = (double)fVar1;
  *(float *)(param_2 + 0x40) = fVar1;
  dVar8 = (double)*(float *)(param_2 + 0x2c);
  dVar7 = (double)fn_82490F58(param_5,*(undefined4 *)(param_2 + 0x34),
                               *(undefined4 *)(param_2 + 0x38));
  if ((*(int *)(param_2 + 0x44) == 0) && ((float)(dVar7 / dVar8) < lbl_82195E64)) {
    if ((float)(dVar7 / dVar8) - lbl_82193CF0 < (float)(dVar9 / dVar8)) {
      fn_8243D2D8((ulonglong)*(uint *)(*(int *)(param_2 + 0x48) + 0x174) + 8,
                        0xffffffff821bec48,0,0);
      *(undefined4 *)(param_2 + 0x44) = 1;
    }
  }
  iVar2 = *(int *)(param_2 + 0x48);
  iVar3 = *(int *)(param_2 + 0x1c);
  for (uVar6 = (ulonglong)*(uint *)(iVar2 + 0x30);
      (uVar6 & 0xffffffff) != (ulonglong)*(uint *)(iVar2 + 0x34); uVar6 = uVar6 + 8) {
    piVar5 = (int *)fn_82522588(auStack_50,uVar6);
    *(int *)(*piVar5 + 0x234) = (int)param_4 - iVar3;
    if (iStack_4c != 0) {
      fn_822315A0();
    }
  }
  uVar4 = fn_82490EA0((double)lbl_821929B0,param_5,param_4);
  if ((int)uVar4 != -1) {
    fn_8242E858(*(undefined4 *)(param_2 + 0x48),uVar4);
  }
  return;
}

