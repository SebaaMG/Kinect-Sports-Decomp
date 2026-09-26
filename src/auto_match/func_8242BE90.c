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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82522588();
extern unsigned int iStack_2c;


void fn_8242BE90(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  for (uVar2 = (ulonglong)*(uint *)(param_2 + 0x30);
      (uVar2 & 0xffffffff) != (ulonglong)*(uint *)(param_2 + 0x34); uVar2 = uVar2 + 8) {
    puVar1 = (undefined4 *)fn_82522588(auStack_30,uVar2);
    (**(code **)(*(int *)*puVar1 + 4))(param_1);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  return;
}

