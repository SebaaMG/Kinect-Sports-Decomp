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
extern unsigned int *auStack_50;


void fn_823D73A0(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 auStack_50 [10];
  
  puVar1 = param_1;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      auStack_50[0] = *puVar2;
      cVar3 = (*param_3)(auStack_50,param_1);
      puVar4 = puVar2;
      puVar5 = puVar1;
      if (cVar3 == '\0') {
        while (cVar3 = (*param_3)(auStack_50,puVar5), cVar3 != '\0') {
          *(undefined4 *)puVar4 = *(undefined4 *)puVar5;
          *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar5 + 4);
          puVar4 = puVar5;
          puVar5 = puVar5 + -1;
        }
        *puVar4 = auStack_50[0];
      }
      else {
        while (param_1 != puVar4) {
          *(undefined4 *)puVar4 = *(undefined4 *)(puVar4 + -1);
          *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar4 + -4);
          puVar4 = puVar4 + -1;
        }
        *param_1 = auStack_50[0];
      }
      puVar1 = puVar1 + 1;
    }
  }
  return;
}

