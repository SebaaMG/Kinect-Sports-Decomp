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


void fn_828CCDD8(int *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_2 + 4);
  puVar3 = puVar4;
  if (*(char *)((int)puVar4[1] + 0x19) == '\0') {
    puVar2 = (undefined4 *)puVar4[1];
    do {
      if ((uint)puVar2[3] < *param_3) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x19) != '\0') && (*param_3 < (uint)puVar2[3])) {
          puVar3 = puVar2;
        }
        puVar1 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x19) == '\0') {
    puVar2 = (undefined4 *)*puVar3;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(param_2 + 4) + 4);
  }
  if (*(char *)((int)puVar2 + 0x19) == '\0') {
    do {
      if (*param_3 < (uint)puVar2[3]) {
        puVar1 = (undefined4 *)*puVar2;
        puVar3 = puVar2;
      }
      else {
        puVar1 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return;
}

