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
extern int fn_82A40BA8();
extern int fn_82A43340();
extern int fn_82A44370();


void fn_82A46670(int param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x25c) == 0) {
    uVar1 = fn_82A40BA8(param_1 + 0x270);
    fn_82A44370(param_1 + 0x298,uVar1);
    *(undefined4 *)(param_1 + 0x260) = 0;
  }
  else {
    if (*(undefined4 **)(param_1 + 0x288) == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x288);
    }
    if (puVar2[5] != 0xff) {
      puVar2[5] = puVar2[5] + -1;
    }
    fn_82A43340(param_1 + 0x8c,puVar2[6],*puVar2);
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  return;
}

