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
extern int fn_827B6080();


void fn_827B8810(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = *param_1 >> 6;
  if (param_1[1] <= uVar4) {
    fn_827B6080(param_1,uVar4);
  }
  uVar1 = param_2[1];
  puVar5 = (undefined4 *)(*(int *)(uVar4 * 4 + param_1[3]) + (*param_1 & 0x3f) * 0x1c);
  *puVar5 = *param_2;
  puVar5[1] = uVar1;
  uVar1 = param_2[5];
  uVar2 = param_2[4];
  uVar3 = param_2[3];
  puVar5[2] = param_2[2];
  puVar5[3] = uVar3;
  puVar5[4] = uVar2;
  puVar5[5] = uVar1;
  puVar5[6] = param_2[6];
  *param_1 = *param_1 + 1;
  return;
}

