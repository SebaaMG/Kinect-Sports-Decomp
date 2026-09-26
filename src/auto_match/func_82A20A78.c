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
extern unsigned int iStack_38;
extern unsigned int lbl_8315D2F8;
extern unsigned int uStack_18;
extern unsigned int uStack_20;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


bool fn_82A20A78(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  short sStack_30;
  short sStack_2e;
  undefined *puStack_2c;
  int aiStack_28 [2];
  undefined4 uStack_20;
  short *psStack_1c;
  undefined4 uStack_18;
  
  iVar2 = NtCreateEvent(&uStack_40,0,1,0);
  if (-1 < iVar2) {
    puStack_2c = lbl_8315D2F8;
    pcVar3 = lbl_8315D2F8;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    sStack_30 = ((short)pcVar3 - (short)lbl_8315D2F8) + -1;
    uStack_20 = 0;
    psStack_1c = &sStack_30;
    uStack_18 = 0x40;
    sStack_2e = sStack_30;
    iVar2 = NtCreateFile(&uStack_3c,0x100001,&uStack_20,aiStack_28,0,0,3,1);
    if (iVar2 < 0) {
      NtClose(uStack_40);
    }
    else {
      iVar2 = NtDeviceIoControlFile(uStack_3c,uStack_40,0,0,aiStack_28,0x24400,0,0);
      if (iVar2 == 0x103) {
        NtWaitForSingleObjectEx(uStack_40,0,0,0);
        iVar2 = aiStack_28[0];
      }
      NtClose(uStack_40);
      NtClose(uStack_3c);
      if (-1 < iVar2) {
        return iStack_38 == 0;
      }
    }
  }
  return true;
}

