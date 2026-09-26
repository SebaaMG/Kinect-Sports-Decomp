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
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int lbl_83219B8C;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


longlong fn_82A20F98(longlong *param_1)

{
  longlong lVar1;
  undefined4 auStack_60 [2];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 auStack_30 [8];
  longlong lStack_28;
  int iStack_20;
  int iStack_1c;
  
  RtlInitAnsiString(auStack_58,0xffffffff821a6764);
  puStack_44 = auStack_58;
  uStack_48 = 0xfffffffd;
  uStack_40 = 0x40;
  lVar1 = NtOpenFile(auStack_60,0x100001,&uStack_48,auStack_50,3,0x800021);
  if (-1 < lVar1) {
    lVar1 = NtQueryVolumeInformationFile(auStack_60[0],auStack_50,auStack_30,0x18,3);
    (**(code **)(lbl_83219B8C + 4))(auStack_60[0]);
  }
  if (-1 < (int)lVar1) {
    *param_1 = ((longlong)iStack_20 * (longlong)iStack_1c & 0xffffffffU) * lStack_28;
  }
  return lVar1;
}

