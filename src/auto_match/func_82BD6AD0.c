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
extern int fn_82BD6300();


longlong fn_82BD6AD0(int param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = 0;
  lVar2 = -0x7ff8ffa9;
  if (param_3 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x24);
    do {
      piVar1 = (int *)fn_82BD6300(param_1,*param_2);
      if (piVar1 == (int *)0x0) {
        return lVar2;
      }
      lVar2 = (**(code **)(*piVar1 + 8))();
      *puVar4 = 1;
      if (lVar2 < 0) {
        *(undefined4 *)((uVar3 + 9) * 4 + param_1) = 0;
        return lVar2;
      }
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 < param_3);
  }
  return lVar2;
}

