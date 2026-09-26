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


void fn_82815360(int param_1,int param_2,ulonglong param_3,uint *param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((param_3 & 0xffffffff) != 0) {
    puVar4 = (uint *)(param_2 + 8);
    do {
      uVar1 = puVar4[-1];
      if ((uVar1 == puVar4[-2]) && (uVar1 == param_6 + 1U)) {
        uVar3 = 0;
        uVar1 = *(uint *)(uVar1 * 0xe + *(int *)(param_1 + 0x44) + -6);
        if (*puVar4 != 0) {
          do {
            uVar2 = *param_4;
            if ((uVar2 < uVar1) && (*(uint *)(uVar2 + param_5) < uVar1)) {
              *(uint *)(uVar2 + param_5) = *(uint *)(uVar2 + param_5) + param_5;
            }
            uVar3 = uVar3 + 1;
            param_4 = param_4 + 1;
          } while (uVar3 < *puVar4);
        }
      }
      else {
        param_4 = param_4 + *puVar4;
      }
      puVar4 = puVar4 + 3;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return;
  }
  return;
}

