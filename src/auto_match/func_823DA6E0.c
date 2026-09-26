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
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_823DA6E0(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  puVar3 = param_1;
  puVar1 = param_1;
  while (puVar1 = puVar1 + 3, puVar1 != param_2) {
    uStack_50 = *puVar1;
    uStack_4c = puVar1[1];
    uStack_48 = puVar1[2];
    cVar2 = (*param_3)(&uStack_50,param_1);
    puVar4 = puVar1;
    puVar5 = puVar3;
    if (cVar2 == '\0') {
      while (cVar2 = (*param_3)(&uStack_50,puVar5), cVar2 != '\0') {
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        puVar4[2] = puVar5[2];
        puVar4 = puVar5;
        puVar5 = puVar5 + -3;
      }
      *puVar4 = uStack_50;
      puVar4[1] = uStack_4c;
      puVar4[2] = uStack_48;
    }
    else {
      while (param_1 != puVar4) {
        *puVar4 = puVar4[-3];
        puVar4[1] = puVar4[-2];
        puVar4[2] = puVar4[-1];
        puVar4 = puVar4 + -3;
      }
      *param_1 = uStack_50;
      param_1[1] = uStack_4c;
      param_1[2] = uStack_48;
    }
    puVar3 = puVar3 + 3;
  }
  return;
}

