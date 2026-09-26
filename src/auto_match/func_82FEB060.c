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
extern int fn_82FA5190();
extern int fn_83017108();
extern int fn_8301A7B8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;
extern unsigned int lbl_832642FC;


char fn_82FEB060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  char acStack_40 [64];
  
  RtlEnterCriticalSection(0xffffffff8326434c);
  puVar3 = (undefined4 *)fn_8301A7B8(lbl_832642EC,param_2);
  cVar4 = fn_83017108(lbl_832642FC,param_1,puVar3,param_3,acStack_40);
  *(bool *)param_4 = acStack_40[0] == '\0';
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = puVar3[0x17];
    puVar3[0x17] = (int)((ulonglong)uVar1 - 1);
    uVar2 = lbl_831BC768;
    if ((longlong)((ulonglong)uVar1 - 1) < 1) {
      (**(code **)*puVar3)(puVar3,0);
      fn_82FA5190(uVar2,puVar3);
    }
  }
  RtlLeaveCriticalSection(0xffffffff8326434c);
  return (cVar4 != '\x01') + '\x01';
}

