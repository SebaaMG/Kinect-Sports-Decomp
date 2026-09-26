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
extern unsigned int *auStack_80;
extern int fn_82A34B08();
extern int fn_82A34C78();
extern int fn_82A34DC8();
extern int fn_82A37768();
extern unsigned int iStack_78;


undefined8 fn_82A35560(int param_1)

{
  int iVar1;
  uint auStack_80 [2];
  int iStack_78;
  
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(0xffffffff820893a4);
  }
  while (iVar1 = fn_82A37768(param_1 + 0xc4,auStack_80), iVar1 != 0) {
    if (auStack_80[0] == 0) {
      fn_82A34B08(param_1,auStack_80);
    }
    else if (auStack_80[0] == 1) {
      fn_82A34C78(param_1,auStack_80);
    }
    else if (auStack_80[0] < 3) {
      fn_82A34DC8(param_1,auStack_80);
    }
    if (iStack_78 != 0) {
      NtSetEvent(iStack_78,0);
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    (**(code **)(param_1 + 0x48))();
  }
  return 0;
}

