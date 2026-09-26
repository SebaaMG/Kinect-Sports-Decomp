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
extern int fn_82693108();
extern int fn_82693208();
extern int fn_8270AA60();
extern unsigned int lbl_831F129C;


undefined4 * fn_82691128(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_2,0x1000);
  if (puVar2 != (undefined4 *)0x0) {
    iVar4 = (int)param_2;
    puVar2[2] = iVar4;
    puVar2[4] = 0;
    *(undefined2 *)(puVar2 + 3) = 8;
    *(undefined2 *)((int)puVar2 + 0xe) = 0xc;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    cVar3 = fn_82693108(lbl_831F129C,puVar2,param_2);
    if (cVar3 != '\0') {
      fn_82693208(lbl_831F129C,puVar2,param_2,puVar2);
      uVar1 = ((uint)(((ulonglong)((uint)(param_1[5] + iVar4) >> (param_1[4] & 0x3f)) + 0x1f &
                      0xffffffff) >> 3) & 0x1ffffffc) + 0x2f & 0xfffffff0;
      puVar2[6] = iVar4 - uVar1;
      puVar2[7] = uVar1 + (int)puVar2;
      puVar2[1] = param_1[3];
      *puVar2 = param_1 + 2;
      *(undefined4 **)param_1[3] = puVar2;
      param_1[3] = puVar2;
      fn_8270AA60(param_1 + 4,puVar2);
      param_1[0x6a] = param_1[0x6a] + puVar2[2];
      return puVar2;
    }
    (**(code **)(*(int *)*param_1 + 8))();
  }
  return (undefined4 *)0x0;
}

