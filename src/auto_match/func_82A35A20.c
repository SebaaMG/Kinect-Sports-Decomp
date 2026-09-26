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
extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int *__imp__XboxHardwareInfo;
extern unsigned int *auStack_1c;
extern int iRam83219d3c;
extern unsigned int uRam8329eb20;
extern unsigned int uRam8329eb24;
extern unsigned int uRam8329eb28;
extern unsigned int uRam8329eb2c;
extern unsigned int uRam8329eb30;
extern unsigned int uRam8329eb34;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82A35A20(void)

{
  int iVar1;
  int aiStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  if (iRam83219d3c == 0) {
    if ((*__imp__KeDebugMonitorData != 0) &&
       (aiStack_40[0] = 0, (*__imp__XboxHardwareInfo & 0x10) != 0)) {
      iVar1 = XexGetModuleHandle(0xffffffff820893b8,aiStack_40);
      if ((-1 < iVar1) &&
         ((aiStack_40[0] != 0 &&
          (iVar1 = XexGetProcedureAddress(aiStack_40[0],0x9b,&uStack_30), -1 < iVar1)))) {
        iVar1 = XexGetProcedureAddress(aiStack_40[0],0x9c,&uStack_2c);
        if ((-1 < iVar1) &&
           ((((iVar1 = XexGetProcedureAddress(aiStack_40[0],0x9d,&uStack_28), -1 < iVar1 &&
              (iVar1 = XexGetProcedureAddress(aiStack_40[0],0x9e,&uStack_24), -1 < iVar1)) &&
             (iVar1 = XexGetProcedureAddress(aiStack_40[0],0x9f,&uStack_20), -1 < iVar1)) &&
            (iVar1 = XexGetProcedureAddress(aiStack_40[0],0xa0,auStack_1c), -1 < iVar1)))) {
          uRam8329eb24 = uStack_2c;
          uRam8329eb2c = uStack_24;
          uRam8329eb34 = auStack_1c[0];
          sync(1);
          uRam8329eb20 = uStack_30;
          uRam8329eb28 = uStack_28;
          uRam8329eb30 = uStack_20;
          sync(1);
        }
      }
    }
    iRam83219d3c = 1;
  }
  return;
}

