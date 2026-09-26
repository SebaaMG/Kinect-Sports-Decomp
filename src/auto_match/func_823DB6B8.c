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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82672C20();


void fn_823DB6B8(double param_1,double param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  
  if ((((*(int *)(param_3 + 0x80) != 0) && (param_5 == 0)) &&
      (iVar1 = *(int *)(param_3 + 0xa4), *(int *)(iVar1 + 0x34) != 0)) &&
     (*(int *)(iVar1 + 0x38) == 0)) {
    *(undefined4 *)(iVar1 + 0x38) = 1;
    fn_82672C20(*(undefined4 *)(iVar1 + 0x3c),0xffffffff821a8498,0,0);
  }
  *(float *)(param_3 + 0x84) = (float)param_1;
  *(float *)(param_3 + 0x88) = (float)param_2;
  *(int *)(param_3 + 0x80) = param_5;
  puVar3 = (undefined4 *)(param_3 + 0x60U & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  puVar3 = (undefined4 *)(param_3 + 0x70U & 0xfffffff0);
  *puVar3 = in_register_00010020;
  puVar3[1] = in_register_00010024;
  puVar3[2] = in_register_00010028;
  puVar3[3] = in_vr2;
  iVar1 = param_4[1];
  uVar2 = *param_4;
  uVar5 = 0;
  iVar6 = 0;
  if ((iVar1 != 0) && (cVar4 = fn_8223AAC0(iVar1), cVar4 != '\0')) {
    uVar5 = uVar2;
    iVar6 = iVar1;
  }
  iVar1 = *(int *)(param_3 + 0xa0);
  *(int *)(param_3 + 0xa0) = iVar6;
  *(undefined4 *)(param_3 + 0x9c) = uVar5;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

