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
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B4524;
extern unsigned int lbl_821CC160;


undefined4 *
fn_82376B08(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)fn_8265C9E0(0x34);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 1;
    *puVar6 = &lbl_821AD588;
    puVar6[2] = 1;
    if (puVar6 + 3 != (undefined4 *)0x0) {
      fVar1 = *param_7;
      fVar2 = *param_6;
      uVar3 = *param_5;
      uVar4 = *param_4;
      puVar6[4] = *param_3;
      fVar5 = lbl_821CC160;
      puVar6[5] = param_2;
      puVar6[3] = &lbl_821B4524;
      puVar6[8] = 0;
      puVar6[9] = 1;
      if (fVar1 <= fVar2) {
        fVar2 = fVar5;
      }
      puVar6[10] = fVar2;
      puVar6[6] = uVar4;
      puVar6[0xb] = fVar5;
      puVar6[7] = uVar3;
      puVar6[0xc] = fVar1;
    }
  }
  param_1[1] = puVar6;
  *param_1 = puVar6 + 3;
  return param_1;
}

