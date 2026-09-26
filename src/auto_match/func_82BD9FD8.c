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
extern int fn_82BD52C0();
extern int fn_82BD7B10();
extern unsigned int uStack_30;


undefined8 fn_82BD9FD8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    puVar3 = (undefined4 *)((int)param_1 + 0x14);
    do {
      fn_82BD52C0(*(undefined4 *)(param_1 + 1),*param_1,*(undefined4 *)(puVar3[1] + 0x18),
                   auStack_2c,&uStack_30);
      puVar3 = puVar3 + 1;
      fn_82BD7B10(*puVar3,auStack_2c[0],uStack_30);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 4));
  }
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0x14) != 0) {
    puVar2 = param_1 + 1;
    do {
      puVar2 = (undefined8 *)((int)puVar2 + 4);
      (**(code **)(**(int **)puVar2 + 0x10))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)param_1 + 0x14));
  }
  return 0;
}

