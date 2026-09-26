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
extern unsigned int *auStack_30;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


longlong fn_82A1CB48(undefined4 param_1,int param_2)

{
  longlong lVar1;
  undefined4 auStack_50 [2];
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  int iStack_20;
  int iStack_1c;
  
  uStack_40 = 0;
  uStack_38 = 0x40;
  uStack_3c = param_1;
  lVar1 = NtOpenFile(auStack_50,0x100001,&uStack_40,auStack_48,3,0x800021);
  if (-1 < lVar1) {
    lVar1 = NtQueryVolumeInformationFile(auStack_50[0],auStack_48,auStack_30,0x18,3);
    NtClose(auStack_50[0]);
    if ((-1 < (int)lVar1) && (iStack_20 * iStack_1c != param_2)) {
      lVar1 = -0x3ffffeb1;
    }
  }
  return lVar1;
}

