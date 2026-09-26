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
extern unsigned int *auStack_1020;
extern int fn_828F5960();
extern int fn_828FA8D8();
extern int fn_828FADC0();
extern unsigned int uStack_21;


void fn_828FF918(undefined4 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_1020 [4095];
  undefined1 uStack_21;
  
  param_1[0x13] = 1;
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
    fn_828FADC0(*param_1,2000,param_1 + 4);
    if (param_1[4] != 9) {
      return;
    }
    if (param_1[0x16] == 0x7e7) {
      fn_828FA8D8(*param_1,param_1 + 4,0x7e7,0xffffffff8202ced8,param_1[6]);
    }
    if (param_1[0x16] != 0x7e8) {
      return;
    }
    puVar5 = (undefined1 *)param_1[6];
    uVar3 = 0x7e8;
    uVar4 = 0xffffffff8202ceb4;
  }
  else {
    fn_828F5960(auStack_1020,0x1000,param_2,param_3);
    uStack_21 = 0;
    puVar5 = auStack_1020;
    uVar4 = 0xffffffff821c4da8;
    uVar3 = 0;
  }
  fn_828FA8D8(*param_1,param_1 + 4,uVar3,uVar4,puVar5);
  return;
}

