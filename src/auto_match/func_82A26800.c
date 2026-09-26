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
extern int fn_82A26628();


void fn_82A26800(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x38);
  puVar2 = (undefined4 *)(param_1 + 0x38);
  do {
    puVar4 = puVar3;
    if (puVar4 == (undefined4 *)0x0) {
LAB_82a268a4:
      puVar3 = (undefined4 *)fn_82A26628(param_1);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[2] = param_3;
        puVar3[1] = param_2;
        *puVar3 = *puVar2;
        *puVar2 = puVar3;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        if (*(uint *)(param_1 + 0x1c) <= param_3) {
          *(uint *)(param_1 + 0x1c) = param_3;
        }
      }
      return;
    }
    uVar1 = puVar4[1];
    if (param_2 < uVar1) {
      if (param_2 + param_3 == uVar1) {
        puVar4[1] = param_2;
        param_3 = param_3 + puVar4[2];
        puVar4[2] = param_3;
        if (param_3 <= *(uint *)(param_1 + 0x1c)) {
          return;
        }
        *(uint *)(param_1 + 0x1c) = param_3;
        return;
      }
      goto LAB_82a268a4;
    }
    if (puVar4[2] + uVar1 == param_2) {
      param_3 = puVar4[2] + param_3;
      *puVar2 = *puVar4;
      *puVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(param_1 + 0x18) + 0x4c) = puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      puVar4 = puVar2;
      param_2 = uVar1;
      if (*(uint *)(param_1 + 0x1c) < param_3) {
        *(uint *)(param_1 + 0x1c) = param_3;
      }
    }
    puVar3 = (undefined4 *)*puVar4;
    puVar2 = puVar4;
  } while( true );
}

