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
extern unsigned int *auStack_120;
extern unsigned int *auStack_230;
extern unsigned int *auStack_440;
extern int fn_82579C28();
extern int fn_8257A438();
extern int fn_8257A660();
extern int fn_82F674A8();
extern int fn_82F67988();
extern int fn_82F68150();
extern int fn_82F68240();
extern int fn_82F68320();
extern int fn_82F68370();


longlong fn_8257A140(undefined8 param_1)

{
  char cVar1;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar2;
  char *pcVar5;
  undefined4 auStack_440 [3];
  char acStack_431 [513];
  undefined1 auStack_230 [272];
  undefined1 auStack_120 [288];
  
  fn_82579C28();
  fn_8257A438(0xffffffff821c134c,auStack_230);
  auStack_440[0] = 0;
  iVar3 = fn_82F674A8(auStack_440,auStack_230,0xffffffff821c550c);
  if (iVar3 == 0) {
    acStack_431[1] = 0;
    lVar2 = 0;
    do {
      iVar3 = fn_82F68320(auStack_440[0]);
      if ((iVar3 != 0) ||
         (iVar3 = fn_82F68370(acStack_431 + 1,0x1ff,auStack_440[0]), iVar3 == 0)) break;
      pcVar5 = acStack_431 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + (-1 - (int)(acStack_431 + 1));
      if ((pcVar5 != (char *)0x0) && (acStack_431[(int)pcVar5] == '\n')) {
        acStack_431[(int)pcVar5] = '\0';
      }
      lVar2 = fn_8257A660(param_1,acStack_431 + 1);
    } while (lVar2 == 0);
    fn_82F67988(auStack_440[0]);
  }
  else {
    auStack_440[0] = 0;
    puVar4 = (undefined4 *)fn_82F68240();
    fn_82F68150(auStack_120,0x100,*puVar4);
    lVar2 = 2;
  }
  return lVar2;
}

