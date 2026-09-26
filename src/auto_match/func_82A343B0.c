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
extern unsigned int *auStack_20;
extern int fn_82F691F0();


longlong fn_82A343B0(longlong param_1)

{
  longlong lVar1;
  undefined4 auStack_20 [2];
  
  auStack_20[0] = 0;
  if ((((((*__imp__KeDebugMonitorData != 0) && ((*__imp__XboxHardwareInfo & 0x10) != 0)) &&
        (lVar1 = XexGetModuleHandle(0xffffffff820893b8,auStack_20), -1 < lVar1)) &&
       ((lVar1 = XexGetProcedureAddress(auStack_20[0],0x9b,param_1 + 0x34), -1 < lVar1 &&
        (lVar1 = XexGetProcedureAddress(auStack_20[0],0x9c,param_1 + 0x38), -1 < lVar1)))) &&
      ((lVar1 = XexGetProcedureAddress(auStack_20[0],0x9d,param_1 + 0x3c), -1 < lVar1 &&
       ((lVar1 = XexGetProcedureAddress(auStack_20[0],0x9e,param_1 + 0x40), -1 < lVar1 &&
        (lVar1 = XexGetProcedureAddress(auStack_20[0],0x9f,param_1 + 0x44), -1 < lVar1)))))) &&
     (lVar1 = XexGetProcedureAddress(auStack_20[0],0xa0,param_1 + 0x48), -1 < lVar1)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x34,0,0x18);
}

