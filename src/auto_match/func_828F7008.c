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
extern unsigned int *auStack_110;
extern int fn_828F5960();
extern int fn_828FA8D8();
extern int fn_828FADC0();


void fn_828F7008(int param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_110 [256];
  
  *(undefined4 *)(param_1 + 0x50) = 1;
  if (*(int *)(param_1 + 0x5c) != 0) {
    pcVar6 = "syntax error";
    pcVar7 = param_2;
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      if ((*(int *)(param_1 + 0x58) == 0) || (*(int *)(param_1 + 0x280) != 9)) {
        fn_828FADC0(param_1 + 0x18,0x5dc,param_1 + 0x280);
        return;
      }
      puVar5 = *(undefined1 **)(param_1 + 0x288);
      uVar3 = 0x5e0;
      uVar4 = 0xffffffff82029440;
    }
    else {
      fn_828F5960(auStack_110,0x100,param_2,param_3);
      puVar5 = auStack_110;
      uVar4 = 0xffffffff821c4da8;
      uVar3 = 0;
    }
    fn_828FA8D8(param_1 + 0x18,param_1 + 0x280,uVar3,uVar4,puVar5);
  }
  return;
}

