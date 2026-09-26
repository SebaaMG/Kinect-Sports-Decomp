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
extern int fn_829C2180();


undefined4 * fn_829C2248(int param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x40);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),8,0x5a0);
    puVar1[9] = iVar2;
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(param_1 + 0x20))(uVar3,1,param_3);
      puVar1[10] = iVar2;
      if (iVar2 != 0) {
        puVar1[0xe] = param_2;
        puVar1[0xb] = iVar2 + (int)param_3;
        *puVar1 = 0;
        fn_829C2180(puVar1,param_1,0);
        return puVar1;
      }
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),puVar1[9]);
      uVar3 = *(undefined4 *)(param_1 + 0x28);
    }
    (**(code **)(param_1 + 0x24))(uVar3,puVar1);
  }
  return (undefined4 *)0x0;
}

