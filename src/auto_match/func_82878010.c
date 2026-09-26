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
extern unsigned int *auStack_60;
extern int fn_82811080();
extern int fn_82811400();
extern int fn_828647C0();
extern int fn_82877938();
extern int fn_82878A20();


undefined8 fn_82878010(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar4;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulonglong uVar5;
  undefined1 auStack_60 [96];
  
  uVar1 = *(uint *)(param_2 + 8);
  for (uVar5 = (ulonglong)*(uint *)(param_2 + 4); (uVar5 & 0xffffffff) != (ulonglong)uVar1;
      uVar5 = uVar5 + 0x30) {
    cVar4 = fn_828647C0(uVar5 + 4,param_3);
    if (cVar4 != '\0') break;
  }
  if ((uVar5 & 0xffffffff) == (ulonglong)*(uint *)(param_2 + 8)) {
    uVar2 = fn_82811400(auStack_60,4);
    uVar5 = fn_82811080(0xffffffff832116f8,0x30,uVar2);
    if ((uVar5 & 0xffffffff) == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)fn_82877938(param_1,uVar5,param_3,param_4);
    }
    fn_82878A20(param_2 + 4,puVar3);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    uVar2 = 0x20330000;
  }
  else {
    uVar2 = 0xffffffffa0320000;
  }
  return uVar2;
}

