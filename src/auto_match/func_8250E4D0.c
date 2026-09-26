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
extern int fn_823116D8();
extern int fn_8250ED28();
extern int fn_8250F558();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_60;


int * fn_8250E4D0(int *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar4 = lbl_821CC160;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = iVar4;
  param_1[0xc] = iVar4;
  param_1[0xd] = param_3;
  param_1[0xe] = param_4;
  uVar1 = param_2[1];
  for (uVar6 = (ulonglong)*param_2; (uVar6 & 0xffffffff) != (ulonglong)uVar1; uVar6 = uVar6 + 8) {
    fn_8250ED28(param_1,uVar6);
  }
  piVar2 = (int *)param_1[1];
  if ((int *)*param_1 != piVar2) {
    piVar7 = (int *)*param_1 + 4;
    do {
      fn_8250F558(*piVar7,piVar7[1],piVar7[1] - *piVar7 >> 5,uStack_60);
      puVar3 = (undefined8 *)*piVar7;
      if ((piVar7[1] - (int)puVar3 & 0xffffffe0U) == 0x20) {
        uStack_50 = *puVar3;
        uStack_48 = puVar3[1];
        uStack_40 = puVar3[2];
        uStack_38 = puVar3[3];
        fn_823116D8(piVar7,&uStack_50);
      }
      piVar5 = piVar7 + 4;
      piVar7 = piVar7 + 8;
    } while (piVar5 != piVar2);
  }
  return param_1;
}

