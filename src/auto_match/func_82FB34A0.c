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
extern unsigned int *auStack_28;
extern int fn_82FB3830();
extern int fn_82FF82A8();


longlong fn_82FB34A0(int param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puStack_30;
  uint *puStack_2c;
  undefined1 auStack_28 [16];
  
  puStack_30 = *(uint **)(param_1 + 4);
  puVar3 = (undefined4 *)(param_1 + 4);
  puStack_2c = (uint *)0x0;
  if (puStack_30 != (uint *)0x0) {
    puVar4 = (uint *)0x0;
    do {
      puStack_2c = puStack_30;
      if (*param_2 < (int)puStack_2c[1]) {
        puStack_30 = puStack_2c;
        puStack_2c = puVar4;
        piVar2 = (int *)fn_82FB3830(auStack_28,puVar3,&puStack_30,param_2);
        if (*piVar2 == 0) {
          return 0;
        }
        if ((puVar4 == (uint *)0x0) && (puVar4 = (uint *)*puVar3, puVar4 == (uint *)0x0)) {
          return 4;
        }
        return (ulonglong)*puVar4 + 4;
      }
      puVar4 = puStack_2c;
      puStack_30 = (uint *)*puStack_2c;
    } while ((uint *)*puStack_2c != (uint *)0x0);
    puStack_30 = (uint *)0x0;
  }
  lVar1 = fn_82FF82A8(puVar3);
  return lVar1;
}

