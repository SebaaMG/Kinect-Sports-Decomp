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
extern int fn_82A2A288();
extern int fn_82E21160();
extern int fn_82E211B0();
extern int fn_82F66368();


undefined8 fn_82E21200(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (-1 - (int)param_2);
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    if (*param_1 == '\0') {
      uVar2 = fn_82E211B0(param_1,pcVar3);
      fn_82F66368(uVar2,(ulonglong)*(uint *)(param_1 + 8) - (ulonglong)*(uint *)(param_1 + 4),
                        param_2,pcVar3);
    }
    else {
      uVar2 = fn_82E21160();
      fn_82A2A288(0,0,param_2,pcVar3,uVar2,pcVar3);
    }
    uVar2 = 1;
    *(char **)(param_1 + 4) = pcVar3 + *(int *)(param_1 + 4);
  }
  return uVar2;
}

