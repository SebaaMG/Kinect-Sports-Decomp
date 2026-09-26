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
extern unsigned int *auStack_30;
extern int fn_82A2B760();
extern int fn_8314354C();
extern unsigned int iStack_38;
extern unsigned int uStack_34;


int fn_8306C5D0(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int aiStack_40 [2];
  int iStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [48];
  
  aiStack_40[0] = param_2;
  if ((param_2 == 0) && (iVar1 = fn_8314354C(aiStack_40,0x1f0003,0), iVar1 < 0)) {
    fn_82A2B760();
  }
  else {
    if ((int)param_1 == -1) {
      if (param_2 == 0) {
        return aiStack_40[0];
      }
      aiStack_40[0] = 0;
      fn_82A2B760(0xffffffffc000000d);
      return aiStack_40[0];
    }
    iStack_38 = aiStack_40[0];
    uStack_34 = param_3;
    iVar1 = NtSetInformationFile(param_1,auStack_30,&iStack_38,8,0x1e);
    if (-1 < iVar1) {
      return aiStack_40[0];
    }
    fn_82A2B760();
    if (param_2 == 0) {
      NtClose(aiStack_40[0]);
    }
  }
  return 0;
}

