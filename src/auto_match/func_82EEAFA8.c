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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E58B58();


undefined8 fn_82EEAFA8(int param_1,uint param_2,undefined1 param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  puVar2 = (uint *)fn_82E50BE8(8,0,0,0,0);
  if (puVar2 == (uint *)0x0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined2 *)((int)puVar2 + 6) = 1;
    *puVar2 = param_2;
    if ((((*(int **)(param_1 + 0xe4) != (int *)0x0) &&
         (puVar1 = (uint *)**(int **)(param_1 + 0xe4), puVar1 != (uint *)0x0)) &&
        (*puVar1 <= param_2)) && (param_2 = param_2 - *puVar1, param_2 < 0x10000)) {
      *(short *)((int)puVar1 + 6) = (short)param_2;
    }
    iVar3 = fn_82E58B58(param_1,puVar2);
    if (iVar3 == 0) {
      uVar4 = 0xffffffff8007000e;
    }
    else {
      puVar2 = (uint *)0x0;
    }
    if (puVar2 != (uint *)0x0) {
      fn_82E4FE40(puVar2);
    }
  }
  return uVar4;
}

