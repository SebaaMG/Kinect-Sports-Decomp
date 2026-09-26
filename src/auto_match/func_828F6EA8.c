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
extern int fn_828F5778();
extern int fn_828FA8D8();
extern unsigned int iStack_20;


undefined4 fn_828F6EA8(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iStack_20;
  int aiStack_1c [3];
  
  pcVar5 = "__LINE__";
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar5;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    return *(undefined4 *)(param_1 + 0x294);
  }
  iVar3 = fn_828F5778(param_1,param_2,&iStack_20,aiStack_1c);
  if (iVar3 != 0) {
    if (iStack_20 != 0) {
      fn_828FA8D8(param_1 + 0x18,param_1 + 0x280,0x5ed,0xffffffff820293f0);
      return 1;
    }
    if ((((aiStack_1c[0] != 0) && (*(int *)(aiStack_1c[0] + 0xc) == 0)) &&
        (1 < *(int *)(aiStack_1c[0] + 0x10))) && (*(int *)(aiStack_1c[0] + 0x10) < 5)) {
      return *(undefined4 *)(aiStack_1c[0] + 0x18);
    }
    fn_828FA8D8(param_1 + 0x18,param_1 + 0x280,0x5ee,0xffffffff82029330);
  }
  return 0;
}

