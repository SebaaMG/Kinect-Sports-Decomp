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
extern int fn_827196D8();


void fn_827197F8(int *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = param_1[1];
  fn_827196D8(param_1,param_1,param_2);
  if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
    iVar4 = uVar1 * 0x10 + *param_1;
    param_2 = param_2 - uVar1;
    uVar3 = 0;
    if (param_2 != 0) {
      puVar2 = (undefined4 *)(iVar4 + 0xc);
      do {
        if (iVar4 != 0) {
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x10;
        puVar2 = puVar2 + 4;
      } while ((uVar3 & 0xffffffff) < (param_2 & 0xffffffff));
    }
  }
  return;
}

