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
extern unsigned int lbl_8214C000;
extern unsigned int lbl_8214C010;


undefined8 fn_82E497F8(int param_1,byte *param_2,undefined8 param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  if (param_4 == (undefined4 *)0x0) {
    return 0xffffffff80070057;
  }
  pbVar4 = &lbl_8214C000;
  *param_4 = 0;
  do {
    bVar1 = *pbVar4;
    bVar2 = *param_2;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    param_2 = param_2 + 1;
  } while (pbVar4 != (byte *)&lbl_8214C010);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x82e49864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)**(undefined4 **)(param_1 + 0xb8))
                      (*(undefined4 **)(param_1 + 0xb8),param_3,param_4);
    return uVar3;
  }
  return 0xffffffffc00d36ba;
}

