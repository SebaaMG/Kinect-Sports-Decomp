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
extern int fn_82656DF8();
extern int fn_82657168();
extern int fn_82657578();
extern unsigned int lbl_83275D94;
extern unsigned int lbl_83275D95;
extern unsigned int lbl_83275D97;


int fn_82657E40(int param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  char acStack_110 [272];
  
  if (lbl_83275D97 != '\0') {
    if ((*(byte *)(param_1 + 0x5e7c) & 0x10) == 0) {
      lVar2 = fn_82656DF8();
      iVar3 = sprintf(acStack_110,"%s 0x%08X",0xffffffff821cd980,
                      -(ulonglong)(lVar2 == 0) & 0xffffffff80004005);
      if ((int *)*__imp__KeCertMonitorData == (int *)0x0) {
        if (*__imp__KeDebugMonitorData == 0) {
          return iVar3;
        }
        pcVar1 = *(code **)(*__imp__KeDebugMonitorData + 0x18);
      }
      else {
        pcVar1 = *(code **)*__imp__KeCertMonitorData;
        if (pcVar1 == (code *)0x0) {
          return iVar3;
        }
      }
      param_1 = (*pcVar1)(0x1b,acStack_110);
    }
    else if (lbl_83275D94 == '\0') {
      if (lbl_83275D95 != '\0') {
        param_1 = fn_82657578();
      }
    }
    else {
      param_1 = fn_82657168();
    }
  }
  return param_1;
}

