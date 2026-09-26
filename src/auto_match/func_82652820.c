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
extern unsigned int *__imp__KeCertMonitorData;
extern unsigned int *__imp__KeDebugMonitorData;
extern int fn_826518D0();
extern unsigned int iStack_1c;


void fn_82652820(int param_1)

{
  code *pcVar1;
  code *pcStack_20;
  int iStack_1c;
  
  if ((int *)*__imp__KeCertMonitorData == (int *)0x0) {
    if (*__imp__KeDebugMonitorData == 0) goto code_r0x82652888;
    pcVar1 = *(code **)(*__imp__KeDebugMonitorData + 0x18);
  }
  else {
    pcVar1 = *(code **)*__imp__KeCertMonitorData;
    if (pcVar1 == (code *)0x0) goto code_r0x82652888;
  }
  (*pcVar1)(0x1c,0xffffffff826525a0);
code_r0x82652888:
  pcStack_20 = fn_826518D0;
  iStack_1c = param_1;
  if (*__imp__KeDebugMonitorData != 0) {
    (**(code **)(*__imp__KeDebugMonitorData + 0x18))(0x42,&pcStack_20);
  }
  if (*__imp__KeDebugMonitorData != 0) {
    (**(code **)(*__imp__KeDebugMonitorData + 0x18))(0x59,0xffffffff82652640);
  }
  *(undefined4 *)(param_1 + 0x5550) = 0;
  *(undefined4 *)(param_1 + 0x5554) = 0;
  *(undefined4 *)(param_1 + 0x5558) = 1;
  return;
}

