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
extern unsigned int *auStack_20;
extern int fn_8267BED0();


undefined4 * fn_827B6268(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 auStack_20 [4];
  
  puVar2 = (undefined4 *)param_1[3];
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = param_1[2];
    if (uVar1 < 0x7f) {
      iVar3 = uVar1 + 1;
      puVar2 = (undefined4 *)(uVar1 * 0x28 + param_1[1]);
    }
    else {
      auStack_20[0] = 0xc3;
      puVar2 = (undefined4 *)fn_8267BED0(param_1[4],0x13dc,auStack_20);
      puVar2[0x4f6] = 0;
      if (param_1[1] == 0) {
        *param_1 = puVar2;
      }
      else {
        *(undefined4 **)(param_1[1] + 0x13d8) = puVar2;
      }
      iVar3 = 1;
      param_1[1] = puVar2;
    }
    param_1[2] = iVar3;
  }
  else {
    param_1[3] = *puVar2;
  }
  return puVar2;
}

