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


void fn_8269B930(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 auStack_20 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x84);
  if (puVar1 == (undefined4 *)0x0) {
    auStack_20[0] = 0x143;
    puVar1 = (undefined4 *)fn_8267BED0(param_1,0x38,auStack_20);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
      puVar1[8] = param_2[8];
      puVar1[9] = param_2[9];
      puVar1[10] = param_2[10];
      puVar1[0xb] = param_2[0xb];
      puVar1[0xc] = param_2[0xc];
      puVar1[0xd] = param_2[0xd];
    }
    *(undefined4 **)(param_1 + 0x84) = puVar1;
  }
  else {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
    puVar1[10] = param_2[10];
    puVar1[0xb] = param_2[0xb];
    puVar1[0xc] = param_2[0xc];
    puVar1[0xd] = param_2[0xd];
  }
  return;
}

