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
extern unsigned int *auStack_20;
extern unsigned int fStack_18;
extern int fn_822CEEC8();


undefined8 fn_822CEF30(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined8 uVar3;
  double extraout_f1;
  double extraout_f1_00;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_20 [8];
  float fStack_18;
  
  puVar1 = (undefined4 *)((int)param_1 + 0x80U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  iVar4 = fn_822CEEC8();
  dVar5 = (double)fStack_18;
  if (((iVar4 != 0) && (-extraout_f1 < dVar5)) ||
     ((iVar4 = fn_822CEEC8(param_1), iVar4 == 0 && (dVar5 < extraout_f1_00)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

