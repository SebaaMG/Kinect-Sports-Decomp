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
extern unsigned int *auStack_20;
extern int fn_82A5D578();
extern unsigned int iStack_14;


undefined8 fn_82A5D768(int param_1)

{
  uint auStack_20 [2];
  code *pcStack_18;
  int iStack_14;
  
  XAudioGetSpeakerConfig(auStack_20);
  iStack_14 = param_1 + -4;
  *(undefined8 *)(param_1 + 0x34) = 0;
  pcStack_18 = fn_82A5D578;
  *(uint *)(param_1 + 0x20) =
       ((-(uint)((auStack_20[0] & 0x80000000) != 0) & 0xfffffffe) + 4) * 0x100;
  XAudioRegisterRenderDriverClient(&pcStack_18,param_1 + 0x1c);
  return 0;
}

