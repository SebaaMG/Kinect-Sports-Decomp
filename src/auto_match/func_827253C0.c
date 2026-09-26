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
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern int fn_8267C4F0();
extern unsigned int lbl_82005718;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_827253C0(int param_1,undefined8 param_2,undefined4 *param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  float *pfVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  iVar2 = (**(code **)(*(int *)(param_1 + -0xd8) + 0x40))(param_1 + -0xd8);
  piVar3 = (int *)(**(code **)(*(int *)(iVar2 + 8) + 0xc))((int *)(iVar2 + 8),3);
  fVar1 = lbl_82005718;
  if (piVar3 != (int *)0x0) {
    uStack_40 = param_3[4];
    uStack_44 = param_3[3];
    uStack_50 = *param_3;
    uStack_4c = param_3[1];
    uStack_2c = *(undefined1 *)(param_3 + 9);
    uStack_48 = param_3[2];
    uStack_28 = param_3[10];
    fStack_38 = (float)param_3[6] * lbl_82005718;
    uStack_24 = *(undefined1 *)(param_3 + 0xb);
    fStack_30 = (float)param_3[8] * lbl_82005718;
    fStack_34 = (float)param_3[7] * lbl_82005718;
    fStack_3c = (float)param_3[5] * lbl_82005718;
    uVar6 = 0;
    if (uStack_40 != 0) {
      iVar2 = 0;
      do {
        uVar6 = uVar6 + 1;
        pfVar5 = (float *)(param_3[2] + iVar2);
        iVar2 = iVar2 + 4;
        *pfVar5 = *pfVar5 * fVar1;
      } while (uVar6 < uStack_40);
    }
    cVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,&uStack_50);
    if (cVar4 != '\0') {
      param_3[10] = uStack_28;
      *(undefined1 *)(param_3 + 0xb) = uStack_24;
      fn_8267C4F0(piVar3);
      return 1;
    }
    fn_8267C4F0(piVar3);
  }
  return 0;
}

