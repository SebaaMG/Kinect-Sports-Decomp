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


undefined4 * fn_8250B068(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  puVar2 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  param_1[8] = param_2[8];
  puVar2 = (undefined4 *)((uint)(param_2 + 0xc) & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  iVar1 = param_2[0x14];
  uVar5 = param_2[0x13];
  if ((iVar1 != 0) && (cVar4 = fn_8223AAC0(iVar1), cVar4 != '\0')) {
    if (param_1[0x14] != 0) {
      fn_822315A0();
    }
    param_1[0x14] = iVar1;
    param_1[0x13] = uVar5;
  }
  return param_1;
}

