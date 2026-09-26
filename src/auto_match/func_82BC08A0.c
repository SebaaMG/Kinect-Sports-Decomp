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
extern int fn_82B7BD28();


void fn_82BC08A0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  if ((piVar2[1] != 0) && (param_2 == ((undefined4 *)piVar2[1])[1])) {
    *(undefined4 *)piVar2[1] = param_3;
    return;
  }
  uVar1 = *(undefined4 *)(*piVar2 + 0x5ac);
  puVar3 = (undefined4 *)fn_82B7BD28(uVar1,0x10);
  puVar4 = puVar3 + 1;
  *puVar3 = uVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = param_3;
    puVar3[2] = param_2;
    puVar3[3] = 0;
  }
  puVar4[2] = piVar2[1];
  piVar2[1] = (int)puVar4;
  return;
}

