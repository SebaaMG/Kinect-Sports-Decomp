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
extern unsigned int *auStack_50;
extern int fn_8267BED0();
extern int fn_826EBEB0();
extern int fn_826EC4B0();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_826EDE20(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    auStack_50[0] = 2;
    puVar1 = (undefined4 *)fn_8267BED0(param_1,0xc,auStack_50);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    *(undefined4 **)(param_1 + 0x68) = puVar1;
  }
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 4);
  fn_826EC4B0(*(int *)(param_1 + 0x68),param_2);
  fn_826EBEB0(param_1 + 0x50,&uStack_40);
  *(bool *)(param_1 + 0x15) = *(char *)(param_1 + 0x14) == '\0';
  return;
}

