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
extern int fn_82FFF908();
extern int fn_82FFF990();


undefined8 fn_8302EE08(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)*param_2;
  uVar1 = 1;
  if (puVar2 != (undefined4 *)param_2[1]) {
    do {
      uVar1 = fn_82FFF908(*puVar2);
      if ((int)uVar1 != 1) {
        for (puVar3 = (undefined4 *)*param_2; puVar3 != puVar2; puVar3 = puVar3 + 1) {
          fn_82FFF990(*puVar3);
        }
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)param_2[1]);
  }
  return uVar1;
}

