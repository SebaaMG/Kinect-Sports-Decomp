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
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_824AA3D8(undefined8 param_1,int param_2,int *param_3,int param_4,code *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined8 in_r0;
  int iVar6;
  ulonglong uVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  (**(code **)*param_3)(param_3,&uStack_50,&uStack_4c);
  iVar6 = (int)in_r0;
  fVar2 = (float)((uStack_4c - param_4) + 1);
  iVar1 = *(int *)(param_2 + 0x3c);
  fVar3 = (float)uStack_50 - fVar2;
  fVar4 = (float)uStack_50;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar4 = fVar2;
  }
  uStack_48 = (ulonglong)fVar4;
  uVar7 = uStack_48 & 0xffffffff;
  uStack_50 = (((U64)(uStack_48) >> 32) & 0xFFFFFFFF);
  if ((((U64)(uStack_48) >> 32) & 0xFFFFFFFF) <= uStack_4c) {
    do {
      (**(code **)(*param_3 + 4))(param_3,uVar7,&uStack_48);
      puVar5 = (undefined4 *)
               (*(int *)((((U64)(uStack_48) >> 0) & 0xFFFFFFFF) + 0x40) + ((-(uint)(iVar1 != 0) & 0xfffffffc) + 10) * 0x40
                + 0x10 & 0xfffffff0);
      in_register_000104d0 = *puVar5;
      in_register_000104d4 = puVar5[1];
      in_register_000104d8 = puVar5[2];
      in_vr77 = puVar5[3];
      if ((uVar7 & 0xffffffff) != (ulonglong)uStack_50) {
        (*param_5)();
      }
      iVar6 = (int)in_r0;
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) <= (ulonglong)uStack_4c);
  }
  puVar5 = (undefined4 *)(iVar6 + (int)param_1 & 0xfffffff0);
  *puVar5 = in_register_000104d0;
  puVar5[1] = in_register_000104d4;
  puVar5[2] = in_register_000104d8;
  puVar5[3] = in_vr77;
  return param_1;
}

