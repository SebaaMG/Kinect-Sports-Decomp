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
extern unsigned int fStack_8;


undefined8 fn_822B33B0(double param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  int in_r0;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float afStack_10 [2];
  float fStack_8;
  
  dVar6 = (double)*(float *)(param_2 + 0x30);
  dVar7 = (double)*(float *)(param_2 + 0x10);
  puVar1 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  dVar4 = dVar7;
  if (dVar7 <= dVar6) {
    dVar4 = dVar6;
    dVar6 = dVar7;
  }
  if ((afStack_10[0] < (float)(dVar6 - param_1)) ||
     (bVar2 = true, (float)(dVar4 + param_1) <= afStack_10[0])) {
    bVar2 = false;
  }
  dVar6 = (double)*(float *)(param_2 + 0x38);
  dVar7 = (double)*(float *)(param_2 + 0x18);
  puVar1 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  dVar4 = dVar7;
  if (dVar7 <= dVar6) {
    dVar4 = dVar6;
    dVar6 = dVar7;
  }
  if ((fStack_8 < (float)(dVar6 - param_1)) || (bVar3 = true, (float)(dVar4 + param_1) <= fStack_8))
  {
    bVar3 = false;
  }
  if ((!bVar2) || (uVar5 = 1, !bVar3)) {
    uVar5 = 0;
  }
  return uVar5;
}

