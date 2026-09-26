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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_30;
extern int fn_82CEBE20();
extern int fn_82DE52A0();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


undefined8
fn_82DE6650(double param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
             int param_6)

{
  undefined4 *puVar1;
  undefined8 in_r0;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  undefined1 auStack_30 [32];
  
  uVar2 = ZEXT48(&stack0x00000000);
  if ((param_1 <= (double)lbl_821AAD20) || (param_4 < 1)) {
    uVar3 = 1;
  }
  else {
    fn_82DE52A0(uVar2 - 0x48,param_3,param_6);
    *(float *)(param_6 + 4) = (float)param_1;
    loadVectorLeftIndexed128(in_r0,uVar2 - 0x50);
    puVar1 = (undefined4 *)((uint)(auStack_30 + (int)in_r0) & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    fn_82CEBE20(param_6 + 0x20,uVar2 - 0x30);
    uVar3 = 0;
  }
  return uVar3;
}

