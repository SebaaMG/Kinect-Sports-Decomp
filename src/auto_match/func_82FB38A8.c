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
extern int fn_82FA5190();
extern int fn_82FB36E8();


undefined8 fn_82FB38A8(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (param_1[4] != 0) {
    while (*param_1 != 0) {
      fn_82FB36E8(param_1,*param_1,0);
    }
    puVar3 = (undefined4 *)param_1[2];
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar3;
      if ((puVar3 < (undefined4 *)param_1[6]) ||
         (bVar2 = false, (undefined4 *)param_1[6] + param_1[3] * 3 <= puVar3)) {
        bVar2 = true;
      }
      puVar3 = puVar1;
      if (bVar2) {
        fn_82FA5190(param_1[7]);
      }
    }
    if (param_1[6] != 0) {
      uVar4 = 0;
      if (param_1[3] != 0) {
        do {
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)param_1[3]);
      }
      fn_82FA5190(param_1[7]);
    }
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return 1;
}

