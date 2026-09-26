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
extern unsigned int *auStack_140;
extern unsigned int *auStack_240;
extern int fn_828358A8();
extern int fn_828358F8();
extern int fn_828359F8();
extern int fn_828369A8();
extern int fn_82F64020();
extern int fn_82F6D000();


void fn_82836B70(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,char param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [320];
  
  lVar1 = fn_828358F8(param_1,param_3);
  auStack_240[0] = 0;
  if (param_6 == '\0') {
    fn_828359F8(param_1,auStack_240,param_5);
  }
  uVar2 = fn_828358A8(param_1);
  cVar3 = fn_828369A8(param_1,lVar1 + param_4,auStack_140);
  if (cVar3 == '\0') {
    if ((int)param_7 < 0) {
      uVar4 = 0xffffffff8201f460;
    }
    else {
      uVar4 = 0xffffffff8201f458;
      uVar2 = param_7;
    }
    fn_82F64020(auStack_240,0x100,uVar4,auStack_240,uVar2);
    fn_82F6D000(param_2,0xffffffff8201f468,auStack_240);
    (**(code **)(**(int **)(param_1 + 8) + 4))
              (*(int **)(param_1 + 8),param_2,param_1,lVar1 + param_4,param_5,1,0xffffffffffffffff);
  }
  else {
    fn_82F64020(auStack_240,0x100,0xffffffff8201f44c,auStack_240,auStack_140);
    fn_82F6D000(param_2,0xffffffff8201f454,auStack_240);
  }
  return;
}

