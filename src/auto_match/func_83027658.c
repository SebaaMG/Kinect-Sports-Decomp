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
#define _uStack00000030 ((*(U64*)&uStack00000030))
#define _uStack00000038 ((*(U64*)&uStack00000038))
extern int fn_830273D8();
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack00000038;


undefined8
fn_83027658(int param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             undefined4 param_6)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x44) != 0)) &&
     (param_2 < *(uint *)(param_1 + 0x48))) {
    piVar2 = (int *)(param_2 * 0x10 + *(int *)(param_1 + 0x44));
    uVar1 = piVar2[1];
    if ((0 < (int)uVar1) && (param_3 < uVar1)) {
      uStack00000030 = (undefined4)((ulonglong)param_4 >> 0x20);
      uStack00000034 = (undefined4)param_4;
      puVar3 = (undefined4 *)(param_3 * 0x10 + *piVar2);
      uStack00000038 = (undefined4)((ulonglong)param_5 >> 0x20);
      puVar3[3] = param_6;
      *puVar3 = uStack00000030;
      puVar3[1] = uStack00000034;
      puVar3[2] = uStack00000038;
      _uStack00000030 = param_4;
      _uStack00000038 = param_5;
      fn_830273D8();
      return 1;
    }
  }
  return 0x1f;
}

