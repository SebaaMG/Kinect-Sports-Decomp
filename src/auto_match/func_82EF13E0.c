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
extern unsigned int *auStack_38;
extern int fn_82EF1198();
extern int fn_82EF1220();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


undefined8 fn_82EF13E0(int param_1,int param_2,int *param_3)

{
  int iVar2;
  undefined8 uVar1;
  int *piVar3;
  int iStack0000001c;
  int aiStack_40 [2];
  undefined1 auStack_38 [56];
  
  if ((param_2 == 0) || (param_3 == (int *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    piVar3 = (int *)(param_1 + 4);
    iStack0000001c = param_2;
    while( true ) {
      iVar2 = fn_82EF1198(param_1 + 8,piVar3,aiStack_40,auStack_38);
      if (iVar2 == 0) break;
      *piVar3 = *piVar3 + 1;
    }
    iVar2 = *piVar3;
    aiStack_40[0] = iVar2;
    fn_82EF1220(param_1 + 8,aiStack_40,&stack0x0000001c);
    fn_82EF1220(param_1 + 0x94,&stack0x0000001c,aiStack_40);
    *param_3 = iVar2;
    uVar1 = 0;
  }
  return uVar1;
}

