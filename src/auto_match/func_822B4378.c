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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_822733C8();
extern int fn_822B4300();
extern int fn_82468820();
extern int fn_8265CA20();
extern unsigned int stack0x00000024;


undefined4 * fn_822B4378(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piStack00000024;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [44];
  
  piVar1 = *(int **)(param_2 + 4);
  piStack00000024 = param_3;
  if ((param_3 == (int *)*piVar1) && (param_4 == piVar1)) {
    puVar3 = (undefined4 *)piVar1[1];
    while (*(char *)((int)puVar3 + 0x11) == '\0') {
      fn_822733C8(param_2,puVar3[2]);
      puVar2 = (undefined4 *)*puVar3;
      fn_8265CA20(puVar3);
      puVar3 = puVar2;
    }
    *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4);
    *(undefined4 *)*(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 4);
    *(int *)(*(int *)(param_2 + 4) + 8) = *(int *)(param_2 + 4);
    *(undefined4 *)(param_2 + 8) = 0;
    *param_1 = **(undefined4 **)(param_2 + 4);
  }
  else {
    while (piStack00000024 != param_4) {
      puVar3 = (undefined4 *)fn_822B4300(auStack_30,&stack0x00000024);
      fn_82468820(auStack_2c,param_2,*puVar3);
    }
    *param_1 = piStack00000024;
  }
  return param_1;
}

