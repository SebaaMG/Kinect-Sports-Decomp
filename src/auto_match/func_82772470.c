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
extern int fn_82772400();


void fn_82772470(int *param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  
  if ((param_3 & 0xffffffff) != 0) {
    uVar1 = param_1[1];
    fn_82772400(param_1,param_1,uVar1 + param_3);
    puVar3 = (undefined4 *)(uVar1 * 0x10 + *param_1);
    uVar2 = param_3 & 0xffffffff;
    while (uVar2 != 0) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        puVar3[2] = param_2[2];
        puVar3[3] = param_2[3];
      }
      param_2 = param_2 + 4;
      puVar3 = puVar3 + 4;
      param_3 = param_3 - 1;
      uVar2 = param_3;
    }
  }
  return;
}

