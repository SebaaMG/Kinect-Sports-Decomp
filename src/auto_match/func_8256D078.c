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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82517978();
extern int fn_8256C5D0();
extern int fn_8256D710();
extern int fn_8259BB38();
extern int fn_827D9768();


void fn_8256D078(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined4 auStack_50 [2];
  uint auStack_48 [18];
  
  auStack_50[0] = *param_2;
  fn_8259BB38(auStack_48,param_1,auStack_50);
  uVar3 = (ulonglong)auStack_48[0];
  if (uVar3 != *(uint *)(param_1 + 4)) {
    puVar1 = *(uint **)(param_1 + 0x70);
    for (puVar4 = *(uint **)(param_1 + 0x6c); puVar4 != puVar1; puVar4 = puVar4 + 3) {
      cVar2 = fn_827D9768((ulonglong)*puVar4 + 0x1f8,uVar3 + 0x10);
      if (cVar2 != '\0') break;
    }
    if (puVar4 != *(uint **)(param_1 + 0x70)) {
      auStack_48[0] = 0;
      auStack_48[1] = 0;
      fn_82517978(auStack_48,*puVar4,puVar4[1],0);
      fn_8256C5D0(param_1,auStack_48);
      fn_8256D710(auStack_48,param_1 + 0x6c,puVar4);
    }
    puVar1 = *(uint **)(param_1 + 0x80);
    for (puVar4 = *(uint **)(param_1 + 0x7c); puVar4 != puVar1; puVar4 = puVar4 + 3) {
      cVar2 = fn_827D9768((ulonglong)*puVar4 + 0x1f8,uVar3 + 0x28);
      if (cVar2 != '\0') break;
    }
    if (puVar4 != *(uint **)(param_1 + 0x80)) {
      auStack_48[0] = 0;
      auStack_48[1] = 0;
      fn_82517978(auStack_48,*puVar4,puVar4[1],0);
      fn_8256C5D0(param_1,auStack_48);
      fn_8256D710(auStack_48,param_1 + 0x7c,puVar4);
    }
  }
  return;
}

