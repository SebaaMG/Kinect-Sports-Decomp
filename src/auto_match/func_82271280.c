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
extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern int fn_8262FBD8();
extern int fn_8263B758();
extern int fn_8263BDD8();
extern int fn_82A1DBD8();
extern int fn_82A93C18();
extern int fn_82A93F70();
extern unsigned int iStack_34;
extern unsigned int iStack_5c;
extern unsigned int uStack_38;
extern unsigned int uStack_60;


int * fn_82271280(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined4 auStack_50 [6];
  undefined4 uStack_38;
  int iStack_34;
  
  if ((param_2 == *(int *)(*param_1 + 0x19c)) || (param_2 == *(int *)(*param_1 + 0x1a0))) {
    fn_8263B758(param_2,0,auStack_50);
    piVar1 = param_1 + 6;
    fn_82A93C18(uStack_38,iStack_34,1,0,auStack_50[0],0,0,0xffffffffffffffff);
    fn_82A93F70(piVar1,param_1[5]);
    fn_8263BDD8(piVar1,0,0,0,&uStack_60,&iStack_5c,auStack_54,auStack_58);
    fn_82A1DBD8(uStack_60,*(uint *)(param_2 + 0x20) & 0xfffff000,
                      (longlong)iStack_5c * (longlong)iStack_34);
    fn_8262FBD8(piVar1,param_1[0xe] & 0xfffff000,param_1[0x12] & 0xfffff000);
  }
  else {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

