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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern int fn_82A1E658();
extern int fn_82A29DE8();
extern int fn_82A29FE0();
extern int fn_82E1F8F0();
extern int fn_82F66368();
extern unsigned int uStack_40;


undefined8 fn_82E1FB68(int param_1,ulonglong param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined1 auStack_3c [60];
  
  if ((param_2 & 0xffffffff) != 0) {
    uVar4 = fn_82E1F8F0();
    uVar3 = fn_82A29DE8(param_2,0x40000000,0,0,2,0x80,0);
    if ((int)uVar3 != -1) {
      pcVar2 = *(char **)(param_1 + 0x18);
      pcVar6 = pcVar2;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + (-1 - (int)pcVar2);
      if ((char *)0x1c < pcVar6) {
        pcVar6 = (char *)0x1c;
      }
      uStack_40 = uVar4;
      fn_82F66368(auStack_3c,0x1c,pcVar2,pcVar6);
      iVar5 = fn_82A29FE0(uVar3,&uStack_40,0x20,auStack_50,0);
      if (iVar5 != 0) {
        fn_82A1E658(uVar3);
        return 0;
      }
      fn_82A1E658(uVar3);
    }
  }
  return 0xffffffff80004005;
}

