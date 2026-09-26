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
extern unsigned int *auStack_1020;
extern unsigned int *auStack_1060;
extern unsigned int *auStack_1070;
extern unsigned int *auStack_1088;
extern unsigned int *auStack_1090;
extern unsigned int lbl_83219B8C;
extern unsigned int uStack_1078;
extern unsigned int uStack_1080;


ulonglong fn_82A1F740(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 auStack_1090 [2];
  uint auStack_1088 [2];
  undefined4 uStack_1080;
  undefined1 *puStack_107c;
  undefined4 uStack_1078;
  undefined1 auStack_1070 [16];
  undefined1 auStack_1060 [40];
  longlong alStack_1038 [3];
  undefined1 auStack_1020 [4128];
  
  RtlInitAnsiString(auStack_1070,0xffffffff82089290);
  uStack_1080 = 0xfffffffd;
  puStack_107c = auStack_1070;
  uStack_1078 = 0x40;
  uVar1 = (**(code **)(lbl_83219B8C + 0xc))
                    (auStack_1090,0x40100000,&uStack_1080,auStack_1088,0,0,0,3);
  if ((-1 < (longlong)uVar1) &&
     (uVar1 = (**(code **)(lbl_83219B8C + 0x20))
                        (auStack_1090[0],auStack_1088,auStack_1060,0x38,0x22), -1 < (longlong)uVar1)
     ) {
    uVar2 = param_1 & 0xffffffff;
    while (uVar2 != 0) {
      uVar2 = 0x1000;
      if ((param_1 & 0xffffffff) < 0x1000) {
        uVar2 = param_1;
      }
      uVar1 = NtWriteFile(auStack_1090[0],0,0,0,auStack_1088,auStack_1020,0x1000,alStack_1038);
      if ((int)uVar1 == 0x103) {
        uVar1 = NtWaitForSingleObjectEx(auStack_1090[0],1,0,0);
        if ((longlong)uVar1 < 0) break;
        uVar1 = (ulonglong)auStack_1088[0];
      }
      if ((int)uVar1 < 0) break;
      alStack_1038[0] = (uVar2 & 0xffffffff) + alStack_1038[0];
      param_1 = param_1 - uVar2;
      uVar2 = param_1;
    }
    NtClose(auStack_1090[0]);
  }
  return uVar1;
}

