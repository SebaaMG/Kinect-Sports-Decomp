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
extern unsigned int *auStack_50;
extern int fn_8265C940();
extern int fn_8265C990();


undefined4 * fn_82E91718(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 auStack_50 [20];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = auStack_50;
  param_1[3] = 0;
  *param_2 = 0;
  iVar3 = 0;
  param_1[4] = 0;
  param_1[5] = param_3;
  puVar2 = param_1 + 2;
  if (0 < param_3) {
    do {
      puVar1 = (undefined4 *)fn_8265C940(8,0x248c8000);
      if (puVar1 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)param_1[2];
        while (puVar2 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)*puVar2;
          fn_8265C990(puVar2,0x248c8000);
          puVar2 = puVar1;
        }
        puVar2 = (undefined4 *)*param_1;
        while (puVar2 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)*puVar2;
          fn_8265C990(puVar2,0x248c8000);
          puVar2 = puVar1;
        }
        *param_2 = 0xffffff9c;
        return param_1;
      }
      iVar3 = iVar3 + 1;
      puVar1[1] = 0;
      *puVar2 = puVar1;
      puVar2 = puVar1;
    } while (iVar3 < param_3);
  }
  param_1[3] = puVar1;
  *puVar1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}

