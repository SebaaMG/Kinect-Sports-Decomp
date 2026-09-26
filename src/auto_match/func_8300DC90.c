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


undefined8 fn_8300DC90(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  puVar1 = param_1;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    do {
      for (puVar3 = (uint *)puVar1[3];
          (puVar3 != (uint *)puVar1[4] && (*puVar3 != (param_3 << 0x10 | param_2)));
          puVar3 = puVar3 + 2) {
      }
      puVar4 = (undefined4 *)(-(uint)((uint *)puVar1[4] != puVar3) & (uint)(puVar3 + 1));
      if ((puVar4 != (undefined4 *)0x0) &&
         (cVar2 = (**(code **)(*(int *)*puVar4 + 0x34))(), cVar2 != '\0')) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      puVar1 = puVar1 + 3;
    } while (uVar5 < *(byte *)((int)param_1 + 0x4d));
  }
  return 0;
}

