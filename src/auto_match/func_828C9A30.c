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
extern int fn_828807A0();


undefined4 * fn_828C9A30(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)param_2 + 0x21) == '\0') {
    puVar1 = (undefined4 *)fn_828807A0();
    if (puVar1 + 4 != (undefined4 *)0x0) {
      puVar1[4] = param_2[4];
      *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
    }
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_2 + 8);
    if (*(char *)((int)puVar3 + 0x21) != '\0') {
      puVar3 = puVar1;
    }
    uVar2 = fn_828C9A30(param_1,*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = fn_828C9A30(param_1,param_2[2],puVar1);
    puVar1[2] = uVar2;
  }
  return puVar3;
}

