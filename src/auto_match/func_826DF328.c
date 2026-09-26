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
extern int fn_826D9530();
extern int fn_826DD060();
extern int fn_826DEF90();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


void fn_826DF328(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uStack_50;
  int iStack_4c;
  int *piStack_48;
  int iStack_44;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x74) < 2) {
    RtlEnterCriticalSection(param_1 + 0xac);
    iVar1 = param_1;
  }
  fn_826DEF90(param_1 + 0xcc,param_2,param_4);
  uStack_50 = (undefined4)param_2;
  fn_826D9530(&piStack_48,param_1 + 0xcc,&uStack_50);
  iStack_4c = iStack_44 * 0x14 + *piStack_48 + 0x10;
  uStack_50 = param_3;
  fn_826DD060(param_1 + 0xd0,param_1 + 0xd0,&uStack_50);
  if (iVar1 != 0) {
    RtlLeaveCriticalSection(iVar1 + 0xac);
  }
  return;
}

