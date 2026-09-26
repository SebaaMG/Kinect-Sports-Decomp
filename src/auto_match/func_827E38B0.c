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
extern int fn_82F68B78();


void fn_827E38B0(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  piVar5 = (int *)fn_82F68B78(param_1 + 4);
  puVar1 = (undefined4 *)*piVar5;
  iVar2 = *param_2;
  puVar6 = (undefined4 *)*puVar1;
  while (puVar6 != puVar1) {
    if (puVar6[2] == iVar2) {
      puVar3 = (undefined4 *)puVar6[1];
      puVar4 = (undefined4 *)*puVar6;
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      (**(code **)(*(int *)piVar5[2] + 0x18))((int *)piVar5[2],puVar6,piVar5 + 3);
      piVar5[1] = piVar5[1] + -1;
      puVar6 = puVar4;
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  return;
}

