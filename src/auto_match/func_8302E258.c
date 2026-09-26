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
extern int fn_8302DAD8();


undefined8 fn_8302E258(int *param_1,int *param_2)

{
  int *piVar2;
  undefined8 uVar1;
  uint uVar3;
  uint *puVar4;
  undefined2 auStack_30 [2];
  undefined1 auStack_2c [44];
  
  piVar2 = (int *)fn_8302DAD8(param_1,param_2[2],auStack_30,auStack_2c);
  if (piVar2 == (int *)0x0) {
    if (*param_2 == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x154))(param_1,param_2);
      if ((int)uVar1 == 3) {
        uVar1 = 1;
      }
    }
  }
  else {
    uVar3 = param_2[10];
    puVar4 = (uint *)(param_2 + 10);
    if (uVar3 < 0x20) {
      param_2[0x1b] = param_2[0x1b] & ~(1 << (uVar3 & 0x3f));
      *(undefined2 *)((*puVar4 + 2) * 2 + (int)puVar4) = auStack_30[0];
      uVar3 = *puVar4;
    }
    *puVar4 = uVar3 + 1;
    uVar1 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return uVar1;
}

