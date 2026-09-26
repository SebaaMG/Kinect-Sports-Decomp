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
extern unsigned int *auStack_250;
extern int fn_82A2B748();
extern int fn_82A2B798();
extern int fn_82CE0BF0();
extern int fn_82CE1EA8();
extern int fn_82CE1F30();
extern int fn_82CE2008();
extern int fn_82CE2100();
extern int fn_82F64CE0();
extern unsigned int iStack_290;
extern unsigned int iStack_298;
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_284;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_294;
extern unsigned int uStack_29c;
extern unsigned int uStack_2a0;
extern unsigned int uStack_50;


ulonglong fn_82CE0EB0(undefined4 param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,
                       int param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  uint uStack_2a0;
  uint uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  int iStack_290;
  uint uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  longlong alStack_280 [6];
  undefined1 auStack_250 [512];
  undefined4 uStack_50;
  
  uStack_50 = 0;
  iStack_298 = 0;
  uStack_29c = 0;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  iVar1 = fn_82CE1EA8(0xd01,&uStack_2a0);
  if ((-1 < iVar1) && (iVar1 = fn_82CE1F30(uStack_2a0,0,2,0,&uStack_29c,0,0), -1 < iVar1)) {
    uVar2 = (ulonglong)uStack_29c;
    iVar1 = fn_82CE1EA8(0xe02,&uStack_2a0);
    if ((-1 < iVar1) &&
       (iVar1 = fn_82CE1F30(uStack_2a0,0,3,0x100,&uStack_29c,0,0), -1 < iVar1)) {
      uVar3 = (ulonglong)uStack_29c;
      iVar1 = fn_82CE1EA8(0x580,&uStack_2a0);
      if ((-1 < iVar1) && (iVar1 = fn_82CE1F30(uStack_2a0,0,2,0,&uStack_29c,0,0), -1 < iVar1))
      {
        lVar4 = uVar2 + 0x5dc + uVar3 + (ulonglong)uStack_29c;
        iVar1 = fn_82CE1EA8(0x583,&uStack_2a0);
        if ((-1 < iVar1) &&
           ((iVar1 = fn_82CE1F30(uStack_2a0,5,0,lVar4,&uStack_29c,0,0), -1 < iVar1 &&
            (iVar1 = XamAlloc(0,uStack_29c,&iStack_298), -1 < iVar1)))) {
          if ((param_4 & 0xffffffff) == 0) {
            param_4 = 0xffffffff820e975c;
            iStack_290 = 1;
          }
          else {
            iStack_290 = fn_82F64CE0(param_4);
            iStack_290 = iStack_290 + 1;
          }
          uStack_288 = 0;
          iVar1 = fn_82CE2008(0x583,uStack_2a0,5,lVar4,iStack_298,uStack_29c,0,0);
          if (-1 < iVar1) {
            fn_82CE0BF0(auStack_250,&stack0x00000014);
            fn_82CE0BF0(auStack_250,&stack0x0000001c);
            fn_82CE0BF0(auStack_250,param_3);
            fn_82CE0BF0(auStack_250,param_4);
            fn_82CE0BF0(auStack_250,&iStack_290);
            fn_82CE0BF0(auStack_250,&uStack_288);
            iVar1 = fn_82CE2100(0,0,uStack_2a0,5,0,auStack_250,uStack_284,&uStack_294);
            if (-1 < iVar1) {
              *(undefined4 *)(uStack_28c + 0x1c) = uStack_294;
              alStack_280[1] = 0;
              alStack_280[2] = 0;
              alStack_280[3] = 0;
              alStack_280[4] = 0;
              alStack_280[0] = (ulonglong)uStack_28c << 0x20;
              iVar1 = XMsgStartIORequest(0xfc,uStack_2a0 & 0xffff | 0x50000,param_5,alStack_280,0x28
                                        );
              if (-1 < iVar1) {
                if (param_5 != 0) {
                  return 0x3e5;
                }
                lVar4 = fn_82A2B798();
                return -(ulonglong)(lVar4 != 0) & 0x65b;
              }
            }
          }
        }
      }
    }
  }
  if (param_5 == 0) {
    fn_82A2B748();
  }
  else {
    *(int *)(param_5 + 0x18) = iVar1;
  }
  if (iStack_298 != 0) {
    XamFree();
  }
  return 0x65b;
}

