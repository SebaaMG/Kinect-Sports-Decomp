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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82517A50();
extern int fn_8256DE08();
extern int iRam00000000;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


/* WARNING: Removing unreachable block (ram,0x827d6ba8) */
/* WARNING: Removing unreachable block (ram,0x827d6b70) */
/* WARNING: Removing unreachable block (ram,0x827d6b90) */
/* WARNING: Removing unreachable block (ram,0x827d6bac) */
/* WARNING: Removing unreachable block (ram,0x827d6b80) */

int fn_827D6A88(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined4 uStack0000001c;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [56];
  
  uStack0000001c = param_2;
  fn_8256DE08(auStack_48,0);
  fn_8256DE08(auStack_40,0);
  RtlEnterCriticalSection(param_1 + 0x6c);
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x44);
  if (uVar1 != *(uint *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_48,uVar1);
      fn_8256DE08(auStack_38,0);
      (**(code **)(iRam00000000 + 0x14))(0,&stack0x0000001c,0,auStack_38,auStack_50,auStack_40,0);
      uVar1 = uVar1 + 8;
    } while ((uVar1 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(param_1 + 0x6c);
  return param_1 + 1000;
}

