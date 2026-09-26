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
extern unsigned int *auStack_2d;


void fn_82D808D0(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  undefined1 auStack_2d [45];
  
  (**(code **)(*param_1 + 0x20))(&cStack_30,param_1,param_2);
  piVar4 = param_1 + 4;
  pcVar2 = (char *)(**(code **)(*(int *)(param_3 + 8) + 4))(auStack_2d,param_3 + 8,piVar4,param_2);
  if (*pcVar2 == '\0') {
    if (cStack_30 != '\0') {
      (**(code **)(*param_1 + 0x24))(param_1,param_2);
    }
    if (*(char *)(param_2 + 0x18) != '\x02') {
      return;
    }
    (**(code **)(*(int *)(*(char *)(param_2 + 0x10) + param_2) + 0x20))
              (&cStack_2e,*(char *)(param_2 + 0x10) + param_2,piVar4);
    if (cStack_2e == '\0') {
      return;
    }
    cVar3 = *(char *)(param_2 + 0x10);
    pcVar1 = *(code **)(*(int *)(cVar3 + param_2) + 0x24);
  }
  else {
    if (cStack_30 == '\0') {
      (**(code **)(*param_1 + 0x1c))(param_1,param_2);
    }
    if (*(char *)(param_2 + 0x18) != '\x02') {
      return;
    }
    (**(code **)(*(int *)(*(char *)(param_2 + 0x10) + param_2) + 0x20))
              (&cStack_2f,*(char *)(param_2 + 0x10) + param_2,piVar4);
    if (cStack_2f != '\0') {
      return;
    }
    cVar3 = *(char *)(param_2 + 0x10);
    pcVar1 = *(code **)(*(int *)(cVar3 + param_2) + 0x1c);
  }
  (*pcVar1)(cVar3 + param_2,piVar4);
  return;
}

