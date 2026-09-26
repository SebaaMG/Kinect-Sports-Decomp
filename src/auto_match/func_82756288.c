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
extern int fn_8272DED0();
extern unsigned int lbl_821AAD20;


void fn_82756288(int *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  uVar1 = param_1[1];
  fn_8272DED0(param_1,param_1,param_2);
  uVar2 = lbl_821AAD20;
  if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
    param_2 = param_2 - uVar1;
    puVar4 = (undefined4 *)(uVar1 * 8 + *param_1);
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        if (puVar4 != (undefined4 *)0x0) {
          puVar4[1] = uVar2;
          *puVar4 = 0xffffffff;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 2;
      } while ((uVar3 & 0xffffffff) < (param_2 & 0xffffffff));
    }
  }
  return;
}

