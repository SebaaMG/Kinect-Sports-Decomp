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
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_82837BA0();
extern int fn_82837D98();


void fn_82547EA0(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int aiStack_20 [2];
  
  pcVar3 = (char *)fn_827D5070(*param_1);
  pcVar4 = "dbtexture";
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    fn_82837BA0(0,*(undefined4 *)(pcVar3 + 0x14));
    fn_82837D98(*(undefined4 *)(pcVar3 + 0x14),0,aiStack_20);
    *(undefined4 *)(aiStack_20[0] + 4) = 0xf00b1ee5;
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

