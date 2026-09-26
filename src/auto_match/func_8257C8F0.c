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
extern int fn_82558B08();
extern int fn_825597C0();


void fn_8257C8F0(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x310);
  puVar1 = *(undefined4 **)(param_1 + 0x314);
  iVar2 = fn_825597C0();
  if (puVar3 < puVar1) {
    if (iVar2 == 0) {
      do {
        (**(code **)(*(int *)*puVar3 + 0xc))((int *)*puVar3,param_2);
        puVar3 = puVar3 + 2;
      } while (puVar3 < puVar1);
    }
    else {
      do {
        fn_82558B08();
        (**(code **)(*(int *)*puVar3 + 0xc))((int *)*puVar3,param_2);
        puVar3 = puVar3 + 2;
      } while (puVar3 < puVar1);
    }
  }
  return;
}

