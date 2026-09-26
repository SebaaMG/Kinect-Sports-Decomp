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
extern unsigned int *auStack_130;
extern unsigned int *auStack_270;
extern int fn_82A1CFC8();
extern int fn_82A1E658();
extern int fn_82A21508();
extern int fn_82A2A438();
extern int fn_82A2A958();
extern int fn_82A35B80();
extern int fn_82F664B0();
extern int fn_82F69A80();


undefined8 fn_82A24680(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_270 [44];
  char acStack_244 [276];
  undefined1 auStack_130 [304];
  
  uVar2 = fn_82A2A438(0xffffffff820892f8,auStack_270);
  if ((int)uVar2 != -1) {
    do {
      pcVar4 = acStack_244;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar3 = RtlCompareStringN(acStack_244,pcVar4 + (-1 - (int)acStack_244),0xffffffff820892f0,3,1)
      ;
      if (iVar3 != 0) {
        pcVar4 = acStack_244;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar3 = RtlCompareStringN(acStack_244,pcVar4 + (-1 - (int)acStack_244),0xffffffff820892f4,3,
                                  1);
        if ((iVar3 != 0) &&
           (iVar3 = fn_82A21508(param_1,0xffffffff82a245b8,acStack_244), iVar3 == 0)) {
          fn_82A1E658(uVar2);
          fn_82F664B0(auStack_130,0x104,0xffffffff820892e0);
          fn_82F69A80(auStack_130,0x104,acStack_244);
          fn_82A2A958(auStack_130);
          fn_82A1CFC8();
          return 0;
        }
      }
      iVar3 = fn_82A35B80(uVar2,auStack_270);
    } while (iVar3 != 0);
    fn_82A1E658(uVar2);
  }
  return 1;
}

