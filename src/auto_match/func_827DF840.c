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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827E11C0();
extern int fn_827E2790();
extern unsigned int iStack_34;


void fn_827DF840(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 auStack_30 [48];
  
  RtlEnterCriticalSection(param_1 + 400);
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + -1;
  puVar1 = (undefined4 *)fn_827E2790(auStack_38,param_2);
  fn_827D5070(*puVar1);
  fn_827E11C0(auStack_30,param_1 + 0xf0,auStack_40);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  RtlLeaveCriticalSection(param_1 + 400);
  return;
}

