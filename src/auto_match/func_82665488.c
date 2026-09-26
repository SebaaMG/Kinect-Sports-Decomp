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
extern int fn_8247E6E0();
extern int fn_8257B0F8();
extern int fn_826670F0();
extern int fn_8266C340();
extern int fn_82F69B70();
extern int fn_82F69CA0();
extern unsigned int iStack_20;


void fn_82665488(char *param_1)

{
  int iVar1;
  char *pcStack00000014;
  int iStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  
  pcStack00000014 = param_1;
  if (param_1 == (char *)0x0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x323,0xffffffff820024ac);
  }
  iStack_20 = fn_82F69B70(pcStack00000014);
  if (iStack_20 < 1) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x327,0xffffffff82002494);
  }
  fn_82F69CA0(pcStack00000014,iStack_20 + 1);
  iVar1 = fn_8247E6E0(pcStack00000014,0xffffffff82002490);
  if (iVar1 == 0) {
    pcStack_18 = pcStack00000014;
  }
  else {
    pcStack_18 = (char *)(iVar1 + 2);
  }
  pcStack_1c = pcStack_18;
  while ((pcStack_1c != (char *)0x0 && (*pcStack_1c != '\0'))) {
    if (*pcStack_1c == '\\') {
      while (*pcStack_1c == '\\') {
        fn_826670F0(pcStack00000014,iStack_20,pcStack_1c);
        iStack_20 = iStack_20 + -1;
      }
      pcStack_1c = pcStack_1c + 1;
    }
    else {
      pcStack_1c = (char *)fn_8257B0F8(pcStack_1c,0x5c);
      if (pcStack_1c != (char *)0x0) {
        pcStack_1c = pcStack_1c + 1;
      }
    }
  }
  if (pcStack00000014[iStack_20 + -1] == '\\') {
    pcStack00000014[iStack_20 + -1] = '\0';
  }
  return;
}

