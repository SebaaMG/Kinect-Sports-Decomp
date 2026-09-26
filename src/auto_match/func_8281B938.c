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
extern unsigned int *auStack_240;
extern unsigned int uStack_250;
extern unsigned int uStack_254;
extern unsigned int uStack_258;
extern unsigned int uStack_264;
extern unsigned int uStack_268;
extern unsigned int uStack_26c;
extern unsigned int uStack_26d;
extern unsigned int uStack_26e;
extern unsigned int uStack_26f;
extern unsigned int uStack_270;


void fn_8281B938(code *param_1,int param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 uStack_270;
  undefined1 uStack_26f;
  undefined1 uStack_26e;
  undefined1 uStack_26d;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  char *pcStack_260;
  undefined4 *puStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 auStack_240 [64];
  char acStack_140 [320];
  
  if (((param_2 != 0) && ((*(uint *)(param_2 + 0xc) & 4) != 0)) && (param_6 != 1)) {
    param_3 = (ulonglong)*(uint *)(param_2 + 0x78) + param_3;
    param_4 = param_4 + ((ulonglong)*(uint *)(param_2 + 0x78) & 0x7fffffff) * -2;
  }
  if (param_5 == 0) {
    if (param_1 == (code *)0x0) {
      return;
    }
    puVar3 = (undefined1 *)0x0;
  }
  else {
    uStack_270 = *(undefined1 *)(param_5 + 0x10);
    uStack_26f = *(undefined1 *)(param_5 + 0x11);
    uStack_26e = *(undefined1 *)(param_5 + 0x12);
    uStack_26d = *(undefined1 *)(param_5 + 0x13);
    uStack_26c = *(undefined4 *)(param_5 + 0x18);
    uStack_268 = *(undefined4 *)(param_5 + 0x1c);
    uStack_264 = *(undefined4 *)(param_5 + 0x20);
    pcVar4 = *(char **)(param_5 + 0x24);
    iVar5 = -(int)pcVar4;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)(acStack_140 + iVar5)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcStack_260 = acStack_140;
    iVar5 = 0;
    if (*(int *)(param_5 + 0x28) == 0) {
      auStack_240[0] = 0;
    }
    else {
      iVar2 = *(int *)(param_5 + 0x28);
      do {
        *(undefined4 *)((int)auStack_240 + iVar5) = *(undefined4 *)(iVar5 + iVar2);
        if (*(int *)(iVar5 + iVar2) == 0) break;
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0x100);
    }
    uStack_258 = *(undefined4 *)(param_5 + 0xc);
    puStack_25c = auStack_240;
    uStack_254 = *(undefined4 *)(param_5 + 0x2c);
    uStack_250 = *(undefined4 *)(param_5 + 0x30);
    if (param_1 == (code *)0x0) {
      return;
    }
    puVar3 = &uStack_270;
  }
  (*param_1)(param_2,param_3,param_4,puVar3);
  return;
}

