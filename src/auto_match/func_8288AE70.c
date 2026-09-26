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
extern int fn_8288A9B8();
extern int fn_8288AB68();
extern unsigned int uStack_1c;


uint * fn_8288AE70(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puStack_20;
  undefined1 uStack_1c;
  
  puVar4 = *(uint **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar1 = (uint *)puVar4[1];
    do {
      if (puVar1[3] < *param_2) {
        puVar2 = (uint *)puVar1[2];
      }
      else {
        puVar2 = (uint *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar4 == *(uint **)(param_1 + 4)) || (*param_2 < puVar4[3])) {
    puStack_20 = (uint *)*param_2;
    uStack_1c = 0;
    uVar3 = fn_8288AB68(param_1,&puStack_20);
    fn_8288A9B8(&puStack_20,param_1,puVar4,uVar3);
    puVar4 = puStack_20;
  }
  return puVar4 + 4;
}

