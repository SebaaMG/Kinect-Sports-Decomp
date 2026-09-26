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
extern int fn_82822AA8();
extern unsigned int lbl_8320A778;


undefined8 fn_82822F60(undefined4 *param_1,undefined4 *param_2,code *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  puVar2 = lbl_8320A778;
  puVar4 = (undefined4 *)*param_1;
  while (puVar1 = puVar4, puVar1 != lbl_8320A778) {
    param_1 = puVar1;
    puVar4 = (undefined4 *)*puVar1;
  }
  param_2[1] = lbl_8320A778;
  param_2[2] = puVar2;
  param_2[3] = 0;
  puVar2 = param_1;
  do {
    while( true ) {
      puVar4 = puVar2;
      uVar3 = (*param_3)(puVar4,param_2,param_4);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      if ((int)uVar3 < 0) break;
      puVar2 = (undefined4 *)puVar4[2];
      if ((undefined4 *)puVar4[2] == lbl_8320A778) {
        puVar4[2] = param_2;
LAB_8282300c:
        *param_2 = puVar4;
        if (param_1[3] != 2) {
          fn_82822AA8(param_2);
        }
        return 1;
      }
    }
    puVar2 = (undefined4 *)puVar4[1];
  } while ((undefined4 *)puVar4[1] != lbl_8320A778);
  puVar4[1] = param_2;
  goto LAB_8282300c;
}

