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
extern int fn_82FFF8C0();


undefined8 fn_83009780(int *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  uVar2 = 1;
  if (param_2[2] == 0) {
    (**(code **)(*param_1 + 0xa0))(param_1,*param_2 == 2);
  }
  *(undefined1 *)(param_2 + 5) = 1;
  puVar3 = (undefined4 *)param_1[0x12];
  if (puVar3 != (undefined4 *)param_1[0x13]) {
    do {
      cVar1 = fn_82FFF8C0(param_1,*puVar3,param_2[1]);
      if ((cVar1 == '\0') &&
         (uVar2 = (**(code **)(*(int *)puVar3[1] + 0x24))((int *)puVar3[1],param_2), (int)uVar2 != 1
         )) {
        return uVar2;
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != (undefined4 *)param_1[0x13]);
  }
  return uVar2;
}

