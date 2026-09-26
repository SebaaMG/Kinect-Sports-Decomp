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
extern unsigned int fStack00000024;
extern int fn_824FE498();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


undefined8 fn_82369900(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined8 uVar5;
  float in_register_00010014;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  float fStack00000024;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    fVar1 = *(float *)(param_2 + 0xa8) * *(float *)(param_2 + 0x8bc);
    fVar2 = *(float *)(param_2 + 0xa0) * *(float *)(param_2 + 0x8bc);
    fVar4 = fVar2 - fVar1;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar4 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar4) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = fVar2 * *(float *)(param_2 + 0x280) +
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 4);
    fVar2 = in_register_00010014 - fVar1;
    fStack00000024 = in_register_00010014;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fStack00000024 = fVar1;
    }
    fn_824FE498(param_2);
    uVar5 = 1;
    puVar3 = (undefined4 *)(param_2 + 0xbd0U & 0xfffffff0);
    *puVar3 = in_register_00010020;
    puVar3[1] = in_register_00010024;
    puVar3[2] = in_register_00010028;
    puVar3[3] = in_vr2;
    puVar3 = (undefined4 *)(param_2 + 0xc30U & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  return uVar5;
}

